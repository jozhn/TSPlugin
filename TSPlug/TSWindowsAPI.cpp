#include "StdAfx.h"
#include "TSWindowsAPI.h"
#include <Tlhelp32.h> 
#include <psapi.h>
#include "TSMyUser32DllFuntion.h"
#include "TSMyKernel32DllFuntion.h"
#include "TSRuntime.h"
#pragma comment ( lib, "psapi.lib" )

extern myOpenProcess my_OpenProcess;
extern myScreenToClient my_ScreenToClient;
extern myClientToScreen my_ClientToScreen;

DWORD MyGetCursorPosRet=0;
__declspec(naked) BOOL WINAPI My_GetCursorPos(   LPPOINT lpPoint)
{
	_asm
	{
			mov edi,edi
			push ebp
			mov ebp,esp
			jmp MyGetCursorPosRet;
	}
}

TSWindowsAPI::TSWindowsAPI(void)
	{
	//if(TSRuntime::InitialWindowsVersion()!=4)//����win7ϵͳ
		//{
			//TSRuntime::IsInitialmyUser32module=InitialMyUser32Dll();
			//TSRuntime::IsInitialmykernel32module=InitialMykernel32Dll();

			//if(TSRuntime::IsInitialmyUser32module==false||TSRuntime::IsInitialmykernel32module==false)
			//  ::MessageBox(0,L"InitialMyUser32Dllʧ��",L"TS",0);
			//else
			//   ::MessageBox(0,L"InitialMyUser32Dll�ɹ�",L"TS",0);
		//}
	//else
	//	{
	//		InitialMykernel32DllWIN7();
	//	}
	if(MyGetCursorPosRet==0)
	{
		MyGetCursorPosRet=(DWORD)::GetProcAddress(::GetModuleHandle(L"user32.dll"),"GetCursorPos");
		MyGetCursorPosRet+=5;
	}
	retstringlen=0;
	WindowVerion=TSRuntime::InitialWindowsVersion();
	IsEuemprosuccess=0;
	memset(npid,0,MAX_PATH);
	}

TSWindowsAPI::~TSWindowsAPI(void)
	{
	}



BOOL TSWindowsAPI::EnumProcessbyName(DWORD   dwPID,   LPCWSTR   ExeName,LONG type)   
{   
	if(IsEuemprosuccess==0)
		{
			int nItem = 0;	// �����
			PROCESSENTRY32 pe32 = { sizeof(PROCESSENTRY32) }; 
			HANDLE hProcessSnap = ::CreateToolhelp32Snapshot(TH32CS_SNAPPROCESS, 0); 
			if(hProcessSnap == INVALID_HANDLE_VALUE) 
				return FALSE; 
			if(::Process32First(hProcessSnap, &pe32)) 
				{ 
				   do 
					{ 
					if(type==1)
						{
						if(wcsstr(pe32.szExeFile,ExeName)!=NULL) //ģ��ƥ��
							{
								npid[nItem]=pe32.th32ProcessID;
								IsEuemprosuccess++;
								nItem++;
							}
						}
					else
						{
						if(!wcsicmp(pe32.szExeFile,ExeName))
							{
							   npid[nItem]=pe32.th32ProcessID;
							   IsEuemprosuccess++;
							   nItem++;
							}
						}
					
					} 
					while(::Process32Next(hProcessSnap, &pe32)); 
				}
			::CloseHandle(hProcessSnap);
			if( IsEuemprosuccess>0)
				return TRUE;
		}
	else
		{
			 for(int i=0;i<IsEuemprosuccess;i++)
				 {
					if(dwPID==npid[i])
						return TRUE;
				 }
		}

	return   FALSE;   
}


DWORD  TSWindowsAPI::FindChildWnd(HWND hchile, wchar_t *title,wchar_t *classname,wchar_t *retstring,bool isGW_OWNER,bool isVisible,wchar_t  *process_name)
	{
	hchile=::GetWindow(hchile,GW_HWNDFIRST);
	while(hchile!=NULL)
		{

		if(isGW_OWNER)   //�ж��Ƿ�Ҫƥ�������ߴ���Ϊ0�Ĵ���,����������
			if(::GetWindow(hchile,GW_OWNER)!=0)
				{
					hchile=::GetWindow(hchile,GW_HWNDNEXT);   //��ȡ��һ������
					continue;
				}

		if(isVisible)  //�ж��Ƿ�ƥ����Ӵ���
			if(::IsWindowVisible( hchile )==false)
				{
					hchile=::GetWindow(hchile,GW_HWNDNEXT);   //��ȡ��һ������
					continue;
				}
		if(title==NULL&&classname==NULL)
			{
			if(process_name)
				{
				DWORD pid=0;
				GetWindowThreadProcessId(hchile,&pid);
				if(EnumProcessbyName(pid,process_name))
					{
					if(retstring)
						{
							if(retstringlen==0)
								retstringlen=wcslen(retstring);
							if(retstringlen>1)
								swprintf(retstring,L"%s,%d", retstring,hchile);
							else
								swprintf(retstring,L"%d",hchile);
						}
					else
						return	(DWORD)hchile;
					}
				}
			else
				{
				if(retstring)
					{
						int len=wcslen(retstring);
						if(len>1)
							swprintf(retstring,L"%s,%d", retstring,hchile);
						else
							swprintf(retstring,L"%d",hchile);
					}
				else
				  return	(DWORD)hchile;
				}
			}
		else if(title!=NULL&&classname!=NULL)
			{
				wchar_t WindowClassName[MAX_PATH] = {0};
				::GetClassName(hchile, WindowClassName, MAX_PATH);
				wchar_t WindowTitle[MAX_PATH] = {0};
				::GetWindowText(hchile, WindowTitle, MAX_PATH);
				if(wcslen(WindowClassName)>1&&wcslen(WindowTitle)>1)
					{
					wchar_t *strfindclass=wcsstr(WindowClassName,classname);   //ģ��ƥ��
					wchar_t *strfindtitle=wcsstr(WindowTitle,title);   //ģ��ƥ��
					if(strfindclass&&strfindtitle)
						{
						if(process_name)//EnumWindowByProcess
							{
							DWORD pid=0;
							GetWindowThreadProcessId(hchile,&pid);
							if(EnumProcessbyName(pid,process_name))
								{
								if(retstring)
									{
										if(retstringlen==0)
											retstringlen=wcslen(retstring);
										if(retstringlen>1)
											swprintf(retstring,L"%s,%d", retstring,hchile);
										else
											swprintf(retstring,L"%d",hchile);
									}
								else 
									return (DWORD)hchile;
								}
							}
						else
							{
							if(retstring)
								{
									if(retstringlen==0)
										retstringlen=wcslen(retstring);
									if(retstringlen>1)
										swprintf(retstring,L"%s,%d", retstring,hchile);
									else
										swprintf(retstring,L"%d",hchile);
								}
							else 
								return (DWORD)hchile;
							}
						}
					}
				
			}
		else if(title!=NULL)
			{

				wchar_t WindowTitle[MAX_PATH] = {0};
				::GetWindowText(hchile, WindowTitle, MAX_PATH);
				if(wcslen(WindowTitle)>1)
					{
					wchar_t *strfind=wcsstr(WindowTitle,title);   //ģ��ƥ��
					if(strfind)
						{
						if(process_name)//EnumWindowByProcess
							{
							DWORD pid=0;
							GetWindowThreadProcessId(hchile,&pid);
							if(EnumProcessbyName(pid,process_name))
								{
								if(retstring)
									{
										if(retstringlen==0)
											retstringlen=wcslen(retstring);
										if(retstringlen>1)
											swprintf(retstring,L"%s,%d", retstring,hchile);
										else
											swprintf(retstring,L"%d",hchile);
									}
								else
									return (DWORD)hchile;
								}
							}
						else
							{
							if(retstring)
								{
									if(retstringlen==0)
										retstringlen=wcslen(retstring);
									if(retstringlen>1)
										swprintf(retstring,L"%s,%d", retstring,hchile);
									else
										swprintf(retstring,L"%d",hchile);
								}
							else
								return (DWORD)hchile;
							}
						}
					}
				
			}
		else if(classname!=NULL)
			{
			wchar_t WindowClassName[MAX_PATH] = {0};
			::GetClassName(hchile, WindowClassName, MAX_PATH);
			if(wcslen(WindowClassName)>1)
				{
				wchar_t *strfind=wcsstr(WindowClassName,classname);   //ģ��ƥ��
				if(strfind)
					{
					if(process_name)//EnumWindowByProcess
						{
						DWORD pid=0;
						GetWindowThreadProcessId(hchile,&pid);
						if(EnumProcessbyName(pid,process_name))
							{
							if(retstring)
								{
									if(retstringlen==0)
										retstringlen=wcslen(retstring);
									if(retstringlen>1)
										swprintf(retstring,L"%s,%d", retstring,hchile);
									else
										swprintf(retstring,L"%d",hchile);
								}
							else
								return (DWORD)hchile;
							}
						}
					else
						{
						if(retstring)
							{
							if(retstringlen==0)
								retstringlen=wcslen(retstring);
							if(retstringlen>1)
								swprintf(retstring,L"%s,%d", retstring,hchile);
							else
								swprintf(retstring,L"%d",hchile);
							}
						else
							return (DWORD)hchile;
						}
					}
				}
			}


		HWND hchilechile=::GetWindow(hchile,GW_CHILD);
		if(hchilechile!=NULL)
			{
				DWORD dret=FindChildWnd(hchilechile,title,classname,retstring,isGW_OWNER,isVisible,process_name);
				if(dret>0)
					break;
			}
			 
		hchile=::GetWindow(hchile,GW_HWNDNEXT);   //��ȡ��һ������
		}
	 return 0;
	}

//TSEnumWindow:filter������: ȡֵ��������
//
//1 : ƥ�䴰�ڱ���,����title��Ч 
//
//2 : ƥ�䴰������,����class_name��Ч.
//
//4 : ֻƥ��ָ�������ڵĵ�һ�㺢�Ӵ���
//
//8 : ƥ�������ߴ���Ϊ0�Ĵ���,����������
//
//16 : ƥ��ɼ��Ĵ���
//
//32 : ƥ����Ĵ��ڰ��մ��ڴ�˳����������
bool TSWindowsAPI::TSEnumWindow(HWND parent,wchar_t *title,wchar_t *class_name,LONG filter,wchar_t *retstring,wchar_t  *process_name)
	{
	   bool bret=false;
	   bool bZwindow=false;//ƥ����Ĵ��ڰ��մ��ڴ�˳����������
	   if(parent==0)
		   {
			  parent=GetDesktopWindow();
		   }
	   if(filter>32)
		   {
			  bZwindow=true;//˵��Ҫ���򴰿ھ��
			  filter=filter-32;
		   }

	   DWORD procpids[MAX_PATH]={0};
	   int indexpid=0;
	   if(process_name)//EnumWindowByProcess
		   {
		   if(wcslen(process_name)<1)
			   return false;
		   memset(npid,0,MAX_PATH);
		   IsEuemprosuccess=0;
		   if(EnumProcessbyName(0,process_name)==false)
			  return false;
		   }

	   DWORD processpid=0;
	    retstringlen=0;
	   switch(filter)
		   {
		   case 0:   //����ģʽ
			   {

			   if(process_name)	 //EnumWindowByProcess
				   {
					  return false;
				   }

			   HWND p=::GetWindow(parent,GW_CHILD); //��ȡ���洰�ڵ��Ӵ���
			   if(p==NULL)
				   return false;
			   p=::GetWindow(p,GW_HWNDFIRST);
			   while(p!=NULL)
				   {
				   if(retstringlen==0)
					   retstringlen=wcslen(retstring);
				   if(retstringlen>1)
						   swprintf(retstring,L"%s,%d", retstring,p);
					   else
						   swprintf(retstring,L"%d",p);
					   bret=true;
					   HWND hchile=::GetWindow(p,GW_CHILD);
					   if(hchile!=NULL)
						   {
								FindChildWnd(hchile,NULL,NULL,retstring);
						   }

					   p=::GetWindow(p,GW_HWNDNEXT);   //��ȡ��һ������
				   }
			   break;
			   }
		   case 1://1 : ƥ�䴰�ڱ���,����title��Ч  
			   {
			   if(wcslen(title)<1)
				   return false;
			   HWND p=::GetWindow(parent,GW_CHILD); //��ȡ���洰�ڵ��Ӵ���
			   if(p==NULL)
				   return false;
			   p=::GetWindow(p,GW_HWNDFIRST);
			   while(p!=NULL)
				   {
					   wchar_t WindowTitle[MAX_PATH] = {0};
					   ::GetWindowText(p, WindowTitle, MAX_PATH);
					   if(wcslen(WindowTitle)>1)
						   {
						   wchar_t *strfind=wcsstr(WindowTitle,title);   //ģ��ƥ��
						   if(strfind)
							   {
							   if(process_name)//EnumWindowByProcess
								   {
										DWORD pid=0;
										GetWindowThreadProcessId(p,&pid);
										if(EnumProcessbyName(pid,process_name))
											{
											if(retstringlen==0)
												retstringlen=wcslen(retstring);
											if(retstringlen>1)
												swprintf(retstring,L"%s,%d", retstring,p);
											else
												swprintf(retstring,L"%d",p);
											bret=true;
											}
								   }
							   else
								   {
								   if(retstringlen==0)
									   retstringlen=wcslen(retstring);
								   if(retstringlen>1)
										   swprintf(retstring,L"%s,%d", retstring,p);
									   else
										   swprintf(retstring,L"%d",p);
									   bret=true;
									   HWND hchile=::GetWindow(p,GW_CHILD);
									   if(hchile!=NULL)
										   {
												FindChildWnd(hchile,title,NULL,retstring);
										   }
								   }
							   }
						   }

				   p=::GetWindow(p,GW_HWNDNEXT);   //��ȡ��һ������
				   }
				 break;
			   }
		   case 2://2 : ƥ�䴰������,����class_name��Ч.
			   {
			   if(wcslen(class_name)<1)
				   return false;
			   HWND p=::GetWindow(parent,GW_CHILD); //��ȡ���洰�ڵ��Ӵ���
			   if(p==NULL)
				   return false;
			   p=::GetWindow(p,GW_HWNDFIRST);
			   while(p!=NULL)
				   {
					   wchar_t WindowClassName[MAX_PATH] = {0};
					   ::GetClassName(p, WindowClassName, MAX_PATH);
					   if(wcslen(WindowClassName)>1)
						   {
						   wchar_t *strfind=wcsstr(WindowClassName,class_name);   //ģ��ƥ��
						   if(strfind)
							   {
							   if(process_name)//EnumWindowByProcess
								   {
								   DWORD pid=0;
								   GetWindowThreadProcessId(p,&pid);
								   if(EnumProcessbyName(pid,process_name))
									   {
									   if(retstringlen==0)
										   retstringlen=wcslen(retstring);
									   if(retstringlen>1)
										   swprintf(retstring,L"%s,%d", retstring,p);
									   else
										   swprintf(retstring,L"%d",p);
									   bret=true;
									   }
								   }
							   else
								   {
								   if(retstringlen==0)
									   retstringlen=wcslen(retstring);
								   if(retstringlen>1)
										   swprintf(retstring,L"%s,%d", retstring,p);
									   else
										   swprintf(retstring,L"%d",p);
									   bret=true;
									   HWND hchile=::GetWindow(p,GW_CHILD);
									   if(hchile!=NULL)
										   {
										   FindChildWnd(hchile,NULL,class_name,retstring);
										   }
								   }
							   }
						   }
					   p=::GetWindow(p,GW_HWNDNEXT);   //��ȡ��һ������
				   }
				break;
			   }
		   case 3:   //1.���ڱ���+2.��������
			   {
			   if(wcslen(class_name)<1&&wcslen(title)<1)
				   return false;
			   HWND p=::GetWindow(parent,GW_CHILD); //��ȡ���洰�ڵ��Ӵ���
			   if(p==NULL)
				   return false;
			   p=::GetWindow(p,GW_HWNDFIRST);
			   while(p!=NULL)
				   {
				   wchar_t WindowClassName[MAX_PATH] = {0};
				   ::GetClassName(p, WindowClassName, MAX_PATH);
				   wchar_t WindowTitle[MAX_PATH] = {0};
				   ::GetWindowText(p, WindowTitle, MAX_PATH);
				   if(wcslen(WindowClassName)>1&&wcslen(WindowTitle)>1)
					   {
					   wchar_t *strfindclass=wcsstr(WindowClassName,class_name);   //ģ��ƥ��
					   wchar_t *strfindtitle=wcsstr(WindowTitle,title);   //ģ��ƥ��
					   if(strfindclass&&strfindtitle)
						   {
						   if(process_name)//EnumWindowByProcess
							   {
							   DWORD pid=0;
							   GetWindowThreadProcessId(p,&pid);
							   if(EnumProcessbyName(pid,process_name))
								   {
								   if(retstringlen==0)
									   retstringlen=wcslen(retstring);
								   if(retstringlen>1)
									   swprintf(retstring,L"%s,%d", retstring,p);
								   else
									   swprintf(retstring,L"%d",p);
								   bret=true;
								   }
							   }
						   else
							   {
							   if(retstringlen==0)
								   retstringlen=wcslen(retstring);
							   if(retstringlen>1)
									   swprintf(retstring,L"%s,%d", retstring,p);
								   else
									   swprintf(retstring,L"%d",p);
								   bret=true;
								   HWND hchile=::GetWindow(p,GW_CHILD);
								   if(hchile!=NULL)
									   {
											 FindChildWnd(hchile,title,class_name,retstring);
									   }
							   }
						   }
					   }

				   p=::GetWindow(p,GW_HWNDNEXT);   //��ȡ��һ������
				   }
				break;
			   }
		   case 4:	  //4 : ֻƥ��ָ�������ڵĵ�һ�㺢�Ӵ���
			   {
			   HWND p=::GetWindow(parent,GW_CHILD); //��ȡ���洰�ڵ��Ӵ���
			   if(p==NULL)
				   return false;
			   p=::GetWindow(p,GW_HWNDFIRST);
			   while(p!=NULL)
				   {
					if(process_name)//EnumWindowByProcess
						{
						DWORD pid=0;
						GetWindowThreadProcessId(p,&pid);
						if(EnumProcessbyName(pid,process_name))
							{
							if(processpid!=pid)  //ֻƥ��ָ��ӳ�������Ӧ�ĵ�һ������. �����кܶ�ͬӳ�����Ľ��̣�ֻƥ���һ�����̵�.
								{
									if(indexpid<IsEuemprosuccess)
										{	
											indexpid++;
											processpid=pid;
											memset(retstring,0,retstringlen);//��շ����ַ���
											retstringlen=0;
										}
								}
							if(processpid==pid)
								{
									if(retstringlen==0)
										retstringlen=wcslen(retstring);
									if(retstringlen>1)
										swprintf(retstring,L"%s,%d", retstring,p);
									else
										swprintf(retstring,L"%d",p);
									bret=true;
									HWND hchile=::GetWindow(p,GW_CHILD);
									if(hchile!=NULL)
										{
											FindChildWnd(hchile,NULL,NULL,retstring,false,false,process_name);
										}
								}

							}
						}
					else
						{
						if(retstringlen==0)
							retstringlen=wcslen(retstring);
						if(retstringlen>1)
							   swprintf(retstring,L"%s,%d", retstring,p);
						   else
							   swprintf(retstring,L"%d",p);
								bret=true;
						}
					   p=::GetWindow(p,GW_HWNDNEXT);   //��ȡ��һ������
				   }
				 break;
			   }
		   case 5:	  //1.ƥ�䴰�ڱ���+//4 : ֻƥ��ָ�������ڵĵ�һ�㺢�Ӵ���
			   {
			   if(wcslen(title)<1)
				   return false;

			   HWND p=::GetWindow(parent,GW_CHILD); //��ȡ���洰�ڵ��Ӵ���
			   if(p==NULL)
				   return false;
			   p=::GetWindow(p,GW_HWNDFIRST);
			   while(p!=NULL)
				   {

				   if(process_name)//EnumWindowByProcess
					   {
					   DWORD pid=0;
					   GetWindowThreadProcessId(p,&pid);
					   if(EnumProcessbyName(pid,process_name))
						   {
						   if(processpid!=pid)  //ֻƥ��ָ��ӳ�������Ӧ�ĵ�һ������. �����кܶ�ͬӳ�����Ľ��̣�ֻƥ���һ�����̵�.
							   {
							   if(indexpid<IsEuemprosuccess)
								   {	
								   indexpid++;
								   processpid=pid;
								   memset(retstring,0,retstringlen);//��շ����ַ���
								   retstringlen=0;
								   }
							   }
						   if(processpid==pid)
							   {
								   wchar_t WindowTitle[MAX_PATH] = {0};
								   ::GetWindowText(p, WindowTitle, MAX_PATH);
								   if(wcslen(WindowTitle)>1)
									   {
									   if(wcsstr(WindowTitle,title))
										   {
										   if(retstringlen==0)
											   retstringlen=wcslen(retstring);
										   if(retstringlen>1)
											   swprintf(retstring,L"%s,%d", retstring,p);
										   else
											   swprintf(retstring,L"%d",p);
										   bret=true;
										   }
									   }
								   HWND hchile=::GetWindow(p,GW_CHILD);
								   if(hchile!=NULL)
									   {
											 FindChildWnd(hchile,title,NULL,retstring,false,false,process_name);
									   }
							   }
						   }

					   }
				   else
					   {
					   wchar_t WindowTitle[MAX_PATH] = {0};
					   ::GetWindowText(p, WindowTitle, MAX_PATH);
					   if(wcslen(WindowTitle)>1)
						   {
						   if(wcsstr(WindowTitle,title))
							   {
							   if(retstringlen==0)
								   retstringlen=wcslen(retstring);
							   if(retstringlen>1)
								   swprintf(retstring,L"%s,%d", retstring,p);
							   else
								   swprintf(retstring,L"%d",p);
							   bret=true;
							   }
						   }
					   }

				   p=::GetWindow(p,GW_HWNDNEXT);   //��ȡ��һ������
				   }
			   break;
			   }
		   case 6:	 //2 : ƥ�䴰������+4 : ֻƥ��ָ�������ڵĵ�һ�㺢�Ӵ���
			   {
			   if(wcslen(class_name)<1)
				   return false;
			   HWND p=::GetWindow(parent,GW_CHILD); //��ȡ���洰�ڵ��Ӵ���
			   if(p==NULL)
				   return false;
			   p=::GetWindow(p,GW_HWNDFIRST);
			   while(p!=NULL)
				   {
				   if(process_name)//EnumWindowByProcess
					   {
					   DWORD pid=0;
					   GetWindowThreadProcessId(p,&pid);
					   if(EnumProcessbyName(pid,process_name))
						   {
						   if(indexpid<IsEuemprosuccess)
							   {	
							   indexpid++;
							   processpid=pid;
							   memset(retstring,0,retstringlen);//��շ����ַ���
							   retstringlen=0;
							   }
						   }
					   if(processpid==pid)
						   {
						   wchar_t WindowClassName[MAX_PATH] = {0};
						   ::GetClassName(p, WindowClassName, MAX_PATH);
						   if(wcslen(WindowClassName)>1)
							   {
							   if(wcsstr(WindowClassName,class_name))
								   {
								   if(retstringlen==0)
									   retstringlen=wcslen(retstring);
								   if(retstringlen>1)
									   swprintf(retstring,L"%s,%d", retstring,p);
								   else
									   swprintf(retstring,L"%d",p);
								   bret=true;
								   }
							   }
						   HWND hchile=::GetWindow(p,GW_CHILD);
						   if(hchile!=NULL)
							   {
								 FindChildWnd(hchile,NULL,class_name,retstring,false,false,process_name);
							   }
						   }
					   }
				   else
					   {
					   wchar_t WindowClassName[MAX_PATH] = {0};
					   ::GetClassName(p, WindowClassName, MAX_PATH);
					   if(wcslen(WindowClassName)>1)
						   {
						   if(wcsstr(WindowClassName,class_name))
							   {
							   if(retstringlen==0)
								   retstringlen=wcslen(retstring);
							   if(retstringlen>1)
								   swprintf(retstring,L"%s,%d", retstring,p);
							   else
								   swprintf(retstring,L"%d",p);
							   bret=true;
							   }
						   }
					   }
				   p=::GetWindow(p,GW_HWNDNEXT);   //��ȡ��һ������
				   }
			   break;
			   }
		   case 7:	 //1.���ڱ���+2.��������+4 : ֻƥ��ָ�������ڵĵ�һ�㺢�Ӵ���
			   {
			   if(wcslen(class_name)<1&&wcslen(title)<1)
				   return false;
			   HWND p=::GetWindow(parent,GW_CHILD); //��ȡ���洰�ڵ��Ӵ���
			   if(p==NULL)
				   return false;
			   p=::GetWindow(p,GW_HWNDFIRST);
			   while(p!=NULL)
				   {
				   if(process_name)//EnumWindowByProcess
					   {
					   DWORD pid=0;
					   GetWindowThreadProcessId(p,&pid);
					   if(EnumProcessbyName(pid,process_name))
						   {
						   if(indexpid<IsEuemprosuccess)
							   {	
							   indexpid++;
							   processpid=pid;
							   memset(retstring,0,retstringlen);//��շ����ַ���
							   retstringlen=0;
							   }
						   }
					   if(processpid==pid)
						   {
							   wchar_t WindowClassName[MAX_PATH] = {0};
							   ::GetClassName(p, WindowClassName, MAX_PATH);
							   wchar_t WindowTitle[MAX_PATH] = {0};
							   ::GetWindowText(p, WindowTitle, MAX_PATH);
							   if(wcslen(WindowClassName)>1&&wcslen(WindowTitle)>1)
								   {
								   wchar_t *strfindclass=wcsstr(WindowClassName,class_name);   //ģ��ƥ��
								   wchar_t *strfindtitle=wcsstr(WindowTitle,title);   //ģ��ƥ��
								   if(strfindclass&&strfindtitle)
									   {
									   if(retstringlen==0)
										   retstringlen=wcslen(retstring);
									   if(retstringlen>1)
										   swprintf(retstring,L"%s,%d", retstring,p);
									   else
										   swprintf(retstring,L"%d",p);
									   bret=true;
									   }
								   }
							   HWND hchile=::GetWindow(p,GW_CHILD);
							   if(hchile!=NULL)
								   {
									 FindChildWnd(hchile,title,class_name,retstring,false,false,process_name);
								   }
						   }
					   }
					 else
					   {
					   wchar_t WindowClassName[MAX_PATH] = {0};
					   ::GetClassName(p, WindowClassName, MAX_PATH);
					   wchar_t WindowTitle[MAX_PATH] = {0};
					   ::GetWindowText(p, WindowTitle, MAX_PATH);
					   if(wcslen(WindowClassName)>1&&wcslen(WindowTitle)>1)
						   {
						   wchar_t *strfindclass=wcsstr(WindowClassName,class_name);   //ģ��ƥ��
						   wchar_t *strfindtitle=wcsstr(WindowTitle,title);   //ģ��ƥ��
						   if(strfindclass&&strfindtitle)
							   {
							   if(retstringlen==0)
								   retstringlen=wcslen(retstring);
							   if(retstringlen>1)
								   swprintf(retstring,L"%s,%d", retstring,p);
							   else
								   swprintf(retstring,L"%d",p);
							   bret=true;
							   }
						   }
					   }

				   p=::GetWindow(p,GW_HWNDNEXT);   //��ȡ��һ������
				   }
			   break;
			   }
		   case 8:	//8 : ƥ�������ߴ���Ϊ0�Ĵ���,����������
			   {
			   HWND p=::GetWindow(parent,GW_CHILD); //��ȡ���洰�ڵ��Ӵ���
			   if(p==NULL)
				   return false;
			   p=::GetWindow(p,GW_HWNDFIRST);
			   while(p!=NULL)
				   {
				   if(::GetWindow(p,GW_OWNER)==0)
					   {
					   if(process_name)//EnumWindowByProcess
						   {
						   DWORD pid=0;
						   GetWindowThreadProcessId(p,&pid);
						   if(EnumProcessbyName(pid,process_name))
							   {
								   if(retstringlen==0)
									   retstringlen=wcslen(retstring);
								   if(retstringlen>1)
									   swprintf(retstring,L"%s,%d", retstring,p);
								   else
									   swprintf(retstring,L"%d",p);
								   bret=true;
								   HWND hchile=::GetWindow(p,GW_CHILD);
								   if(hchile!=NULL)
									   {
											FindChildWnd(hchile,NULL,NULL,retstring,true,false,process_name);
									   } 
								 }
						   }
					   else
						   {
							   if(retstringlen==0)
								   retstringlen=wcslen(retstring);
							   if(retstringlen>1)
								   swprintf(retstring,L"%s,%d", retstring,p);
							   else
								   swprintf(retstring,L"%d",p);
							   bret=true;
							   HWND hchile=::GetWindow(p,GW_CHILD);
							   if(hchile!=NULL)
								   {
									FindChildWnd(hchile,NULL,NULL,retstring,true);
								   }
						   }
					   }
				    p=::GetWindow(p,GW_HWNDNEXT);   //��ȡ��һ������
				   }
			   break;
			   }
		   case 9:	  //1.���ڱ���+8 : ƥ�������ߴ���Ϊ0�Ĵ���,����������
			   {
			   if(wcslen(title)<1)
				   return false;
			   HWND p=::GetWindow(parent,GW_CHILD); //��ȡ���洰�ڵ��Ӵ���
			   if(p==NULL)
				   return false;
			   p=::GetWindow(p,GW_HWNDFIRST);
			   while(p!=NULL)
				   {
				   if(::GetWindow(p,GW_OWNER)==0)
					   {
						   if(process_name)//EnumWindowByProcess
							   {
							   DWORD pid=0;
							   GetWindowThreadProcessId(p,&pid);
							   if(EnumProcessbyName(pid,process_name))
								   {
								   wchar_t WindowTitle[MAX_PATH] = {0};
								   ::GetWindowText(p, WindowTitle, MAX_PATH);
								   if(wcslen(WindowTitle)>1)
									   {
									   wchar_t *strfind=wcsstr(WindowTitle,title);   //ģ��ƥ��
									   if(strfind)
										   {
										   if(retstringlen==0)
											   retstringlen=wcslen(retstring);
										   if(retstringlen>1)
											   swprintf(retstring,L"%s,%d", retstring,p);
										   else
											   swprintf(retstring,L"%d",p);
										   bret=true;
										   }
									   }
								   HWND hchile=::GetWindow(p,GW_CHILD);
								   if(hchile!=NULL)
									   {
									   FindChildWnd(hchile,title,NULL,retstring,true,false,process_name);
									   } 
									}
							   }
						   else
							   {
								   wchar_t WindowTitle[MAX_PATH] = {0};
								   ::GetWindowText(p, WindowTitle, MAX_PATH);
								   if(wcslen(WindowTitle)>1)
									   {
									   wchar_t *strfind=wcsstr(WindowTitle,title);   //ģ��ƥ��
									   if(strfind)
										   {
										   if(retstringlen==0)
											   retstringlen=wcslen(retstring);
										   if(retstringlen>1)
											   swprintf(retstring,L"%s,%d", retstring,p);
										   else
											   swprintf(retstring,L"%d",p);
										   bret=true;
										   }
									   }
								   HWND hchile=::GetWindow(p,GW_CHILD);
								   if(hchile!=NULL)
									   {
									   FindChildWnd(hchile,title,NULL,retstring,true);
									   }
							   }
					   }
				   p=::GetWindow(p,GW_HWNDNEXT);   //��ȡ��һ������
				   }
			   break;
			   }
		   case 10:	//2.��������+8 : ƥ�������ߴ���Ϊ0�Ĵ���,����������
			   {
			   if(wcslen(class_name)<1)
				   return false;
			   HWND p=::GetWindow(parent,GW_CHILD); //��ȡ���洰�ڵ��Ӵ���
			   if(p==NULL)
				   return false;
			   p=::GetWindow(p,GW_HWNDFIRST);
			   while(p!=NULL)
				   {
				   if(::GetWindow(p,GW_OWNER)==0)
					   {
					   if(process_name)//EnumWindowByProcess
						   {
						   DWORD pid=0;
						   GetWindowThreadProcessId(p,&pid);
						   if(EnumProcessbyName(pid,process_name))
							   {
							   wchar_t WindowClassName[MAX_PATH] = {0};
							   ::GetClassName(p, WindowClassName, MAX_PATH);
							   if(wcslen(WindowClassName)>1)
								   {
								   wchar_t *strfind=wcsstr(WindowClassName,class_name);   //ģ��ƥ��
								   if(strfind)
									   {
									   if(retstringlen==0)
										   retstringlen=wcslen(retstring);
									   if(retstringlen>1)
										   swprintf(retstring,L"%s,%d", retstring,p);
									   else
										   swprintf(retstring,L"%d",p);
									   bret=true;
									   }
								   }
							   HWND hchile=::GetWindow(p,GW_CHILD);
							   if(hchile!=NULL)
								   {
										FindChildWnd(hchile,NULL,class_name,retstring,true,false,process_name);
								   } 
							   }
						   }
					   else
						   {
						   wchar_t WindowClassName[MAX_PATH] = {0};
						   ::GetClassName(p, WindowClassName, MAX_PATH);
						   if(wcslen(WindowClassName)>1)
							   {
							   wchar_t *strfind=wcsstr(WindowClassName,class_name);   //ģ��ƥ��
							   if(strfind)
								   {
								   if(retstringlen==0)
									   retstringlen=wcslen(retstring);
								   if(retstringlen>1)
									   swprintf(retstring,L"%s,%d", retstring,p);
								   else
									   swprintf(retstring,L"%d",p);
								   bret=true;
								   }
							   }

						   HWND hchile=::GetWindow(p,GW_CHILD);
						   if(hchile!=NULL)
							   {
							   FindChildWnd(hchile,NULL,class_name,retstring,true);
							   }
						   }
					   }
				   p=::GetWindow(p,GW_HWNDNEXT);   //��ȡ��һ������
				   }
			   break;
			   }
		   case 11:	 ////1.���ڱ���+2.��������+8 : ƥ�������ߴ���Ϊ0�Ĵ���,����������
			   {
			   if(wcslen(class_name)<1&&wcslen(title)<1)
				   return false;
			   HWND p=::GetWindow(parent,GW_CHILD); //��ȡ���洰�ڵ��Ӵ���
			   if(p==NULL)
				   return false;
			   p=::GetWindow(p,GW_HWNDFIRST);
			   while(p!=NULL)
				   {

				   if(::GetWindow(p,GW_OWNER)==0)
					   {
					   if(process_name)//EnumWindowByProcess
						   {
						   DWORD pid=0;
						   GetWindowThreadProcessId(p,&pid);
						   if(EnumProcessbyName(pid,process_name))
							   {
							   wchar_t WindowClassName[MAX_PATH] = {0};
							   ::GetClassName(p, WindowClassName, MAX_PATH);
							   wchar_t WindowTitle[MAX_PATH] = {0};
							   ::GetWindowText(p, WindowTitle, MAX_PATH);
							   if(wcslen(WindowClassName)>1&&wcslen(WindowTitle)>1)
								   {
								   wchar_t *strfindclass=wcsstr(WindowClassName,class_name);   //ģ��ƥ��
								   wchar_t *strfindtitle=wcsstr(WindowTitle,title);   //ģ��ƥ��
								   if(strfindclass&&strfindtitle)
									   {
									   if(retstringlen==0)
										   retstringlen=wcslen(retstring);
									   if(retstringlen>1)
										   swprintf(retstring,L"%s,%d", retstring,p);
									   else
										   swprintf(retstring,L"%d",p);
									   bret=true;
									   }
								   }
							   HWND hchile=::GetWindow(p,GW_CHILD);
							   if(hchile!=NULL)
								   {
								   FindChildWnd(hchile,title,class_name,retstring,true,false,process_name);
								   } 
							   }
						   }
					   else
						   {
						   wchar_t WindowClassName[MAX_PATH] = {0};
						   ::GetClassName(p, WindowClassName, MAX_PATH);
						   wchar_t WindowTitle[MAX_PATH] = {0};
						   ::GetWindowText(p, WindowTitle, MAX_PATH);
						   if(wcslen(WindowClassName)>1&&wcslen(WindowTitle)>1)
							   {
							   wchar_t *strfindclass=wcsstr(WindowClassName,class_name);   //ģ��ƥ��
							   wchar_t *strfindtitle=wcsstr(WindowTitle,title);   //ģ��ƥ��
							   if(strfindclass&&strfindtitle)
								   {
								   if(retstringlen==0)
									   retstringlen=wcslen(retstring);
								   if(retstringlen>1)
									   swprintf(retstring,L"%s,%d", retstring,p);
								   else
									   swprintf(retstring,L"%d",p);
								   bret=true;
								   }
							   }
						   HWND hchile=::GetWindow(p,GW_CHILD);
						   if(hchile!=NULL)
							   {
							   FindChildWnd(hchile,title,class_name,retstring,true);
							   }
						   }
					   }
				   p=::GetWindow(p,GW_HWNDNEXT);   //��ȡ��һ������
				   }
			   break;
			   }
		   case 12:	// //4 : ֻƥ��ָ�������ڵĵ�һ�㺢�Ӵ���+8 : ƥ�������ߴ���Ϊ0�Ĵ���,����������
			   {
			   HWND p=::GetWindow(parent,GW_CHILD); //��ȡ���洰�ڵ��Ӵ���
			   p=::GetWindow(p,GW_HWNDFIRST);
			   while(p!=NULL)
				   {
					   if(::GetWindow( p, GW_OWNER ) == 0 )
						   {
						   if(process_name)//EnumWindowByProcess
							   {
							   DWORD pid=0;
							   GetWindowThreadProcessId(p,&pid);
							   if(EnumProcessbyName(pid,process_name))
								   {
								   if(processpid!=pid)  //ֻƥ��ָ��ӳ�������Ӧ�ĵ�һ������. �����кܶ�ͬӳ�����Ľ��̣�ֻƥ���һ�����̵�.
									   {
									   if(indexpid<IsEuemprosuccess)
										   {	
										   indexpid++;
										   processpid=pid;
										   memset(retstring,0,retstringlen);//��շ����ַ���
										   retstringlen=0;
										   }
									   }
								   if(processpid==pid)
									   {
									   if(retstringlen==0)
										   retstringlen=wcslen(retstring);
									   if(retstringlen>1)
										   swprintf(retstring,L"%s,%d", retstring,p);
									   else
										   swprintf(retstring,L"%d",p);
									   bret=true;
									   HWND hchile=::GetWindow(p,GW_CHILD);
									   if(hchile!=NULL)
										   {
												FindChildWnd(hchile,NULL,NULL,retstring,true,false,process_name);
										   }
									   }

								   }
							   }
						   else
							   {
							   if(retstringlen==0)
								   retstringlen=wcslen(retstring);
							   if(retstringlen>1)
									   swprintf(retstring,L"%s,%d", retstring,p);
								   else
									   swprintf(retstring,L"%d",p);
								   bret=true;
							   }
						   }
					   p=::GetWindow(p,GW_HWNDNEXT);   //��ȡ��һ������
				   }
			   break;
			   }
		   case 13:	 //1.���ڱ���+4 : ֻƥ��ָ�������ڵĵ�һ�㺢�Ӵ���+8 : ƥ�������ߴ���Ϊ0�Ĵ���,����������
			   {
			   if(wcslen(title)<1)
				   return false;
			   HWND p=::GetWindow(parent,GW_CHILD); //��ȡ���洰�ڵ��Ӵ���
			   p=::GetWindow(p,GW_HWNDFIRST);
			   while(p!=NULL)
				   {
				   if(::GetWindow( p, GW_OWNER ) == 0 )
					   {
					   if(process_name)//EnumWindowByProcess
						   {
						   DWORD pid=0;
						   GetWindowThreadProcessId(p,&pid);
						   if(EnumProcessbyName(pid,process_name))
							   {
							   if(processpid!=pid)  //ֻƥ��ָ��ӳ�������Ӧ�ĵ�һ������. �����кܶ�ͬӳ�����Ľ��̣�ֻƥ���һ�����̵�.
								   {
								   if(indexpid<IsEuemprosuccess)
									   {	
									   indexpid++;
									   processpid=pid;
									   memset(retstring,0,retstringlen);//��շ����ַ���
									   retstringlen=0;
									   }
								   }
							   if(processpid==pid)
								   {
								   wchar_t WindowTitle[MAX_PATH] = {0};
								   ::GetWindowText(p, WindowTitle, MAX_PATH);
								   if(wcslen(WindowTitle)>1)
									   {
									   wchar_t *strfind=wcsstr(WindowTitle,title);   //ģ��ƥ��
									   if(strfind)
										   {
										   if(retstringlen==0)
											   retstringlen=wcslen(retstring);
										   if(retstringlen>1)
											   swprintf(retstring,L"%s,%d", retstring,p);
										   else
											   swprintf(retstring,L"%d",p);
										   bret=true;
										   }
									   }
								   HWND hchile=::GetWindow(p,GW_CHILD);
								   if(hchile!=NULL)
									   {
									   FindChildWnd(hchile,title,NULL,retstring,true,false,process_name);
									   }
								   }

							   }
						   }
					   else
						   {
						   wchar_t WindowTitle[MAX_PATH] = {0};
						   ::GetWindowText(p, WindowTitle, MAX_PATH);
						   if(wcslen(WindowTitle)>1)
							   {
							   wchar_t *strfind=wcsstr(WindowTitle,title);   //ģ��ƥ��
							   if(strfind)
								   {
								   if(retstringlen==0)
									   retstringlen=wcslen(retstring);
								   if(retstringlen>1)
									   swprintf(retstring,L"%s,%d", retstring,p);
								   else
									   swprintf(retstring,L"%d",p);
								   bret=true;
								   }
							   }
							}

					   }
				   p=::GetWindow(p,GW_HWNDNEXT);   //��ȡ��һ������
				   }
			   break;
			   }
		   case 14:	  //2.��������+4 : ֻƥ��ָ�������ڵĵ�һ�㺢�Ӵ���+8 : ƥ�������ߴ���Ϊ0�Ĵ���,����������
			   {
			   if(wcslen(class_name)<1)
				   return false;
			   HWND p=::GetWindow(parent,GW_CHILD); //��ȡ���洰�ڵ��Ӵ���
			   p=::GetWindow(p,GW_HWNDFIRST);
			   while(p!=NULL)
				   {
				   if(::GetWindow( p, GW_OWNER ) == 0 )
					   {
					   if(process_name)//EnumWindowByProcess
						   {
						   DWORD pid=0;
						   GetWindowThreadProcessId(p,&pid);
						   if(EnumProcessbyName(pid,process_name))
							   {
							   if(processpid!=pid)  //ֻƥ��ָ��ӳ�������Ӧ�ĵ�һ������. �����кܶ�ͬӳ�����Ľ��̣�ֻƥ���һ�����̵�.
								   {
								   if(indexpid<IsEuemprosuccess)
									   {	
									   indexpid++;
									   processpid=pid;
									   memset(retstring,0,retstringlen);//��շ����ַ���
									   retstringlen=0;
									   }
								   }
							   if(processpid==pid)
								   {
								   wchar_t WindowClassName[MAX_PATH] = {0};
								   ::GetClassName(p, WindowClassName, MAX_PATH);
								   if(wcslen(WindowClassName)>1)
									   {
									   wchar_t *strfind=wcsstr(WindowClassName,class_name);   //ģ��ƥ��
									   if(strfind)
										   {
										   if(retstringlen==0)
											   retstringlen=wcslen(retstring);
										   if(retstringlen>1)
											   swprintf(retstring,L"%s,%d", retstring,p);
										   else
											   swprintf(retstring,L"%d",p);
										   bret=true;
										   }
									   }
								   HWND hchile=::GetWindow(p,GW_CHILD);
								   if(hchile!=NULL)
									   {
									   FindChildWnd(hchile,NULL,class_name,retstring,true,false,process_name);
									   }
								   }

							   }
						   }
					   else
						   {
						   wchar_t WindowClassName[MAX_PATH] = {0};
						   ::GetClassName(p, WindowClassName, MAX_PATH);
						   if(wcslen(WindowClassName)>1)
							   {
							   wchar_t *strfind=wcsstr(WindowClassName,class_name);   //ģ��ƥ��
							   if(strfind)
								   {
									   if(retstringlen==0)
										   retstringlen=wcslen(retstring);
									   if(retstringlen>1)
										   swprintf(retstring,L"%s,%d", retstring,p);
									   else
										   swprintf(retstring,L"%d",p);
									   bret=true;
								   }
							   }
						   }
					   }
				   p=::GetWindow(p,GW_HWNDNEXT);   //��ȡ��һ������
				   }
			   break;
			   }
		   case 15:	 ////1.���ڱ���+2.��������+4 : ֻƥ��ָ�������ڵĵ�һ�㺢�Ӵ���+8 : ƥ�������ߴ���Ϊ0�Ĵ���,����������
			   {
			   if(wcslen(class_name)<1&&wcslen(title)<1)
				   return false;
			   HWND p=::GetWindow(parent,GW_CHILD); //��ȡ���洰�ڵ��Ӵ���
			   p=::GetWindow(p,GW_HWNDFIRST);
			   while(p!=NULL)
				   {
				   if(::GetWindow( p, GW_OWNER ) == 0 )
					   {
					   if(process_name)//EnumWindowByProcess
						   {
						   DWORD pid=0;
						   GetWindowThreadProcessId(p,&pid);
						   if(EnumProcessbyName(pid,process_name))
							   {
							   if(processpid!=pid)  //ֻƥ��ָ��ӳ�������Ӧ�ĵ�һ������. �����кܶ�ͬӳ�����Ľ��̣�ֻƥ���һ�����̵�.
								   {
								   if(indexpid<IsEuemprosuccess)
									   {	
										   indexpid++;
										   processpid=pid;
										   memset(retstring,0,retstringlen);//��շ����ַ���
										   retstringlen=0;
									   }
								   }
							   if(processpid==pid)
								   {
								   wchar_t WindowClassName[MAX_PATH] = {0};
								   ::GetClassName(p, WindowClassName, MAX_PATH);
								   wchar_t WindowTitle[MAX_PATH] = {0};
								   ::GetWindowText(p, WindowTitle, MAX_PATH);
								   if(wcslen(WindowClassName)>1&&wcslen(WindowTitle)>1)
									   {
									   wchar_t *strfindclass=wcsstr(WindowClassName,class_name);   //ģ��ƥ��
									   wchar_t *strfindtitle=wcsstr(WindowTitle,title);   //ģ��ƥ��
									   if(strfindclass&&strfindtitle)
										   {
										   if(retstringlen==0)
											   retstringlen=wcslen(retstring);
										   if(retstringlen>1)
											   swprintf(retstring,L"%s,%d", retstring,p);
										   else
											   swprintf(retstring,L"%d",p);
										   bret=true;
										   }
									   }
								   HWND hchile=::GetWindow(p,GW_CHILD);
								   if(hchile!=NULL)
									   {
									   FindChildWnd(hchile,title,class_name,retstring,true,false,process_name);
									   }
								   }

							   }
						   }
					   else
						   {
						   wchar_t WindowClassName[MAX_PATH] = {0};
						   ::GetClassName(p, WindowClassName, MAX_PATH);
						   wchar_t WindowTitle[MAX_PATH] = {0};
						   ::GetWindowText(p, WindowTitle, MAX_PATH);
						   if(wcslen(WindowClassName)>1&&wcslen(WindowTitle)>1)
							   {
							   wchar_t *strfindclass=wcsstr(WindowClassName,class_name);   //ģ��ƥ��
							   wchar_t *strfindtitle=wcsstr(WindowTitle,title);   //ģ��ƥ��
							   if(strfindclass&&strfindtitle)
								   {
								   if(retstringlen==0)
									   retstringlen=wcslen(retstring);
								   if(retstringlen>1)
									   swprintf(retstring,L"%s,%d", retstring,p);
								   else
									   swprintf(retstring,L"%d",p);
								   bret=true;
								   }
							   }
						   }
					   }
				   p=::GetWindow(p,GW_HWNDNEXT);   //��ȡ��һ������
				   }
			   break;
			   }
		   case 16://ƥ��ɼ��Ĵ���
			   {
			   parent=GetDesktopWindow();
			   HWND p=::GetWindow(parent,GW_CHILD); //��ȡ���洰�ڵ��Ӵ���
			   p=::GetWindow(p,GW_HWNDFIRST);
			   while(p!=NULL)
				   {
				   if(::IsWindowVisible( p ))
					   {
					   if(process_name)//EnumWindowByProcess
						   {
						   DWORD pid=0;
						   GetWindowThreadProcessId(p,&pid);
						   if(EnumProcessbyName(pid,process_name))
							   {
							   if(retstringlen==0)
								   retstringlen=wcslen(retstring);
							   if(retstringlen>1)
								   swprintf(retstring,L"%s,%d", retstring,p);
							   else
								   swprintf(retstring,L"%d",p);
							   bret=true;
							   HWND hchile=::GetWindow(p,GW_CHILD);
							   if(hchile!=NULL)
								   {
										FindChildWnd(hchile,NULL,NULL,retstring,false,true,process_name);
								   }
							   }
						   }
					   else
						   {
						   if(retstringlen==0)
							   retstringlen=wcslen(retstring);
						   if(retstringlen>1)
							   swprintf(retstring,L"%s,%d", retstring,p);
						   else
							   swprintf(retstring,L"%d",p);
						   bret=true;
						   HWND hchile=::GetWindow(p,GW_CHILD);
						   if(hchile!=NULL)
							   {
									FindChildWnd(hchile,NULL,NULL,retstring,false,true);
							   }
						   }
					   }
				   p=::GetWindow(p,GW_HWNDNEXT);   //��ȡ��һ������
				   }
			   break;
			   }
		   case 17:	//1.���ڱ���+//ƥ��ɼ��Ĵ���
			   {
			   if(wcslen(title)<1)
				   return false;
			   HWND p=::GetWindow(parent,GW_CHILD); //��ȡ���洰�ڵ��Ӵ���
			   p=::GetWindow(p,GW_HWNDFIRST);
			   while(p!=NULL)
				   {
				   if(::IsWindowVisible( p ) )
					   {
					   if(process_name)//EnumWindowByProcess
						   {
						   DWORD pid=0;
						   GetWindowThreadProcessId(p,&pid);
						   if(EnumProcessbyName(pid,process_name))
							   {
							   wchar_t WindowTitle[MAX_PATH] = {0};
							   ::GetWindowText(p, WindowTitle, MAX_PATH);
							   if(wcslen(WindowTitle)>1)
								   {
								   wchar_t *strfind=wcsstr(WindowTitle,title);   //ģ��ƥ��
								   if(strfind)
									   {
									   if(retstringlen==0)
										   retstringlen=wcslen(retstring);
									   if(retstringlen>1)
										   swprintf(retstring,L"%s,%d", retstring,p);
									   else
										   swprintf(retstring,L"%d",p);
									   bret=true;
									   }
								   }
							   HWND hchile=::GetWindow(p,GW_CHILD);
							   if(hchile!=NULL)
								   {
								   FindChildWnd(hchile,title,NULL,retstring,false,true,process_name);
								   }
							   }
						   }
					   else
						   {
							   wchar_t WindowTitle[MAX_PATH] = {0};
							   ::GetWindowText(p, WindowTitle, MAX_PATH);
							   if(wcslen(WindowTitle)>1)
								   {
								   wchar_t *strfind=wcsstr(WindowTitle,title);   //ģ��ƥ��
								   if(strfind)
									   {
									   if(retstringlen==0)
										   retstringlen=wcslen(retstring);
									   if(retstringlen>1)
										   swprintf(retstring,L"%s,%d", retstring,p);
									   else
										   swprintf(retstring,L"%d",p);
									   bret=true;
									   }
								   }
							   HWND hchile=::GetWindow(p,GW_CHILD);
							   if(hchile!=NULL)
								   {
								   FindChildWnd(hchile,title,NULL,retstring,false,true);
								   }
						   }
					   }
				   p=::GetWindow(p,GW_HWNDNEXT);   //��ȡ��һ������
				   }
			   break;
			   }
		   case 18:	 //2.��������+//ƥ��ɼ��Ĵ���
			   {
			   if(wcslen(class_name)<1)
				   return false;
			   HWND p=::GetWindow(parent,GW_CHILD); //��ȡ���洰�ڵ��Ӵ���
			   p=::GetWindow(p,GW_HWNDFIRST);
			   while(p!=NULL)
				   {
				   if(::IsWindowVisible( p ))
					   {
					   if(process_name)//EnumWindowByProcess
						   {
						   DWORD pid=0;
						   GetWindowThreadProcessId(p,&pid);
						   if(EnumProcessbyName(pid,process_name))
							   {
							   wchar_t WindowClassName[MAX_PATH] = {0};
							   ::GetClassName(p, WindowClassName, MAX_PATH);
							   if(wcslen(WindowClassName)>1)
								   {
								   wchar_t *strfind=wcsstr(WindowClassName,class_name);   //ģ��ƥ��
								   if(strfind)
									   {
									   if(retstringlen==0)
										   retstringlen=wcslen(retstring);
									   if(retstringlen>1)
										   swprintf(retstring,L"%s,%d" ,retstring,p);
									   else
										   swprintf(retstring,L"%d",p);
									   bret=true;
									   }
								   }
							   HWND hchile=::GetWindow(p,GW_CHILD);
							   if(hchile!=NULL)
								   {
								   FindChildWnd(hchile,NULL,class_name,retstring,false,true,process_name);
								   }
							   }
						   }
					   else
						   {
							   wchar_t WindowClassName[MAX_PATH] = {0};
							   ::GetClassName(p, WindowClassName, MAX_PATH);
							   if(wcslen(WindowClassName)>1)
								   {
								   wchar_t *strfind=wcsstr(WindowClassName,class_name);   //ģ��ƥ��
								   if(strfind)
									   {
									   if(retstringlen==0)
										   retstringlen=wcslen(retstring);
									   if(retstringlen>1)
										   swprintf(retstring,L"%s,%d" ,retstring,p);
									   else
										   swprintf(retstring,L"%d",p);
									   bret=true;
									   }
								   }
							   HWND hchile=::GetWindow(p,GW_CHILD);
							   if(hchile!=NULL)
								   {
								   FindChildWnd(hchile,NULL,class_name,retstring,false,true);
								   }
						   }
					   }
				   p=::GetWindow(p,GW_HWNDNEXT);   //��ȡ��һ������
				   }
			   break;
			   }
		   case 19:	////1.���ڱ���+2.��������+ƥ��ɼ��Ĵ���
			   {
			   if(wcslen(class_name)<1&&wcslen(title)<1)
				   return false;
			   HWND p=::GetWindow(parent,GW_CHILD); //��ȡ���洰�ڵ��Ӵ���
			   p=::GetWindow(p,GW_HWNDFIRST);
			   while(p!=NULL)
				   {
				   if(::IsWindowVisible( p ))
					   {
					   if(process_name)//EnumWindowByProcess
						   {
						   DWORD pid=0;
						   GetWindowThreadProcessId(p,&pid);
						   if(EnumProcessbyName(pid,process_name))
							   {
							   wchar_t WindowClassName[MAX_PATH] = {0};
							   ::GetClassName(p, WindowClassName, MAX_PATH);
							   wchar_t WindowTitle[MAX_PATH] = {0};
							   ::GetWindowText(p, WindowTitle, MAX_PATH);
							   if(wcslen(WindowClassName)>1&&wcslen(WindowTitle)>1)
								   {
								   wchar_t *strfindclass=wcsstr(WindowClassName,class_name);   //ģ��ƥ��
								   wchar_t *strfindtitle=wcsstr(WindowTitle,title);   //ģ��ƥ��
								   if(strfindclass&&strfindtitle)
									   {
									   if(retstringlen==0)
										   retstringlen=wcslen(retstring);
									   if(retstringlen>1)
										   swprintf(retstring,L"%s,%d", retstring,p);
									   else
										   swprintf(retstring,L"%d",p);
									   bret=true;
									   }
								   }
							   HWND hchile=::GetWindow(p,GW_CHILD);
							   if(hchile!=NULL)
								   {
								   FindChildWnd(hchile,title,class_name,retstring,false,true,process_name);
								   }
							   }
						   }
					   else
						   {
							   wchar_t WindowClassName[MAX_PATH] = {0};
							   ::GetClassName(p, WindowClassName, MAX_PATH);
							   wchar_t WindowTitle[MAX_PATH] = {0};
							   ::GetWindowText(p, WindowTitle, MAX_PATH);
							   if(wcslen(WindowClassName)>1&&wcslen(WindowTitle)>1)
								   {
								   wchar_t *strfindclass=wcsstr(WindowClassName,class_name);   //ģ��ƥ��
								   wchar_t *strfindtitle=wcsstr(WindowTitle,title);   //ģ��ƥ��
								   if(strfindclass&&strfindtitle)
									   {
									   if(retstringlen==0)
										   retstringlen=wcslen(retstring);
									   if(retstringlen>1)
										   swprintf(retstring,L"%s,%d", retstring,p);
									   else
										   swprintf(retstring,L"%d",p);
									   bret=true;
									   }
								   }
							   HWND hchile=::GetWindow(p,GW_CHILD);
							   if(hchile!=NULL)
								   {
								   FindChildWnd(hchile,title,class_name,retstring,false,true);
								   }
						   }
					   }
				   p=::GetWindow(p,GW_HWNDNEXT);   //��ȡ��һ������
				   }
			   break;
			   }
		   case 20:	//4 : ֻƥ��ָ�������ڵĵ�һ�㺢�Ӵ���+ƥ��ɼ��Ĵ���
			   {
			   HWND p=::GetWindow(parent,GW_CHILD); //��ȡ���洰�ڵ��Ӵ���
			   p=::GetWindow(p,GW_HWNDFIRST);
			   while(p!=NULL)
				   {
				   if(::IsWindowVisible( p ))
					   {
					   if(process_name)//EnumWindowByProcess
						   {
						   DWORD pid=0;
						   GetWindowThreadProcessId(p,&pid);
						   if(EnumProcessbyName(pid,process_name))
							   {
							   if(processpid!=pid)  //ֻƥ��ָ��ӳ�������Ӧ�ĵ�һ������. �����кܶ�ͬӳ�����Ľ��̣�ֻƥ���һ�����̵�.
								   {
								   if(indexpid<IsEuemprosuccess)
									   {	
									   indexpid++;
									   processpid=pid;
									   memset(retstring,0,retstringlen);//��շ����ַ���
									   retstringlen=0;
									   }
								   }
							   if(processpid==pid)
								   {
								   if(retstringlen==0)
									   retstringlen=wcslen(retstring);
								   if(retstringlen>1)
									   swprintf(retstring,L"%s,%d", retstring,p);
								   else
									   swprintf(retstring,L"%d",p);
								   bret=true;
								   HWND hchile=::GetWindow(p,GW_CHILD);
								   if(hchile!=NULL)
									   {
											 FindChildWnd(hchile,NULL,NULL,retstring,false,true,process_name);
									   }
								   }

							   }
						   }
					   else
						   {
						   if(retstringlen==0)
							   retstringlen=wcslen(retstring);
						   if(retstringlen>1)
								   swprintf(retstring,L"%s,%d", retstring,p);
							   else
								   swprintf(retstring,L"%d",p);
							   bret=true;
						   }
					   }
				   p=::GetWindow(p,GW_HWNDNEXT);   //��ȡ��һ������
				   }
			   break;
			   }
		   case 21:	//1.���ڱ���+4 : ֻƥ��ָ�������ڵĵ�һ�㺢�Ӵ���+ƥ��ɼ��Ĵ���
			   {
			   if(wcslen(title)<1)
				   return false;
			   HWND p=::GetWindow(parent,GW_CHILD); //��ȡ���洰�ڵ��Ӵ���
			   p=::GetWindow(p,GW_HWNDFIRST);
			   while(p!=NULL)
				   {
				   if(::IsWindowVisible( p ) )
					   {
					   if(process_name)//EnumWindowByProcess
						   {
						   DWORD pid=0;
						   GetWindowThreadProcessId(p,&pid);
						   if(EnumProcessbyName(pid,process_name))
							   {
							   if(processpid!=pid)  //ֻƥ��ָ��ӳ�������Ӧ�ĵ�һ������. �����кܶ�ͬӳ�����Ľ��̣�ֻƥ���һ�����̵�.
								   {
								   if(indexpid<IsEuemprosuccess)
									   {	
									   indexpid++;
									   processpid=pid;
									   memset(retstring,0,retstringlen);//��շ����ַ���
									   retstringlen=0;
									   }
								   }
							   if(processpid==pid)
								   {
								   wchar_t WindowTitle[MAX_PATH] = {0};
								   ::GetWindowText(p, WindowTitle, MAX_PATH);
								   if(wcslen(WindowTitle)>1)
									   {
									   wchar_t *strfind=wcsstr(WindowTitle,title);   //ģ��ƥ��
									   if(strfind)
										   {
										   if(retstringlen==0)
											   retstringlen=wcslen(retstring);
										   if(retstringlen>1)
											   swprintf(retstring,L"%s,%d", retstring,p);
										   else
											   swprintf(retstring,L"%d",p);
										   bret=true;
										   }
									   }
								   HWND hchile=::GetWindow(p,GW_CHILD);
								   if(hchile!=NULL)
									   {
									   FindChildWnd(hchile,title,NULL,retstring,false,true,process_name);
									   }
								   }

							   }
						   }
					   else
						   {
							   wchar_t WindowTitle[MAX_PATH] = {0};
							   ::GetWindowText(p, WindowTitle, MAX_PATH);
							   if(wcslen(WindowTitle)>1)
								   {
								   wchar_t *strfind=wcsstr(WindowTitle,title);   //ģ��ƥ��
								   if(strfind)
									   {
									   if(retstringlen==0)
										   retstringlen=wcslen(retstring);
									   if(retstringlen>1)
										   swprintf(retstring,L"%s,%d", retstring,p);
									   else
										   swprintf(retstring,L"%d",p);
									   bret=true;
									   }
								   }
						   }
					   }
				   p=::GetWindow(p,GW_HWNDNEXT);   //��ȡ��һ������
				   }
			   break;
			   }
		   case 22://2.��������+4 : ֻƥ��ָ�������ڵĵ�һ�㺢�Ӵ���+ƥ��ɼ��Ĵ���
			   {
			   if(wcslen(class_name)<1)
				   return false;
			   HWND p=::GetWindow(parent,GW_CHILD); //��ȡ���洰�ڵ��Ӵ���
			   p=::GetWindow(p,GW_HWNDFIRST);
			   while(p!=NULL)
				   {
				   if(::IsWindowVisible( p ))
					   {
					   if(process_name)//EnumWindowByProcess
						   {
						   DWORD pid=0;
						   GetWindowThreadProcessId(p,&pid);
						   if(EnumProcessbyName(pid,process_name))
							   {
							   if(processpid!=pid)  //ֻƥ��ָ��ӳ�������Ӧ�ĵ�һ������. �����кܶ�ͬӳ�����Ľ��̣�ֻƥ���һ�����̵�.
								   {
								   if(indexpid<IsEuemprosuccess)
									   {	
									   indexpid++;
									   processpid=pid;
									   memset(retstring,0,retstringlen);//��շ����ַ���
									   retstringlen=0;
									   }
								   }
							   if(processpid==pid)
								   {
								   wchar_t WindowClassName[MAX_PATH] = {0};
								   ::GetClassName(p, WindowClassName, MAX_PATH);
								   if(wcslen(WindowClassName)>1)
									   {
									   wchar_t *strfind=wcsstr(WindowClassName,class_name);   //ģ��ƥ��
									   if(strfind)
										   {
										   if(retstringlen==0)
											   retstringlen=wcslen(retstring);
										   if(retstringlen>1)
											   swprintf(retstring,L"%s,%d", retstring,p);
										   else
											   swprintf(retstring,L"%d",p);
										   bret=true;
										   }
									   }
								   HWND hchile=::GetWindow(p,GW_CHILD);
								   if(hchile!=NULL)
									   {
									   FindChildWnd(hchile,NULL,class_name,retstring,false,true,process_name);
									   }
								   }

							   }
						   }
					   else
						   {
						   wchar_t WindowClassName[MAX_PATH] = {0};
						   ::GetClassName(p, WindowClassName, MAX_PATH);
						   if(wcslen(WindowClassName)>1)
							   {
							   wchar_t *strfind=wcsstr(WindowClassName,class_name);   //ģ��ƥ��
							   if(strfind)
								   {
								   if(retstringlen==0)
									   retstringlen=wcslen(retstring);
								   if(retstringlen>1)
									   swprintf(retstring,L"%s,%d", retstring,p);
								   else
									   swprintf(retstring,L"%d",p);
								   bret=true;
								   }
							   }
						   }
					   }
				   p=::GetWindow(p,GW_HWNDNEXT);   //��ȡ��һ������
				   }
			   break;
			   }
		   case 23://1.���ڱ���+2.��������+4 : ֻƥ��ָ�������ڵĵ�һ�㺢�Ӵ���+ƥ��ɼ��Ĵ���
			   {
			   if(wcslen(class_name)<1&&wcslen(title)<1)
				   return false;
			   HWND p=::GetWindow(parent,GW_CHILD); //��ȡ���洰�ڵ��Ӵ���
			   p=::GetWindow(p,GW_HWNDFIRST);
			   while(p!=NULL)
				   {
				   if(::IsWindowVisible( p ))
					   {
					   if(process_name)//EnumWindowByProcess
						   {
						   DWORD pid=0;
						   GetWindowThreadProcessId(p,&pid);
						   if(EnumProcessbyName(pid,process_name))
							   {
							   if(processpid!=pid)  //ֻƥ��ָ��ӳ�������Ӧ�ĵ�һ������. �����кܶ�ͬӳ�����Ľ��̣�ֻƥ���һ�����̵�.
								   {
								   if(indexpid<IsEuemprosuccess)
									   {	
									   indexpid++;
									   processpid=pid;
									   memset(retstring,0,retstringlen);//��շ����ַ���
									   retstringlen=0;
									   }
								   }
							   if(processpid==pid)
								   {
								   wchar_t WindowClassName[MAX_PATH] = {0};
								   ::GetClassName(p, WindowClassName, MAX_PATH);
								   wchar_t WindowTitle[MAX_PATH] = {0};
								   ::GetWindowText(p, WindowTitle, MAX_PATH);
								   if(wcslen(WindowClassName)>1&&wcslen(WindowTitle)>1)
									   {
									   wchar_t *strfindclass=wcsstr(WindowClassName,class_name);   //ģ��ƥ��
									   wchar_t *strfindtitle=wcsstr(WindowTitle,title);   //ģ��ƥ��
									   if(strfindclass&&strfindtitle)
										   {
										   if(retstringlen==0)
											   retstringlen=wcslen(retstring);
										   if(retstringlen>1)
											   swprintf(retstring,L"%s,%d", retstring,p);
										   else
											   swprintf(retstring,L"%d",p);
										   bret=true;
										   }
									   }
								   HWND hchile=::GetWindow(p,GW_CHILD);
								   if(hchile!=NULL)
									   {
									   FindChildWnd(hchile,title,class_name,retstring,false,true,process_name);
									   }
								   }

							   }
						   }
					   else
						   {
						   wchar_t WindowClassName[MAX_PATH] = {0};
						   ::GetClassName(p, WindowClassName, MAX_PATH);
						   wchar_t WindowTitle[MAX_PATH] = {0};
						   ::GetWindowText(p, WindowTitle, MAX_PATH);
						   if(wcslen(WindowClassName)>1&&wcslen(WindowTitle)>1)
							   {
							   wchar_t *strfindclass=wcsstr(WindowClassName,class_name);   //ģ��ƥ��
							   wchar_t *strfindtitle=wcsstr(WindowTitle,title);   //ģ��ƥ��
							   if(strfindclass&&strfindtitle)
								   {
								   if(retstringlen==0)
									   retstringlen=wcslen(retstring);
								   if(retstringlen>1)
									   swprintf(retstring,L"%s,%d", retstring,p);
								   else
									   swprintf(retstring,L"%d",p);
								   bret=true;
								   }
							   }
						   }
					   }
				   p=::GetWindow(p,GW_HWNDNEXT);   //��ȡ��һ������
				   }
			   break;
			   }
		   case 24://8 : ƥ�������ߴ���Ϊ0�Ĵ���,����������+16.ƥ��ɼ��Ĵ���
			   {
			   HWND p=::GetWindow(parent,GW_CHILD); //��ȡ���洰�ڵ��Ӵ���
			   p=::GetWindow(p,GW_HWNDFIRST);
			   while(p!=NULL)
				   {
				   if(::IsWindowVisible( p )&&::GetWindow( p, GW_OWNER ) == 0)
					   {
					   if(process_name)//EnumWindowByProcess
						   {
						   DWORD pid=0;
						   GetWindowThreadProcessId(p,&pid);
						   if(EnumProcessbyName(pid,process_name))
							   {
							   if(retstringlen==0)
								   retstringlen=wcslen(retstring);
							   if(retstringlen>1)
								   swprintf(retstring,L"%s,%d", retstring,p);
							   else
								   swprintf(retstring,L"%d",p);
							   bret=true;
							   HWND hchile=::GetWindow(p,GW_CHILD);
							   if(hchile!=NULL)
								   {
								   FindChildWnd(hchile,NULL,NULL,retstring,true,true,process_name);
								   } 
							   }
						   }
					   else
						   {
						   if(retstringlen==0)
							   retstringlen=wcslen(retstring);
						   if(retstringlen>1)
								   swprintf(retstring,L"%s,%d", retstring,p);
							   else
								   swprintf(retstring,L"%d",p);
							   bret=true;

							   HWND hchile=::GetWindow(p,GW_CHILD);
							   if(hchile!=NULL)
								   {
										FindChildWnd(hchile,NULL,NULL,retstring,true,true);
								   }
						   }
					   }
				   p=::GetWindow(p,GW_HWNDNEXT);   //��ȡ��һ������
				   }
			   break;
			   }
		   case 25:	//1.���ڱ���+  8:ƥ�������ߴ���Ϊ0�Ĵ���,����������+16.ƥ��ɼ��Ĵ���
			   {
			   if(wcslen(title)<1)
				   return false;
			   HWND p=::GetWindow(parent,GW_CHILD); //��ȡ���洰�ڵ��Ӵ���
			   p=::GetWindow(p,GW_HWNDFIRST);
			   while(p!=NULL)
				   {
				   if(::IsWindowVisible( p )&&::GetWindow( p, GW_OWNER ) == 0)
					   {
					   if(process_name)//EnumWindowByProcess
						   {
						   DWORD pid=0;
						   GetWindowThreadProcessId(p,&pid);
						   if(EnumProcessbyName(pid,process_name))
							   {
							   wchar_t WindowTitle[MAX_PATH] = {0};
							   ::GetWindowText(p, WindowTitle, MAX_PATH);
							   if(wcslen(WindowTitle)>1)
								   {
								   wchar_t *strfind=wcsstr(WindowTitle,title);   //ģ��ƥ��
								   if(strfind)
									   {
									   if(retstringlen==0)
										   retstringlen=wcslen(retstring);
									   if(retstringlen>1)
										   swprintf(retstring,L"%s,%d", retstring,p);
									   else
										   swprintf(retstring,L"%d",p);
									   bret=true;
									   }
								   }
							   HWND hchile=::GetWindow(p,GW_CHILD);
							   if(hchile!=NULL)
								   {
								   FindChildWnd(hchile,title,NULL,retstring,true,true,process_name);
								   } 
							   }
						   }
					   else
						   {
							   wchar_t WindowTitle[MAX_PATH] = {0};
							   ::GetWindowText(p, WindowTitle, MAX_PATH);
							   if(wcslen(WindowTitle)>1)
								   {
								   wchar_t *strfind=wcsstr(WindowTitle,title);   //ģ��ƥ��
								   if(strfind)
									   {
									   if(retstringlen==0)
										   retstringlen=wcslen(retstring);
									   if(retstringlen>1)
										   swprintf(retstring,L"%s,%d", retstring,p);
									   else
										   swprintf(retstring,L"%d",p);
									   bret=true;
									   }
								   }
							   HWND hchile=::GetWindow(p,GW_CHILD);
							   if(hchile!=NULL)
								   {
								   FindChildWnd(hchile,title,NULL,retstring,true,true);
								   }
						   }
					   }
				   p=::GetWindow(p,GW_HWNDNEXT);   //��ȡ��һ������
				   }
			   break;
			   }
		   case 26://2.��������+  8:ƥ�������ߴ���Ϊ0�Ĵ���,����������+16.ƥ��ɼ��Ĵ���
			   {
			   if(wcslen(class_name)<1)
				   return false;
			   HWND p=::GetWindow(parent,GW_CHILD); //��ȡ���洰�ڵ��Ӵ���
			   p=::GetWindow(p,GW_HWNDFIRST);
			   while(p!=NULL)
				   {
				   if(::IsWindowVisible( p )&&::GetWindow( p, GW_OWNER ) == 0)
					   {
					   if(process_name)//EnumWindowByProcess
						   {
						   DWORD pid=0;
						   GetWindowThreadProcessId(p,&pid);
						   if(EnumProcessbyName(pid,process_name))
							   {
							   wchar_t WindowClassName[MAX_PATH] = {0};
							   ::GetClassName(p, WindowClassName, MAX_PATH);
							   if(wcslen(WindowClassName)>1)
								   {
								   wchar_t *strfind=wcsstr(WindowClassName,class_name);   //ģ��ƥ��
								   if(strfind)
									   {
									   if(retstringlen==0)
										   retstringlen=wcslen(retstring);
									   if(retstringlen>1)
										   swprintf(retstring,L"%s,%d", retstring,p);
									   else
										   swprintf(retstring,L"%d",p);
									   bret=true;
									   }
								   }
							   HWND hchile=::GetWindow(p,GW_CHILD);
							   if(hchile!=NULL)
								   {
								   FindChildWnd(hchile,NULL,class_name,retstring,true,true,process_name);
								   } 
							   }
						   }
					   else
						   {
							   wchar_t WindowClassName[MAX_PATH] = {0};
							   ::GetClassName(p, WindowClassName, MAX_PATH);
							   if(wcslen(WindowClassName)>1)
								   {
								   wchar_t *strfind=wcsstr(WindowClassName,class_name);   //ģ��ƥ��
								   if(strfind)
									   {
									   if(retstringlen==0)
										   retstringlen=wcslen(retstring);
									   if(retstringlen>1)
										   swprintf(retstring,L"%s,%d", retstring,p);
									   else
										   swprintf(retstring,L"%d",p);
									   bret=true;
									   }
								   }
							   HWND hchile=::GetWindow(p,GW_CHILD);
							   if(hchile!=NULL)
								   {
								   FindChildWnd(hchile,NULL,class_name,retstring,true,true);
								   }
						   }
					   }
				   p=::GetWindow(p,GW_HWNDNEXT);   //��ȡ��һ������
				   }
			   break;
			   }
		   case 27://1.���ڱ���+2.��������+8:ƥ�������ߴ���Ϊ0�Ĵ���,����������+16.ƥ��ɼ��Ĵ���
			   {
			   if(wcslen(class_name)<1&&wcslen(title)<1)
				   return false;
			   HWND p=::GetWindow(parent,GW_CHILD); //��ȡ���洰�ڵ��Ӵ���
			   p=::GetWindow(p,GW_HWNDFIRST);
			   while(p!=NULL)
				   {
				   if(::IsWindowVisible( p )&&::GetWindow( p, GW_OWNER ) == 0)
					   {
					   if(process_name)//EnumWindowByProcess
						   {
						   DWORD pid=0;
						   GetWindowThreadProcessId(p,&pid);
						   if(EnumProcessbyName(pid,process_name))
							   {
							   wchar_t WindowClassName[MAX_PATH] = {0};
							   ::GetClassName(p, WindowClassName, MAX_PATH);
							   wchar_t WindowTitle[MAX_PATH] = {0};
							   ::GetWindowText(p, WindowTitle, MAX_PATH);
							   if(wcslen(WindowClassName)>1&&wcslen(WindowTitle)>1)
								   {
								   wchar_t *strfindclass=wcsstr(WindowClassName,class_name);   //ģ��ƥ��
								   wchar_t *strfindtitle=wcsstr(WindowTitle,title);   //ģ��ƥ��
								   if(strfindclass&&strfindtitle)
									   {
									   if(retstringlen==0)
										   retstringlen=wcslen(retstring);
									   if(retstringlen>1)
										   swprintf(retstring,L"%s,%d", retstring,p);
									   else
										   swprintf(retstring,L"%d",p);
									   bret=true;
									   }
								   }
							   HWND hchile=::GetWindow(p,GW_CHILD);
							   if(hchile!=NULL)
								   {
								   FindChildWnd(hchile,title,class_name,retstring,true,true,process_name);
								   } 
							   }
						   }
					   else
						   {
							   wchar_t WindowClassName[MAX_PATH] = {0};
							   ::GetClassName(p, WindowClassName, MAX_PATH);
							   wchar_t WindowTitle[MAX_PATH] = {0};
							   ::GetWindowText(p, WindowTitle, MAX_PATH);
							   if(wcslen(WindowClassName)>1&&wcslen(WindowTitle)>1)
								   {
								   wchar_t *strfindclass=wcsstr(WindowClassName,class_name);   //ģ��ƥ��
								   wchar_t *strfindtitle=wcsstr(WindowTitle,title);   //ģ��ƥ��
								   if(strfindclass&&strfindtitle)
									   {
									   if(retstringlen==0)
										   retstringlen=wcslen(retstring);
									   if(retstringlen>1)
										   swprintf(retstring,L"%s,%d", retstring,p);
									   else
										   swprintf(retstring,L"%d",p);
									   bret=true;
									   }
								   }
							   HWND hchile=::GetWindow(p,GW_CHILD);
							   if(hchile!=NULL)
								   {
								   FindChildWnd(hchile,title,class_name,retstring,true,true);
								   }
						   }

					   }
				   p=::GetWindow(p,GW_HWNDNEXT);   //��ȡ��һ������
				   }
			   break;
			   }
		   case 28:	//4 : ֻƥ��ָ�������ڵĵ�һ�㺢�Ӵ���+8:ƥ�������ߴ���Ϊ0�Ĵ���,����������+16.ƥ��ɼ��Ĵ���
			   {
			   HWND p=::GetWindow(parent,GW_CHILD); //��ȡ���洰�ڵ��Ӵ���
			   p=::GetWindow(p,GW_HWNDFIRST);
			   while(p!=NULL)
				   {
				   if(::IsWindowVisible( p )&&::GetWindow( p, GW_OWNER ) == 0)
					   {
					   if(process_name)//EnumWindowByProcess
						   {
						   DWORD pid=0;
						   GetWindowThreadProcessId(p,&pid);
						   if(EnumProcessbyName(pid,process_name))
							   {
							   if(processpid!=pid)  //ֻƥ��ָ��ӳ�������Ӧ�ĵ�һ������. �����кܶ�ͬӳ�����Ľ��̣�ֻƥ���һ�����̵�.
								   {
								   if(indexpid<IsEuemprosuccess)
									   {	
									   indexpid++;
									   processpid=pid;
									   memset(retstring,0,retstringlen);//��շ����ַ���
									   retstringlen=0;
									   }
								   }
							   if(processpid==pid)
								   {
								   if(retstringlen==0)
									   retstringlen=wcslen(retstring);
								   if(retstringlen>1)
									   swprintf(retstring,L"%s,%d", retstring,p);
								   else
									   swprintf(retstring,L"%d",p);
								   bret=true;
								   HWND hchile=::GetWindow(p,GW_CHILD);
								   if(hchile!=NULL)
									   {
											FindChildWnd(hchile,NULL,NULL,retstring,true,true,process_name);
									   }
								   }

							   }
						   }
					   else
						   {
						   if(retstringlen==0)
							   retstringlen=wcslen(retstring);
						   if(retstringlen>1)
								   swprintf(retstring,L"%s,%d", retstring,p);
							   else
								   swprintf(retstring,L"%d",p);
							   bret=true;
						   }
					   }
				   p=::GetWindow(p,GW_HWNDNEXT);   //��ȡ��һ������
				   }
			   break;
			   }
		   case 29:	////1.���ڱ���+4 : ֻƥ��ָ�������ڵĵ�һ�㺢�Ӵ���+8:ƥ�������ߴ���Ϊ0�Ĵ���,����������+16.ƥ��ɼ��Ĵ���
			   {
			   if(wcslen(title)<1)
				   return false;
			   HWND p=::GetWindow(parent,GW_CHILD); //��ȡ���洰�ڵ��Ӵ���
			   p=::GetWindow(p,GW_HWNDFIRST);
			   while(p!=NULL)
				   {
				   if(::IsWindowVisible( p )&&::GetWindow( p, GW_OWNER ) == 0)
					   {

					   if(process_name)//EnumWindowByProcess
						   {
						   DWORD pid=0;
						   GetWindowThreadProcessId(p,&pid);
						   if(EnumProcessbyName(pid,process_name))
							   {
							   if(processpid!=pid)  //ֻƥ��ָ��ӳ�������Ӧ�ĵ�һ������. �����кܶ�ͬӳ�����Ľ��̣�ֻƥ���һ�����̵�.
								   {
								   if(indexpid<IsEuemprosuccess)
									   {	
									   indexpid++;
									   processpid=pid;
									   memset(retstring,0,retstringlen);//��շ����ַ���
									   retstringlen=0;
									   }
								   }
							   if(processpid==pid)
								   {
								   wchar_t WindowTitle[MAX_PATH] = {0};
								   ::GetWindowText(p, WindowTitle, MAX_PATH);
								   if(wcslen(WindowTitle)>1)
									   {
									   wchar_t *strfind=wcsstr(WindowTitle,title);   //ģ��ƥ��
									   if(strfind)
										   {
										   if(retstringlen==0)
											   retstringlen=wcslen(retstring);
										   if(retstringlen>1)
											   swprintf(retstring,L"%s,%d", retstring,p);
										   else
											   swprintf(retstring,L"%d",p);
										   bret=true;
										   }
									   }
								   HWND hchile=::GetWindow(p,GW_CHILD);
								   if(hchile!=NULL)
									   {
									   FindChildWnd(hchile,title,NULL,retstring,true,true,process_name);
									   }
								   }

							   }
						   }
					   else
						   {
						   wchar_t WindowTitle[MAX_PATH] = {0};
						   ::GetWindowText(p, WindowTitle, MAX_PATH);
						   if(wcslen(WindowTitle)>1)
							   {
							   wchar_t *strfind=wcsstr(WindowTitle,title);   //ģ��ƥ��
							   if(strfind)
								   {
								   if(retstringlen==0)
									   retstringlen=wcslen(retstring);
								   if(retstringlen>1)
									   swprintf(retstring,L"%s,%d", retstring,p);
								   else
									   swprintf(retstring,L"%d",p);
								   bret=true;
								   }
							   }
						   }
					   }
				   p=::GetWindow(p,GW_HWNDNEXT);   //��ȡ��һ������
				   }
			   break;
			   }
		   case 30://2.��������+4 : ֻƥ��ָ�������ڵĵ�һ�㺢�Ӵ���+8:ƥ�������ߴ���Ϊ0�Ĵ���,����������+16.ƥ��ɼ��Ĵ���
			   {
			   if(wcslen(class_name)<1)
				   return false;
			   HWND p=::GetWindow(parent,GW_CHILD); //��ȡ���洰�ڵ��Ӵ���
			   p=::GetWindow(p,GW_HWNDFIRST);
			   while(p!=NULL)
				   {
				   if(::IsWindowVisible( p )&&::GetWindow( p, GW_OWNER ) == 0)
					   {
					   if(process_name)//EnumWindowByProcess
						   {
						   DWORD pid=0;
						   GetWindowThreadProcessId(p,&pid);
						   if(EnumProcessbyName(pid,process_name))
							   {
							   if(processpid!=pid)  //ֻƥ��ָ��ӳ�������Ӧ�ĵ�һ������. �����кܶ�ͬӳ�����Ľ��̣�ֻƥ���һ�����̵�.
								   {
								   if(indexpid<IsEuemprosuccess)
									   {	
									   indexpid++;
									   processpid=pid;
									   memset(retstring,0,retstringlen);//��շ����ַ���
									   retstringlen=0;
									   }
								   }
							   if(processpid==pid)
								   {
								   wchar_t WindowClassName[MAX_PATH] = {0};
								   ::GetClassName(p, WindowClassName, MAX_PATH);
								   if(wcslen(WindowClassName)>1)
									   {
									   wchar_t *strfind=wcsstr(WindowClassName,class_name);   //ģ��ƥ��
									   if(strfind)
										   {
										   if(retstringlen==0)
											   retstringlen=wcslen(retstring);
										   if(retstringlen>1)
											   swprintf(retstring,L"%s,%d", retstring,p);
										   else
											   swprintf(retstring,L"%d",p);
										   bret=true;
										   }
									   }
								   HWND hchile=::GetWindow(p,GW_CHILD);
								   if(hchile!=NULL)
									   {
									   FindChildWnd(hchile,NULL,class_name,retstring,true,true,process_name);
									   }
								   }

							   }
						   }
					   else
						   {
						   wchar_t WindowClassName[MAX_PATH] = {0};
						   ::GetClassName(p, WindowClassName, MAX_PATH);
						   if(wcslen(WindowClassName)>1)
							   {
							   wchar_t *strfind=wcsstr(WindowClassName,class_name);   //ģ��ƥ��
							   if(strfind)
								   {
								   if(retstringlen==0)
									   retstringlen=wcslen(retstring);
								   if(retstringlen>1)
									   swprintf(retstring,L"%s,%d", retstring,p);
								   else
									   swprintf(retstring,L"%d",p);
								   bret=true;
								   }
							   }
						   }
					   }
				   p=::GetWindow(p,GW_HWNDNEXT);   //��ȡ��һ������
				   }
			   break;
			   }
		   case 31:	//1.���ڱ���+2.��������+4 : ֻƥ��ָ�������ڵĵ�һ�㺢�Ӵ���+8:ƥ�������ߴ���Ϊ0�Ĵ���,����������+16.ƥ��ɼ��Ĵ���
			   {
			   if(wcslen(class_name)<1&&wcslen(title)<1)
				   return false;
			   HWND p=::GetWindow(parent,GW_CHILD); //��ȡ���洰�ڵ��Ӵ���
			   p=::GetWindow(p,GW_HWNDFIRST);
			   while(p!=NULL)
				   {
				   if(::IsWindowVisible( p )&&::GetWindow( p, GW_OWNER ) == 0)
					   {
					   if(process_name)//EnumWindowByProcess
						   {
						   DWORD pid=0;
						   GetWindowThreadProcessId(p,&pid);
						   if(EnumProcessbyName(pid,process_name))
							   {
							   if(processpid!=pid)  //ֻƥ��ָ��ӳ�������Ӧ�ĵ�һ������. �����кܶ�ͬӳ�����Ľ��̣�ֻƥ���һ�����̵�.
								   {
								   if(indexpid<IsEuemprosuccess)
									   {	
									   indexpid++;
									   processpid=pid;
									   memset(retstring,0,retstringlen);//��շ����ַ���
									   retstringlen=0;
									   }
								   }
							   if(processpid==pid)
								   {
								   wchar_t WindowClassName[MAX_PATH] = {0};
								   ::GetClassName(p, WindowClassName, MAX_PATH);
								   wchar_t WindowTitle[MAX_PATH] = {0};
								   ::GetWindowText(p, WindowTitle, MAX_PATH);
								   if(wcslen(WindowClassName)>1&&wcslen(WindowTitle)>1)
									   {
									   wchar_t *strfindclass=wcsstr(WindowClassName,class_name);   //ģ��ƥ��
									   wchar_t *strfindtitle=wcsstr(WindowTitle,title);   //ģ��ƥ��
									   if(strfindclass&&strfindtitle)
										   {
										   if(retstringlen==0)
											   retstringlen=wcslen(retstring);
										   if(retstringlen>1)
											   swprintf(retstring,L"%s,%d", retstring,p);
										   else
											   swprintf(retstring,L"%d",p);
										   bret=true;
										   }
									   }
								   HWND hchile=::GetWindow(p,GW_CHILD);
								   if(hchile!=NULL)
									   {
									   FindChildWnd(hchile,title,class_name,retstring,true,true,process_name);
									   }
								   }

							   }
						   }
					   else
						   {
						   wchar_t WindowClassName[MAX_PATH] = {0};
						   ::GetClassName(p, WindowClassName, MAX_PATH);
						   wchar_t WindowTitle[MAX_PATH] = {0};
						   ::GetWindowText(p, WindowTitle, MAX_PATH);
						   if(wcslen(WindowClassName)>1&&wcslen(WindowTitle)>1)
							   {
							   wchar_t *strfindclass=wcsstr(WindowClassName,class_name);   //ģ��ƥ��
							   wchar_t *strfindtitle=wcsstr(WindowTitle,title);   //ģ��ƥ��
							   if(strfindclass&&strfindtitle)
								   {
								   if(retstringlen==0)
									   retstringlen=wcslen(retstring);
								   if(retstringlen>1)
									   swprintf(retstring,L"%s,%d", retstring,p);
								   else
									   swprintf(retstring,L"%d",p);
								   bret=true;
								   }
							   }
						   }
					   }
				   p=::GetWindow(p,GW_HWNDNEXT);   //��ȡ��һ������
				   }
			   break;
			   }
		   default:
			   return bret;

		   }
	  
	   return bret;
	}


bool TSWindowsAPI::TSEnumWindowSuper(wchar_t *spec1,LONG flag1,LONG type1,wchar_t *spec2,LONG flag2,LONG type2,LONG sort,wchar_t *retstring)
	{
		 bool bret=false;
		 wchar_t findhwnd1[MAX_PATH*100]={0};
		 wchar_t findhwnd2[MAX_PATH*100]={0};
		 bool bfindhwnd1=false;
		 bool bfindhwnd2=false;
		 retstringlen=0;
		 HWND parent=GetDesktopWindow();
		 HWND p=::GetWindow(parent,GW_CHILD);
		 p=::GetWindow(p,GW_HWNDFIRST);
		 while(p!=NULL)
			 {
			 if(flag1==0)//0��ʾspec1�������Ǳ���
				 {
					 wchar_t WindowTitle[MAX_PATH] = {0};
					::GetWindowText(p, WindowTitle, MAX_PATH);
					if(wcslen(WindowTitle)>0)
						{
						 if(type1==0)//0��ȷ�ж�,1ģ���ж�
							 {
								 if(wcscmp(spec1,WindowTitle)==0)
									bfindhwnd1=true;
							 }
						 else  if(type1==1)
							 {
								if(wcsstr(WindowTitle,spec1)!=NULL)
									bfindhwnd1=true;
							 }
						 }
				 }
			 else if(flag1==1)//1��ʾspec1�������ǳ�������
				 {
					  DWORD pid=0;
					  ::GetWindowThreadProcessId(p,&pid);
					  wchar_t proname[MAX_PATH]={0};
					  GetProcesspath(pid,proname);
				 }
			 else if(flag1==2)//2��ʾspec1������������
				 {
					 wchar_t WindowClassName[MAX_PATH] = {0};
					 ::GetClassName(p, WindowClassName, MAX_PATH);
					 if(wcslen(WindowClassName)>0)
							{
							if(type1==0)//0��ȷ�ж�,1ģ���ж�
								{
								if(wcscmp(spec1,WindowClassName)==0)
									bfindhwnd1=true;
								}
							else
								{
								if(wcsstr(WindowClassName,spec1)!=NULL)
									bfindhwnd1=true;
								}
							}
				 }
			 if(bfindhwnd1)
				 {
					 if(retstringlen==0)
						 retstringlen=wcslen(retstring);
					 if(retstringlen>1)
						 swprintf(retstring,L"%s,%d", retstring,p);
					 else
						 swprintf(retstring,L"%d",p);
					 bfindhwnd1=false;
				 }

				 HWND hchile=::GetWindow(p,GW_CHILD);
				 if(hchile!=NULL)
					 {
						FindChildWnd(hchile,NULL,NULL,findhwnd1);
					 }
				 p=::GetWindow(p,GW_HWNDNEXT);   //��ȡ��һ������
			 }

		  return bret;
	}

bool TSWindowsAPI::TSEnumProcess(wchar_t *name,wchar_t *retstring)
	{
		 bool bret=false;
		 retstringlen=0;
		 if(wcslen(name)<1)
			 return false;
		 IsEuemprosuccess=0;
		 if(EnumProcessbyName(0,name)==true)
			 {
				bret=true;
				for(int i=0;i<IsEuemprosuccess;i++)
					{
					if(retstringlen==0)
						retstringlen=wcslen(retstring);
					if(retstringlen>1)
						swprintf(retstring,L"%s,%d", retstring,npid[i]);
					else
						swprintf(retstring,L"%d",npid[i]);
					}
			 }
		 return bret;
	}
bool TSWindowsAPI::TSClientToScreen(LONG hwnd,LONG &x,LONG &y)
	{
		POINT point;
		 if(my_ClientToScreen)
			 {
				 my_ClientToScreen((HWND)hwnd,&point);
			 }
		 else
			 ::ClientToScreen((HWND)hwnd,&point);

		 x=point.x;
		 y=point.y;

		 return true;
			 
	}
bool TSWindowsAPI::TSFindWindow(wchar_t *class_name,wchar_t*title,LONG &rethwnd,DWORD parent)
	{
		bool bret=false;
		rethwnd=0;
		HWND p=NULL;
		if(parent==0)
			 p=::GetWindow(GetDesktopWindow(),GW_CHILD); //��ȡ���洰�ڵ��Ӵ���
		else 
		    p=::GetWindow((HWND)parent,GW_CHILD); //��ȡ���洰�ڵ��Ӵ���
		if(p==NULL)
			return bret;
	   p=::GetWindow(p,GW_HWNDFIRST);
	   while(p!=NULL)
		   {
		   if(::IsWindowVisible( p )&&::GetWindow( p, GW_OWNER ) == 0)
			   {
			   if(wcslen(class_name)<1&&wcslen(title)<1)
				   {
					   rethwnd=(LONG)p;
					   bret=true;
					   break;
				   }
			   else
				   {
					   wchar_t WindowClassName[MAX_PATH] = {0};
					   ::GetClassName(p, WindowClassName, MAX_PATH);
					   wchar_t WindowTitle[MAX_PATH] = {0};
					   ::GetWindowText(p, WindowTitle, MAX_PATH);
					   if(wcslen(WindowClassName)>1&&wcslen(WindowTitle)>1)
						   {
						   wchar_t *strfindclass=wcsstr(WindowClassName,class_name);   //ģ��ƥ��
						   wchar_t *strfindtitle=wcsstr(WindowTitle,title);   //ģ��ƥ��
						   if((wcslen(class_name)>=1&&strfindclass) ||(wcslen(title)>=1&&strfindtitle) )
							   {
								   rethwnd=(LONG)p;
								   bret=true;
								   break;
							   }
						   }
				   }
			   }
		   p=::GetWindow(p,GW_HWNDNEXT);   //��ȡ��һ������
		   }

		return bret;
	}

bool TSWindowsAPI::TSFindWindowByProcess(wchar_t *class_name,wchar_t *title,LONG &rethwnd,wchar_t *process_name,DWORD Pid)
	{
		 bool bret=false;
		 rethwnd=0;
		 if(process_name)
			 {
			 if(wcslen(process_name)<1)
				 return false;
			 memset(npid,0,MAX_PATH);
			 IsEuemprosuccess=0;
			 if(EnumProcessbyName(0,process_name)==false)
				 return false;

			 HWND p=::GetWindow(GetDesktopWindow(),GW_CHILD); //��ȡ���洰�ڵ��Ӵ���
			 p=::GetWindow(p,GW_HWNDFIRST);
			 while(p!=NULL)
				 {
					 if(::IsWindowVisible( p )&&::GetWindow( p, GW_OWNER ) == 0)
						 {
						 DWORD pid=0;
						 GetWindowThreadProcessId(p,&pid);
						 if(EnumProcessbyName(pid,process_name))
							 {
							 if(wcslen(class_name)<1&&wcslen(title)<1)
								 {
									 rethwnd=(LONG)p;
									 bret=true;
									 break;
								 }
							 else
								 {
								 wchar_t WindowClassName[MAX_PATH] = {0};
								 ::GetClassName(p, WindowClassName, MAX_PATH);
								 wchar_t WindowTitle[MAX_PATH] = {0};
								 ::GetWindowText(p, WindowTitle, MAX_PATH);
								 if(wcslen(WindowClassName)>1&&wcslen(WindowTitle)>1)
									 {
									 wchar_t *strfindclass=wcsstr(WindowClassName,class_name);   //ģ��ƥ��
									 wchar_t *strfindtitle=wcsstr(WindowTitle,title);   //ģ��ƥ��
									 if((wcslen(class_name)>=1&&strfindclass) ||(wcslen(title)>=1&&strfindtitle) )
										 {
											 rethwnd=(LONG)p;
											 bret=true;
											 break;
										 }
									 }
								
								 HWND hchile=::GetWindow(p,GW_CHILD);
								 if(hchile!=NULL)
									 {
										 wchar_t * classname=NULL;
										 wchar_t *titles=NULL;
										if(wcslen(class_name)>0)
										   classname=class_name;
										if(wcslen(title)>0)
											titles=titles;
										DWORD dret=FindChildWnd(hchile,titles,classname,NULL,false,false,process_name);
										if(dret>0)
											{
											 rethwnd=(LONG)dret;
											 bret=true;
											 break;
											}
									 }
								 }
							 }
						 }
				 p=::GetWindow(p,GW_HWNDNEXT);   //��ȡ��һ������
				 }
			 }
		 else if(Pid>0)
			 {
				 HWND p=::GetWindow(GetDesktopWindow(),GW_CHILD); //��ȡ���洰�ڵ��Ӵ���
				 p=::GetWindow(p,GW_HWNDFIRST);
				 while(p!=NULL)
					 {
					 if(::IsWindowVisible( p )&&::GetWindow( p, GW_OWNER ) == 0)
						 {
						 DWORD npid=0;
						 GetWindowThreadProcessId(p,&npid);
						 if(Pid==npid)
							 {
							 if(wcslen(class_name)<1&&wcslen(title)<1)
								 {
									 rethwnd=(LONG)p;
									 bret=true;
									 break;
								 }
							 else
								 {
									 wchar_t WindowClassName[MAX_PATH] = {0};
									 ::GetClassName(p, WindowClassName, MAX_PATH);
									 wchar_t WindowTitle[MAX_PATH] = {0};
									 ::GetWindowText(p, WindowTitle, MAX_PATH);
									 if(wcslen(WindowClassName)>1&&wcslen(WindowTitle)>1)
										 {
										 wchar_t *strfindclass=wcsstr(WindowClassName,class_name);   //ģ��ƥ��
										 wchar_t *strfindtitle=wcsstr(WindowTitle,title);   //ģ��ƥ��
										 if((wcslen(class_name)>=1&&strfindclass) ||(wcslen(title)>=1&&strfindtitle) )
											 {
												 rethwnd=(LONG)p;
												 bret=true;
												 break;
											 }
										 }
									 HWND hchile=::GetWindow(p,GW_CHILD);
									 if(hchile!=NULL)
										 {
										 wchar_t * classname=NULL;
										 wchar_t *titles=NULL;
										 if(wcslen(class_name)>0)
											 classname=class_name;
										 if(wcslen(title)>0)
											 titles=titles;
										 DWORD dret=FindChildWnd(hchile,titles,classname,NULL,false,false,process_name);
										 if(dret>0)
											 {
												 rethwnd=(LONG)dret;
												 bret=true;
												 break;
											 }
										 }
								 }
							 }
						 }
						 p=::GetWindow(p,GW_HWNDNEXT);   //��ȡ��һ������
					 }
			 }

		 return bret;
	}
bool TSWindowsAPI::TSGetClientRect(LONG hwnd,LONG &x,LONG &y,LONG &x1, LONG &y1)
	{
		bool bret=false;
		RECT clientrect;
		if(IsWindow((HWND)hwnd))
			{
				::GetClientRect((HWND)hwnd,&clientrect);
				POINT point;
				point.x=clientrect.left;
				point.y=clientrect.top;
				::ClientToScreen((HWND)hwnd,&point);
				x=point.x;
				y=point.y;
				point.x=clientrect.right;
				point.y=clientrect.bottom;
				::ClientToScreen((HWND)hwnd,&point);
				x1=point.x;
				y1=point.y;
				bret=true;
			}

		return bret;
	}
bool TSWindowsAPI::TSGetClientSize(LONG hwnd,LONG &width,LONG &height)
	{
		bool bret=false;
		RECT clientrect;
		if(IsWindow((HWND)hwnd))
			{
			::GetClientRect((HWND)hwnd,&clientrect);
			width=clientrect.right-clientrect.left;
			height=clientrect.bottom-clientrect.top;
			bret=true;
			}			
		return bret;
	}
bool TSWindowsAPI::TSGetMousePointWindow(LONG &rethwnd,LONG x,LONG y)
	{
		bool bret=false;
		rethwnd=0;
		POINT point;
		if((x!=-1&&y!=-1))
			{
				point.x=x;
				point.y=y;
			}
		else
			//::GetCursorPos(&point);
			My_GetCursorPos(&point);
		 rethwnd=(DWORD)::WindowFromPoint(point);
		if(rethwnd==NULL)
		 {
			HWND p=::GetWindow(GetDesktopWindow(),GW_CHILD); //��ȡ���洰�ڵ��Ӵ���
			p=::GetWindow(p,GW_HWNDFIRST);
			while(p!=NULL)
				{
				 if ( ::IsWindowVisible( p ) && ::GetWindow( p, GW_OWNER ) == 0 )
					 {
					 RECT rc;
					 ::GetWindowRect(p, &rc);
					 if((rc.top <= point.y) && (rc.left <= point.x) && (rc.right >= (point.x-rc.left)) && (rc.bottom >= (point.y-rc.top)))
						 {
						 wchar_t WindowClass[MAX_PATH] = {0};
						 ::GetClassName(p,WindowClass,MAX_PATH);
						 //if((windowpoint.x==0||windowpoint.x<rc.left)&&wcscmp(WindowClass,L"CabinetWClass")!=0)	//IE�����ų�����
						 if(wcscmp(WindowClass,L"CabinetWClass")!=0)	//IE�����ų�����
								{
									rethwnd=(DWORD)p;
									bret=true;
									break;
								}
						 }
					 }			
				p=::GetWindow(p,GW_HWNDNEXT);   //��ȡ��һ������
				}
			}
		else
			bret=true;

		return bret;
	}

int TSWindowsAPI::GetProcessNumber()//��ȡCPU����
	{
	SYSTEM_INFO info;
	GetSystemInfo(&info);
	return (int)info.dwNumberOfProcessors;
	}

// ʱ���ʽת��
__int64 TSWindowsAPI::FileTimeToInt64(const FILETIME& time)
	{
	ULARGE_INTEGER tt;
	tt.LowPart = time.dwLowDateTime;
	tt.HighPart = time.dwHighDateTime;
	return(tt.QuadPart);
	}

double TSWindowsAPI::get_cpu_usage(DWORD ProcessID)	 //��ȡָ������CPUʹ����
	{  
	//cpu����
	static int processor_count_ = -1;
	//��һ�ε�ʱ��
	static __int64 last_time_ = 0;
	static __int64 last_system_time_ = 0;

	FILETIME now;
	FILETIME creation_time;
	FILETIME exit_time;
	FILETIME kernel_time;
	FILETIME user_time;
	__int64 system_time;
	__int64 time;
	// 	__int64 system_time_delta;
	// 	__int64 time_delta;

	double cpu = -1;

	if(processor_count_ == -1)
		{
		processor_count_ = GetProcessNumber();
		}

	GetSystemTimeAsFileTime(&now);

	//HANDLE hProcess = OpenProcess(PROCESS_QUERY_INFORMATION/*PROCESS_ALL_ACCESS*/, false, ProcessID);
	HANDLE hProcess =NULL;
	if(my_OpenProcess)
		{
		hProcess = my_OpenProcess(  
			PROCESS_QUERY_INFORMATION |
			PROCESS_VM_READ,
			FALSE, ProcessID );
		}
	else
		{
		hProcess = OpenProcess(  
			PROCESS_QUERY_INFORMATION |
			PROCESS_VM_READ,
			FALSE, ProcessID );
		}
	if (!hProcess)
		{
		return -1;
		}
	if (!GetProcessTimes(hProcess, &creation_time, &exit_time, &kernel_time, &user_time))
		{
		return -1;
		}
	system_time = (FileTimeToInt64(kernel_time) + FileTimeToInt64(user_time)) / processor_count_;  //CPUʹ��ʱ��
	time = FileTimeToInt64(now);		//���ڵ�ʱ��

	last_system_time_ = system_time;
	last_time_ = time;
	CloseHandle( hProcess );

	Sleep(1000);

	//hProcess = OpenProcess(PROCESS_QUERY_INFORMATION/*PROCESS_ALL_ACCESS*/, false, ProcessID);
	if(my_OpenProcess)
		{
		hProcess = my_OpenProcess(  
			PROCESS_QUERY_INFORMATION |
			PROCESS_VM_READ,
			FALSE, ProcessID );
		}
	else
		{
		hProcess = OpenProcess(  
			PROCESS_QUERY_INFORMATION |
			PROCESS_VM_READ,
			FALSE, ProcessID );
		}
	if (!hProcess)
		{
		return -1;
		}
	if (!GetProcessTimes(hProcess, &creation_time, &exit_time, &kernel_time, &user_time))
		{
		return -1;
		}
	GetSystemTimeAsFileTime(&now);
	system_time = (FileTimeToInt64(kernel_time) + FileTimeToInt64(user_time)) / processor_count_;  //CPUʹ��ʱ��
	time = FileTimeToInt64(now);		//���ڵ�ʱ��

	CloseHandle( hProcess );

	cpu = ((double)(system_time - last_system_time_) / (double)(time - last_time_)) * 100;
	return cpu;
	}

//����ָ�������ڴ�ʹ����
DWORD  TSWindowsAPI::GetMemoryInfo(DWORD ProcessID)
	{
		 PROCESS_MEMORY_COUNTERS pmc;
		 DWORD memoryInK=0;
		  HANDLE hProcess=NULL;
		 if(my_OpenProcess)
			 {
				 hProcess = my_OpenProcess(  
					 PROCESS_QUERY_INFORMATION |
					 PROCESS_VM_READ,
					 FALSE, ProcessID );
			 }
		 else
			 {
				  hProcess = OpenProcess(  
					 PROCESS_QUERY_INFORMATION |
					 PROCESS_VM_READ,
					 FALSE, ProcessID );
			 }
		 if (GetProcessMemoryInfo( hProcess, &pmc, sizeof(pmc)))
			 {
				 //memoryInK = pmc.WorkingSetSize/1024;		//��λΪk
				 memoryInK=pmc.WorkingSetSize;
			 }

		 CloseHandle( hProcess );
		 return memoryInK;
	}

bool TSWindowsAPI::TSGetProcessInfo(LONG pid,wchar_t *retstring)
	{
		bool bret=false;
		wchar_t process_name[MAX_PATH]={0};
		wchar_t process_path[MAX_PATH]={0};
		DWORD cpu=0;
		DWORD meminfo=0;

		int nItem = 0;	// �����
		PROCESSENTRY32 pe32 = { sizeof(PROCESSENTRY32) }; 
		HANDLE hProcessSnap = ::CreateToolhelp32Snapshot(TH32CS_SNAPPROCESS, 0); 
		if(hProcessSnap == INVALID_HANDLE_VALUE) 
			return FALSE; 
		if(::Process32First(hProcessSnap, &pe32)) 
			{ 
			do 
				{ 
				if(pe32.th32ProcessID==pid)
					{
						wcscpy(process_name,pe32.szExeFile);
						break;
					}

				} 
				while(::Process32Next(hProcessSnap, &pe32)); 
			}
		::CloseHandle(hProcessSnap);
		if(wcslen(process_name)<1)
			return bret;

		TSRuntime::GetRemoteModulePath(process_name,pid,process_path);
		cpu=(DWORD)get_cpu_usage(pid); 
		meminfo=(DWORD)GetMemoryInfo(pid);

		swprintf(retstring,L"%s|%s|%d|%d",process_name,process_path,cpu,meminfo);

		return bret;
	}
bool TSWindowsAPI::GetProcesspath(DWORD ProcessID,wchar_t* process_path)
	{
	HANDLE hProcess=NULL;
	if(my_OpenProcess)
		{
		hProcess = my_OpenProcess(  
			PROCESS_QUERY_INFORMATION |
			PROCESS_VM_READ,
			FALSE, ProcessID );
		}
	else
		{
		hProcess = OpenProcess(  
			PROCESS_QUERY_INFORMATION |
			PROCESS_VM_READ,
			FALSE, ProcessID );
		}
	HMODULE hMods=NULL;
	DWORD cbNeededModule = 0 ;
	EnumProcessModules( hProcess, &hMods, sizeof(hMods), &cbNeededModule ) ;
	GetModuleFileNameEx(hProcess,hMods,process_path,MAX_PATH);

	return true;
	}
bool TSWindowsAPI::TSGetWindow(LONG hwnd,LONG flag,LONG &rethwnd)
	{
		bool bret=false;
		rethwnd=0;
		HWND wnd=(HWND)hwnd;
		if(IsWindow(wnd)==false)
			return bret;
		DWORD type=-1;
		if(flag==0)	 //0:��ȡ������
			rethwnd=(LONG)::GetParent(wnd);
		else if(flag==1)//��ȡ��һ�����Ӵ���
			type=GW_CHILD;
		else if(flag==2)//��ȡFirst ����
			type=GW_HWNDFIRST;
		else if(flag==3)//��ȡLast����
			type=GW_HWNDLAST;
		else if(flag==4)//��ȡ��һ������
			type=GW_HWNDNEXT;
		else if(flag==5)//��ȡ��һ������
			type=GW_HWNDPREV;
		else if(flag==6) //��ȡӵ���ߴ���
			type=GW_OWNER;
		else if(flag==7) //��ȡ���㴰��
			rethwnd=(LONG)::GetForegroundWindow();
		if(type!=-1)
			rethwnd=(LONG)::GetWindow(wnd,(UINT)type);

		if(rethwnd!=0)
			bret=true;

		return bret;

	}

bool TSWindowsAPI::TSGetWindowState(LONG hwnd,LONG flag)
	{
	bool bret=false;
	HWND wnd=(HWND)hwnd;
	if(flag==0)	 //0://�жϴ����Ƿ����
		bret=::IsWindow(wnd);
	else if(flag==1)//�жϴ����Ƿ��ڼ���
		{
		if(::GetActiveWindow()==wnd)
			bret=true;
		}
	else if(flag==2)//2 : �жϴ����Ƿ�ɼ�
		bret=::IsWindowVisible(wnd);
	else if(flag==3)//3 : �жϴ����Ƿ���С��
		bret=::IsIconic(wnd);
	else if(flag==4)//4 : �жϴ����Ƿ����
		bret=::IsZoomed(wnd);
	else if(flag==5)//5 : �жϴ����Ƿ��ö�
		{
		if(::GetForegroundWindow()==wnd)
			bret=true;
		}
	else if(flag==6) //6 : �жϴ����Ƿ�����Ӧ
		bret=::IsHungAppWindow(wnd);
	else if(flag==7) //�жϴ����Ƿ����(��ɫΪ������)
		bret=::IsWindowEnabled(wnd);

	return bret;
	}

bool TSWindowsAPI::TSSendPaste(LONG hwnd)
	{
		bool bret=true;
		HANDLE hClip;
		char *chBuffer=NULL;
		if (OpenClipboard(NULL))
			{
			//�Ӽ�������ȡ��һ���ڴ�ľ��
			hClip=GetClipboardData(CF_TEXT);
			//�����ַ���ָ��������������ڴ���е�����
			//���ڴ����м��������ڴ���ֵת��Ϊһ��ָ��,�����ڴ������ü�������һ���ڴ��е�����Ҳ���ص�ָ���ͱ�����
			chBuffer=(char *)GlobalLock(hClip);
			//�����ݱ��浽�ַ��ͱ�����
			//���ڴ������ü�������һ
			GlobalUnlock(hClip);
			//�رռ����壬�ͷż�������Դ��ռ��Ȩ
			CloseClipboard();
			}
		//anscii ת unicode
		DWORD num= MultiByteToWideChar(CP_ACP,0,chBuffer,-1,NULL,0); 
		wchar_t *wword= new wchar_t[num+1];//��̬������ռ����
		memset(wword, 0, (num+1)*sizeof(wchar_t));   //��ʼ������
		MultiByteToWideChar(CP_ACP,0,chBuffer,-1,wword,num);

		int len=wcslen(wword);
		//MessageBoxA(NULL,tts,tts,NULL);
		for(int i=0;i<len;i++)
			{
				::SendMessage((HWND)hwnd,WM_CHAR,(WPARAM)wword[i],(LPARAM)1);
				Sleep(10);
			}
		delete [] wword;
		
		return bret;
	}

bool TSWindowsAPI::TSSetWindowSize(LONG hwnd, LONG width, LONG hight,int type)
	{
	   bool bret=false;
	   if(type==0)//SetClientSize
		   {
			   RECT  rectProgram,rectClient;
			   HWND hWnd=(HWND)hwnd;
			   ::GetWindowRect(hWnd, &rectProgram);   //��ó��򴰿�λ����Ļ����
			   ::GetClientRect(hWnd, &rectClient);      //��ÿͻ�������
			   //�ǿͻ�����,��
			   int nWidth = rectProgram.right - rectProgram.left -(rectClient.right - rectClient.left); 
			   int nHeiht = rectProgram.bottom - rectProgram.top -(rectClient.bottom - rectClient.top); 
			   nWidth += width;
			   nHeiht += hight;
			   rectProgram.right =  nWidth;
			   rectProgram.bottom =  nHeiht;
			   int showToScreenx = GetSystemMetrics(SM_CXSCREEN)/2-nWidth/2;    //���д���
			   int showToScreeny = GetSystemMetrics(SM_CYSCREEN)/2-nHeiht/2;
			   bret=::MoveWindow(hWnd, showToScreenx, showToScreeny, rectProgram.right, rectProgram.bottom, false);
		   }
	   else	//SetWindowSize
		   {
				RECT rectClient;
				HWND hWnd=(HWND)hwnd;
				::GetWindowRect(hWnd, &rectClient);   //��ó��򴰿�λ����Ļ����
				bret=::MoveWindow(hWnd, rectClient.left, rectClient.top, width, hight, false);
		   }
	   return bret;
	}

bool TSWindowsAPI::TSSetWindowState(LONG hwnd,LONG flag,LONG rethwnd)
	{
		bool bret=false;
		HWND hWnd=(HWND)hwnd;
		if(IsWindow(hWnd)==false)
			return bret;
		int type=-1;
		type=flag;
		if(flag==0)//�ر�ָ������
			::SendMessage(hWnd,WM_CLOSE,0,0);
		else if(flag==1)//����ָ������
		{
			::ShowWindow(hWnd,SW_SHOW);
			::SetForegroundWindow(hWnd);
		}
		else if(flag==2)//��С��ָ������,��������
			::ShowWindow(hWnd,SW_SHOWMINNOACTIVE);
		else if(flag==3)//��С��ָ������,���ͷ��ڴ�,��ͬʱҲ�ἤ���	
			::ShowWindow(hWnd,SW_SHOWMINIMIZED);
		else if(flag==4)//���ָ������,ͬʱ�����.
			::ShowWindow(hWnd,SW_SHOWMAXIMIZED);
		else if(flag==5)//�ָ�ָ������ ,��������
			::ShowWindow(hWnd,SW_SHOWNOACTIVATE);
		else if(flag==6)//����ָ������
			::ShowWindow(hWnd,SW_HIDE);
		else if(flag==7)//��ʾָ������
		{
			::ShowWindow(hWnd,SW_SHOW);
			::SetForegroundWindow(hWnd);
		}
		else if(flag==8)//�ö�ָ������
			::SetWindowPos(hWnd,HWND_TOPMOST,0,0,0,0,SWP_NOMOVE|SWP_NOSIZE);//�����ö�
		else if(flag==9)//9 : ȡ���ö�ָ������
			::SetWindowPos(hWnd, HWND_NOTOPMOST,0,0,0,0,SWP_NOMOVE|SWP_NOSIZE);
		else if(flag==10)//��ָֹ������
			::EnableWindow(hWnd,false);
		else if(flag==11)//ȡ����ָֹ������
			::EnableWindow(hWnd,true);
		else if(flag==12)//12 : �ָ�������ָ������
			::ShowWindow(hWnd,SW_RESTORE);
		else if(flag==13)//13 : ǿ�ƽ����������ڽ���.
			{
				DWORD pid=0;
				::GetWindowThreadProcessId(hWnd,&pid);
				TSRuntime::EnablePrivilege(L"SeDebugPrivilege",true);
				HANDLE hprocess=NULL;
				if(my_OpenProcess)
					 hprocess=my_OpenProcess(PROCESS_ALL_ACCESS,false,pid);
				else
					 hprocess=::OpenProcess(PROCESS_ALL_ACCESS,false,pid);

				::TerminateProcess(hprocess,0);
			}
		else if(flag==14)//14 : ��˸ָ���Ĵ���
			{
			  FLASHWINFO fInfo;
			  fInfo.cbSize=sizeof(FLASHWINFO);
			  fInfo.dwFlags=FLASHW_ALL | FLASHW_TIMERNOFG;//�������������������������ť,ֱ���û������
			  fInfo.dwTimeout= 0;
			  fInfo.hwnd=hWnd;
			  fInfo.uCount=0xffffff;
			  FlashWindowEx(&fInfo);
			}
		else if(flag==15)//ʹָ���Ĵ��ڻ�ȡ���뽹��
			{
			::ShowWindow(hWnd,SW_SHOW);
			::SetFocus(hWnd);
			}

		if(type>=0&&type<16)
		   bret=true;

		return bret;
	}

bool TSWindowsAPI::TSSetWindowTransparent(LONG hwnd,LONG trans)
	{
		bool bret=false;

		COLORREF crKey=NULL;
		DWORD dwFlags=0;
		BYTE bAlpha=0;
		if(trans<0)
			trans=0;
		if(trans>255)
			trans=255;

		typedef bool (__stdcall  *  mySetLayeredWindowAttributes)( 
			HWND hwnd,
			COLORREF pcrKey,
			BYTE pbAlpha,
			DWORD pdwFlags); 
		mySetLayeredWindowAttributes obj_SetLayeredWindowAttributes=  NULL; 
		HINSTANCE hlibrary;
		hlibrary = LoadLibrary(_T("user32.dll"));
		obj_SetLayeredWindowAttributes=(mySetLayeredWindowAttributes)GetProcAddress(hlibrary,"SetLayeredWindowAttributes");
		SetWindowLong((HWND)hwnd, GWL_EXSTYLE,0x80001); 
		bret=obj_SetLayeredWindowAttributes((HWND)hwnd, crKey,trans,2);

		return bret;
	}

bool TSWindowsAPI::TSSetClipboard(wchar_t *values)
	{
	bool bret=false;
	int n=::WideCharToMultiByte (CP_ACP,0,values,-1,NULL,0,NULL,NULL);
	char *chcontent=new char[n+1];
	memset(chcontent,0,sizeof(char)*n+1);
	WideCharToMultiByte (CP_ACP,0,values,-1,chcontent,n,NULL,NULL);

	if (OpenClipboard(NULL))
		{
			//���������������
			EmptyClipboard();
			//�ֽڳ���
			int leng=strlen(chcontent)+1;
			//�ڶ��Ϸ�����ƶ����ڴ�飬���򷵻�һ���ڴ���
			HANDLE hClip=GlobalAlloc(GHND | GMEM_SHARE,leng);
			//����ָ���ַ��͵�ָ�����
			char * buff;
			//�Է�����ڴ����м��������ڴ����ת����һ��ָ��,������Ӧ�����ü�������һ
			buff=(char *)GlobalLock(hClip);
			//���û���������ݿ�����ָ������У�ʵ���Ͼ��ǿ�����������ڴ����
			memcpy(buff,chcontent,leng);
			buff[leng-1]=0;
			//����д����ϣ����н����������������ü��������ּ�һ
			GlobalUnlock(hClip);
			//����������ݵ��ڴ�������������Դ������
			HANDLE help = SetClipboardData(CF_TEXT,hClip);
			//�رռ����壬�ͷż�������Դ��ռ��Ȩ
			CloseClipboard();
			//MessageBox(0,L"�ѽ����ݴ��������",L"���а�",0);
			if(help !=NULL)
				{
				bret=true;
				}
			else
				{
				bret = false;
				}
		}
	delete [] chcontent;
	return bret;
	}

bool TSWindowsAPI::TSGetClipboard(wchar_t *retstr)
	{
	bool bret=false;
	HANDLE hClip;
	char *chBuffer=NULL;
	if (OpenClipboard(NULL))
		{
		//�Ӽ�������ȡ��һ���ڴ�ľ��
		hClip=GetClipboardData(CF_TEXT);
		//�����ַ���ָ��������������ڴ���е�����

		//���ڴ����м��������ڴ���ֵת��Ϊһ��ָ��,�����ڴ������ü�������һ���ڴ��е�����Ҳ���ص�ָ���ͱ�����
		chBuffer=(char *)GlobalLock(hClip);

		//�����ݱ��浽�ַ��ͱ�����
		//���ڴ������ü�������һ
		GlobalUnlock(hClip);
		//�رռ����壬�ͷż�������Դ��ռ��Ȩ
		CloseClipboard();
		}

	DWORD num= MultiByteToWideChar(CP_ACP,0,chBuffer,-1,NULL,0); 
	wchar_t *wword= new wchar_t[num+1];//��̬������ռ����
	memset(wword, 0, (num+1)*sizeof(wchar_t));   //��ʼ������
	MultiByteToWideChar(CP_ACP,0,chBuffer,-1,wword,num);

	if(num<MAX_PATH*4-1)
		wcscpy(retstr,wword);

	delete [] wword;
		
	return bret;
	}