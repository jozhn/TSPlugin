/*
��Դ����TC������Ƽ����޹�˾��Դ,���ܿ��������޸ġ�������
��ɳ������Ƽ����޹�˾����Դ�벻������ά��,,������ʹ�ù�������ѭ��ԴЭ��
*/

#include "StdAfx.h"
#include "DXBind.h"
#include "windows.h"
#include "TSRuntime.h"
#include "TSHookFuntion.h"
#include "TsMessage.h"
#include "D3dx9tex.h"
#include "MapFile.h"
#include "CreateGif/Quantizer.h"
#include "CreateGif/GSKCreateGIF.h"
#include "TSMyUser32DllFuntion.h"
#include <imm.h>	
#include <cmath>
#include "TSVIPHookFuntion.h"
#pragma comment(lib,"imm32.lib")

//DLL���ڵ�λ��
extern TCHAR gDLLFolder[MAX_PATH + 1];

extern myIsWindow  my_IsWindow;
extern myGetWindowThreadProcessId my_GetWindowThreadProcessId;

//ZwWriteVirtualMemory
DWORD ZwWriteVirtualMemoryRet=0;
DWORD ZwWriteVirtualMemoryEax=0;
__declspec(naked) NTSTATUS WINAPI My_ZwWriteVirtualMemory( IN HANDLE               ProcessHandle,
														  IN PVOID                BaseAddress,
														  IN PVOID                Buffer,
														  IN ULONG                NumberOfBytesToWrite,
														  OUT PULONG              NumberOfBytesWritten OPTIONAL )
{
	_asm
	{
		mov eax,ZwWriteVirtualMemoryEax;
		push ZwWriteVirtualMemoryRet;
		ret;
	}
}

DWORD MyGetWindowThreadProcessIdRet=0;
__declspec(naked) DWORD WINAPI MyGetWindowThreadProcessId(  HWND hWnd,   LPDWORD lpdwProcessId )
{
	_asm
	{
			mov edi,edi
			push ebp
			mov ebp,esp
			jmp MyGetWindowThreadProcessIdRet;
	}
}

extern DWORD ZwWriteVirtualMemoryRet;
extern DWORD ZwWriteVirtualMemoryEax;
__declspec(naked) NTSTATUS WINAPI My_ZwProtectVirtualMemory(IN HANDLE ProcessHandle,
														   IN PVOID *  BaseAddress,
														   IN SIZE_T *     NumberOfBytesToProtect,
														   IN ULONG    NewAccessProtection,
														   OUT PULONG  OldAccessProtection )
{
	_asm
	{
		//mov eax,0x4d ;//WIN7X64 ƫ��
		mov eax,Ntdll_ProtectVirtualEax;
		push Ntdll_ProtectVirtual;
		ret;
	}
}

extern DWORD ZwOpenProcessRet;
extern DWORD ZwOpenProcessEax;
__declspec(naked) NTSTATUS WINAPI MyZwOpenProcess(
	__out PHANDLE  ProcessHandle,
	__in ACCESS_MASK  DesiredAccess,
	__in POBJECT_ATTRIBUTES  ObjectAttributes,
	__in_opt PCLIENT_ID  ClientId
	)
{
	_asm
	{
		mov eax,ZwOpenProcessEax;
		jmp ZwOpenProcessRet;
	}
}

HANDLE MyOpenProcess(int proid)
{
	HANDLE ProcessHandle=(HANDLE)0;
	OBJECT_ATTRIBUTES ObjectAttribute={sizeof(OBJECT_ATTRIBUTES), 0,NULL,NULL};
	ObjectAttribute.Attributes=0;
	CLIENT_ID ClientIds;
	ClientIds.UniqueProcess=(HANDLE)proid;
	ClientIds.UniqueThread=(HANDLE)0;
	MyZwOpenProcess(&ProcessHandle,PROCESS_ALL_ACCESS,&ObjectAttribute,&ClientIds);
	ProcessHandle;

	return ProcessHandle;
}

typedef NTSTATUS (__stdcall  *  ZwUnmapViewOfSection)(IN HANDLE  ProcessHandle,IN PVOID  BaseAddress);
ZwUnmapViewOfSection Zw_UnmapViewOfSection=NULL;


bool DXBind::Inject201()//201,203��
{
	//ԭ������USER32InternalCallWinProc���λ���¹���,ִ�ж���õĻ��ָ��,�������ǵ�DLL
	bool success=false;
	DWORD InternalCallWinProc_Addr=0;
	DWORD InternalCallWinProc_AddrRet=0;
	InternalCallWinProc_Addr=(DWORD)::GetModuleHandle(L"user32.dll");
	if(winver==1)//WinXP
		InternalCallWinProc_Addr+=USER32InternalCallWinProcXPoffse;
	else if(winver==2)//Win2003
		InternalCallWinProc_Addr+=USER32InternalCallWinProcWin2003offse;
	else if(winver==4&&TSRuntime::IsWin7X64)//WIN7X64
		InternalCallWinProc_Addr+=USER32InternalCallProcWin7x64offse;
	else if(winver==4)//WIN7X86
		InternalCallWinProc_Addr+=USER32InternalCallProcWin7offse;
	else if(winver==5&&TSRuntime::IsWin8X64)//WIN8X64
		InternalCallWinProc_Addr+=USER32InternalCallProcWin8x64offse;
	else if(winver==5)//WIN8X86
		InternalCallWinProc_Addr+=USER32InternalCallProcWin8offse;

	PVOID pInternalCallProcAddr=(PVOID)InternalCallWinProc_Addr;

	InternalCallWinProc_AddrRet=InternalCallWinProc_Addr+5;
	TSRuntime::EnablePrivilege(L"SeDebugPrivilege",true);
	HANDLE hprocess=NULL;
	DWORD dwwrite=0;
	hprocess=MyOpenProcess(nPid);

	if(hprocess==NULL)
		return success;
	
	if(CallCodelen>0)//����֤�����ַ�ڵ�ǰ�����Ƿ����
	{
		MEMORY_BASIC_INFORMATION   mbi;
		VirtualQueryEx(hprocess,Alloaddr,&mbi,sizeof(MEMORY_BASIC_INFORMATION));
		if(mbi.Protect!=PAGE_EXECUTE_READWRITE)//˵���Ѿ�����ԭ���ĵ�ַ,��Ҫ���������ַ
		{
			CallCodelen=0;
			memset(CallCode,0,0x50);
		}

	}

	if(CallCodelen==0)
	{
		//MessageBoxA(NULL,"MyOpenProcess-success","TS",NULL);
		LPVOID dlladdr=NULL;
		dlladdr=::VirtualAllocEx(hprocess,NULL,wcslen(gDLLFolder)*sizeof(wchar_t)+1,MEM_COMMIT,PAGE_EXECUTE_READWRITE);//�����ַ�洢DLL·��
		if(dlladdr)
		{
			//TSRuntime::add_log("VirtualAllocEx:dlladdr:%x,CallCode;%x",dlladdr,&CallCode[0]);
			//MessageBoxA(NULL,"VirtualAllocEx-dlladdr-success","TS",NULL);
			My_ZwWriteVirtualMemory(hprocess,dlladdr,gDLLFolder,wcslen(gDLLFolder)*sizeof(wchar_t),&dwwrite);
			Alloaddr = ::VirtualAllocEx(hprocess,NULL,0x50,MEM_COMMIT,PAGE_EXECUTE_READWRITE);//�����ַ�洢,Զ��CALL�Ļ�����
			//TSRuntime::add_log("VirtualAllocEx:Alloaddr:%x,dwwrite;%x",Alloaddr,dwwrite);
			if(dwwrite!=0&&Alloaddr)
			{
				//MessageBoxA(NULL,"VirtualAllocEx-Alloaddr-success","TS",NULL);
				dwwrite=0;
				char Asmcalladdr[MAX_PATH]={0};
				DWORD Loadlibaryaddr=0;
				Loadlibaryaddr=(DWORD)TSRuntime::GetRemoteProcAddress(L"Kernel32.dll","LoadLibraryW",nPid);
				if(Loadlibaryaddr!=0)
				{
					CMgAsmBase tsasm;//��ҪҪ���ָ���Ϊ������
					CMgAsmBase::t_asmmodel  am;
					char erro[MAX_PATH]={0};
					char asmstr[MAX_PATH]={0};
					//MessageBoxA(NULL,"Loadlibaryaddr-success","TS",NULL);
					sprintf(Asmcalladdr,"call %x",Loadlibaryaddr);
					int l=0,len=0;

					l=tsasm.Assemble("pushad",NULL,&am,0,0,erro);
					memcpy(&CallCode[len],am.code,l);
					len+=l;

					sprintf(asmstr,"push 0x%x",(DWORD)dlladdr);
					l=tsasm.Assemble(asmstr,((DWORD)Alloaddr+len),&am,0,0,erro);
					//TSRuntime::add_log("VirtualAllocEx:l:%d,CallCode;%x,am.length:%d,len:%d",l,&CallCode[0],am.length,len);
					memcpy(&CallCode[len],am.code,l);
					len+=l;

					l=tsasm.Assemble(Asmcalladdr,((DWORD)Alloaddr+len),&am,0,0,erro);
					memcpy(&CallCode[len],am.code,l);
					len+=l;

					l=tsasm.Assemble("popad",NULL,&am,0,0,erro);
					memcpy(&CallCode[len],am.code,l);
					len+=l;

					l=tsasm.Assemble("push EBP",NULL,&am,0,0,erro);
					memcpy(&CallCode[len],am.code,l);
					len+=l;

					l=tsasm.Assemble("Mov EBP,ESP",NULL,&am,0,0,erro);
					memcpy(&CallCode[len],am.code,l);
					len+=l;

					l=tsasm.Assemble("push ESI",NULL,&am,0,0,erro);
					memcpy(&CallCode[len],am.code,l);
					len+=l;

					l=tsasm.Assemble("push EDI",NULL,&am,0,0,erro);
					memcpy(&CallCode[len],am.code,l);
					len+=l;

					memset(Asmcalladdr,0,MAX_PATH);
					sprintf(Asmcalladdr,"jmp %x",InternalCallWinProc_AddrRet);
					l=tsasm.Assemble(Asmcalladdr,((DWORD)Alloaddr+len),&am,0,0,erro);
					memcpy(&CallCode[len],am.code,l);
					len+=l;

					l=tsasm.Assemble("ret",NULL,&am,0,0,erro);
					memcpy(&CallCode[len],am.code,l);
					len+=l;
					My_ZwWriteVirtualMemory(hprocess,Alloaddr,CallCode,len,&dwwrite);
					CallCodelen=dwwrite;
				}

			}
			//::VirtualFreeEx(hprocess,dlladdr,0,MEM_RELEASE);
		}
	}
	if(CallCodelen>0)
	{
		//MessageBoxA(NULL,"CallCodelen>0","TS",NULL);
		//׼���¹���ע��
		DWORD dwback;
		DWORD length=5;
		BYTE jmp[5]={0};
		jmp[0]=0xe9;
		dwwrite=0;
		*(DWORD*)(jmp+1)=(DWORD)Alloaddr-InternalCallWinProc_Addr-5;
		wchar_t temp[MAX_PATH]={0};
		MEMORY_BASIC_INFORMATION   mbi;
		VirtualQueryEx(hprocess,pInternalCallProcAddr,&mbi,sizeof(MEMORY_BASIC_INFORMATION));
		if(mbi.Protect!=PAGE_EXECUTE_READWRITE)
			My_ZwProtectVirtualMemory(hprocess,&pInternalCallProcAddr, &length, PAGE_EXECUTE_READWRITE, &dwback);

		//bool iswrite=::WriteProcessMemory(hprocess,Addr,jmp,5,&dwwrite);
		//if(!iswrite||dwwrite==0)
		//TSRuntime::add_log("Addr:%x,InternalCallWinProc_Addr:%x",pInternalCallProcAddr,InternalCallWinProc_Addr);
		My_ZwWriteVirtualMemory(hprocess,(void*)InternalCallWinProc_Addr,jmp,5,&dwwrite);
		if(dwwrite>0)
		{
			wchar_t pszEventName[MAX_PATH]={0};
			::wsprintf(pszEventName,L"%s%d",TS_BIND201_NAME,nPid);
			//char eer[50]={0};
			//sprintf(eer,"InternalCallWinProc_Addr:%x,dwwrite:%d",InternalCallWinProc_Addr,dwwrite);
			//MessageBoxA(NULL,"My_ZwWriteVirtualMemory-unsuccess",eer,NULL);
			HANDLE hEvent=NULL;
			for(int i=0;i<3000;i++)
			{
				hEvent=::OpenEvent(EVENT_ALL_ACCESS,FALSE,pszEventName);
				if(hEvent)
				{
					//MessageBoxA(NULL,"My_ZwWriteVirtualMemory-success","TS",NULL);
					success=true;
					break;
				}
				Sleep(1);
			}
			//My_ZwWriteVirtualMemory(hprocess,(void*)InternalCallWinProc_Addr,ori,5,&dwwrite);
			SetEvent(hEvent);
			//My_ZwProtectVirtualMemory(hprocess,&pInternalCallProcAddr, (DWORD*)5, dwback, &dwback);
		}
	}
	CloseHandle(hprocess);

	return success;
}


DXBind::DXBind(void)
{
	nPid=0;
	KeyDownsleep=50;//���̵���Ĭ����ʱ
	MouseClicksleep=40;//��굥��Ĭ����ʱ
	WindowsKeyMouseClicksleep=10;// Windowsģʽ����\��굥����ʱ
	NormalClicksleep=30;//ǰ̨���Ĭ����ʱ
	NormalKeysleep=30;
	m_parenthwnd=0;
	m_isBind=false;
	m_eventMsg=NULL;
	BindMode=-1;
	mSetHook=NULL;
	pData=NULL;
	m_hwnd=0;
	IsNpProtect=false;
	CallCodelen=0;
	Alloaddr=NULL;
	memset(ColorDataInfo,0,sizeof(ColorDataInfo));
	memset(CallCode,0,0x50);
	memset(m_Retstr,0,MAX_PATH*100);
	memset(m_SetPath,0,MAX_PATH);
	memset(Colors,0,MAX_PATH);
	memset(m_colorOffR,0,MAX_PATH);
	memset(m_colorOffG,0,MAX_PATH);
	memset(m_colorOffB,0,MAX_PATH);
	memset(MyDictCount,0,20*sizeof(pMyDictInfo));  //�洢��ǰ�����ֿ�,Ĭ������ֿ����Ϊ20��
	memset(nMaxStrHight,0,20);	//��¼ÿ���ֿ���,��ߵ��ָ�.
	memset(nMyDictCountsize,0,20*sizeof(DWORD));   //��¼ÿ���ֿ������
	NowUsingDictIndex=-1;//��¼��ǰ����ʹ���ֿ���±�
	isdxpic=false;
	char code[MAX_PATH]={0};
	std::string pszMachineCode ;
	USES_CONVERSION;
	wcscpy(TSRuntime::MachineCode,A2W(pszMachineCode.c_str()));
	Isgraphicprotect=false;
	if(Zw_UnmapViewOfSection==NULL)
		Zw_UnmapViewOfSection=(ZwUnmapViewOfSection)::GetProcAddress(::GetModuleHandle(L"ntdll.dll"),"ZwUnmapViewOfSection");
	pWndBmpBuffer=NULL;
	pWndBmpStrxy=NULL;
	pBuffer=NULL;
	IsTSEnableRealMouse=false;
	IsTSEnableRealKeypad=false;
	mousedelay=0;
	mousestep=0;
	LastMouseMoveX=0;
	LastMouseMoveY=0;
	GDI_dwExStyle=0;
	m_keyMode|= KEY_NORMAL;//Ĭ�ϸ�ֵΪǰ̨ģʽ�������ڰ�ǰ��������
	m_mouseMode|= MOUSE_NORMAL;//Ĭ�ϸ�ֵΪǰ̨ģʽ�������ڰ�ǰ��������
}

DXBind::~DXBind(void)
{

}

bool DXBind::UnBind()
{
	//::EnableWindow(m_mousekeyhwnd,true);
	//DWORD nPid=0;
	////GetWindowThreadProcessId(m_hwnd,&nPid); //��ȡע�봰�ڵĽ���ID
	if(pWndBmpStrxy||pWndBmpBuffer)
	{
		for(int i=0;i<2000;i++)
		{
			delete [] pWndBmpStrxy[i];
			delete [] pWndBmpBuffer[i];
			pWndBmpBuffer[i] = NULL;
			pWndBmpStrxy[i]=NULL;
		}
		delete []  pWndBmpStrxy;
		delete [] pWndBmpBuffer;
		pWndBmpStrxy=NULL;
		pWndBmpBuffer=NULL;
	}
	if(pBuffer)
	{
		delete [] pBuffer;
		pBuffer=NULL;
	}
	m_hwnd=0;
	m_parenthwnd=0;
	m_isBind=false;
	IsTSEnableRealMouse=false;
	IsTSEnableRealKeypad=false;
	if(nPid)
	{
		char pszBinWindow_SetWindowHook[MAX_PATH]={0};
		sprintf( pszBinWindow_SetWindowHook,"%s%d",TS_BINDWINDOW_SETWINDOWHOOK,nPid);
		HANDLE hbindprop=GetPropA(m_hwnd,pszBinWindow_SetWindowHook);

		char pszBinWindow_IME[MAX_PATH]={0};
		sprintf( pszBinWindow_IME,"%s%d",TS_BINDWINDOW_IME,nPid);
		HANDLE hbindIMEprop=GetPropA(m_hwnd,pszBinWindow_IME);

		char pszBinWindow_IME101[MAX_PATH]={0};
		sprintf( pszBinWindow_IME101,"%s%d",TS_BINDWINDOW_IME101,nPid);
		HANDLE hbindIMEprop101=GetPropA(m_hwnd,pszBinWindow_IME101);

		char pszBinWindow_GDIWINDOW[MAX_PATH]={0};
		sprintf( pszBinWindow_GDIWINDOW,"%s%d",TS_BINDWINDOW_GDIWINDOW,nPid);
		HANDLE hbindGdiWindow=GetPropA(m_hwnd,pszBinWindow_GDIWINDOW);
		if(hbindGdiWindow==NULL)
			hbindGdiWindow=GetPropA(m_parenthwnd,pszBinWindow_GDIWINDOW);

		if(hbindprop)
		{
			RemovePropA(m_hwnd,pszBinWindow_SetWindowHook);  //ɾ���󶨴��ڱ�ʶ
		}
		else if(hbindIMEprop)
			RemovePropA(m_hwnd,pszBinWindow_IME);  //ɾ���󶨴��ڱ�ʶ
		else if(hbindIMEprop101)
			RemovePropA(m_hwnd,pszBinWindow_IME101);  //ɾ���󶨴��ڱ�ʶ
		else if(hbindGdiWindow)
			RemovePropA(m_hwnd,pszBinWindow_GDIWINDOW);  //ɾ���󶨴��ڱ�ʶ
		else if(hbindGdiWindow==NULL)
		{
			//::GetWindowThreadProcessId(m_parenthwnd,&nPid); //��ȡע�봰�ڵĽ���ID
			char pszBinWindow_GDIWINDOW[MAX_PATH]={0};
			sprintf( pszBinWindow_GDIWINDOW,"%s%d",TS_BINDWINDOW_GDIWINDOW,nPid);
			RemovePropA(m_parenthwnd,pszBinWindow_GDIWINDOW);  //ɾ���󶨴��ڱ�ʶ
		}

	}
	else
		return false;


	//GDI�ͷ�
	//if(TSRuntime::m_displayMode&DISPLAY_GDI)
	if((m_displayMode&DISPLAY_GDI) == DISPLAY_GDI||(m_displayMode&DISPLAY_DX2) == DISPLAY_DX2)
	{
		////ж��GDI
		//::SetWindowLong(m_hwnd, GWL_EXSTYLE, TSRuntime::m_dwExStyle);
		//DWORD dwExStyle=::GetWindowLong((HWND)m_hwnd,GWL_EXSTYLE);
		//if(dwExStyle>=0x80100)
		//	dwExStyle=dwExStyle-0x80100;
		//::SetWindowLong(m_hwnd, GWL_EXSTYLE, dwExStyle);
		if(GDI_dwExStyle==0)
			GDI_dwExStyle=0x100;
		::SetWindowLong(m_hwnd, GWL_EXSTYLE, GDI_dwExStyle);
		if(m_parenthwnd!=NULL)
		{
			::SetWindowLong(m_parenthwnd, GWL_EXSTYLE, GDI_dwExStyle);
			//dwExStyle=::GetWindowLong((HWND)m_parenthwnd,GWL_EXSTYLE);
			//if(dwExStyle>=0x80100)
			//	dwExStyle=dwExStyle-0x80100;
			//::SetWindowLong(m_parenthwnd, GWL_EXSTYLE, dwExStyle);
		}
		//::UpdateWindow(m_hwnd);
		::RedrawWindow(m_hwnd,NULL,NULL,RDW_INVALIDATE|RDW_ERASE|RDW_ALLCHILDREN|RDW_FRAME);
		////ж��GDI
	}

	if(BindMode==BIND_WINHOOK)	 //
	{
		//::MessageBox(0,L"SetHook���",L"TS",0);
		// ����SetHook����   ,ж�ع���
		HINSTANCE hlibrary=NULL;
		hlibrary = LoadLibrary(gDLLFolder);
		if(hlibrary)
		{
		//	mSetHook=(MySetWindowHook)GetProcAddress(hlibrary,"CBFunB");
			if(mSetHook)
			{
				//::MessageBox(0,L"SetHook���",L"TS",0);
				// ����SetHook����
				DWORD dwProcessId=0;
				DWORD dwThreadId=GetWindowThreadProcessId(m_hwnd,&dwProcessId);
				bool isunhook=false;
				if(dwThreadId!=0)
				{
					isunhook=mSetHook(FALSE, dwThreadId);
				}
			}
			FreeLibrary(hlibrary);
		}
	}
	if(BindMode==BIND_201)
	{
		wchar_t *name=wcsrchr(gDLLFolder,'\\');
		if(name)
		{
			name++;
			wchar_t dllname[MAX_PATH]={0};
			wcscpy(dllname,name);
			HMODULE RemodeDLLMode=TSRuntime::GetRemoteModuleBase(dllname,nPid);
			if(RemodeDLLMode!=NULL)
			{
				TSRuntime::EnablePrivilege(L"SeDebugPrivilege",true);
				HANDLE hprocess=NULL;
				hprocess=MyOpenProcess(nPid);
				Zw_UnmapViewOfSection(hprocess,RemodeDLLMode);
				CloseHandle(hprocess);
			}
		}

	}
	m_hwnd=0;
	if(pData)
	{
		pData->ispichook=false;
		pData->reset();
	}
	return true;
}

bool DXBind::bind(HWND wnd,DWORD keyMod,DWORD mouseMod,DWORD disMod,BIND_MODE bindMode)
{
	bool bret=false;
	//�жϴ����Ƿ���Ч
	if(my_IsWindow)
	{
		if(wnd==0||::my_IsWindow(wnd)==false)
		{
			MessageBox(NULL,L"��Ч���ھ��",L"TS",NULL);
			return false;
		}
	}
	else
	{
		if(wnd==0||::IsWindow(wnd)==false)
		{	 
			MessageBox(NULL,L"��Ч���ھ��",L"TS",NULL);
			return false;
		}
	}
	//��¼���󶨵Ĵ��ڵľ��
	m_hwnd=wnd;

	//�õ������ڴ������
	char pszMapName[MAX_PATH]={0};
	if(my_GetWindowThreadProcessId)
		my_GetWindowThreadProcessId(wnd,&nPid); //��ȡע�봰�ڵĽ���ID
	else
		::GetWindowThreadProcessId(wnd,&nPid); //��ȡע�봰�ڵĽ���ID
	if(nPid==0)
	{
		if(MyGetWindowThreadProcessIdRet==0)
		{
			DWORD addr=(DWORD)GetProcAddress(GetModuleHandle(L"user32.dll"),"GetWindowThreadProcessId");
			MyGetWindowThreadProcessIdRet=addr+5;
		}
		MyGetWindowThreadProcessId(wnd,&nPid);
		if(nPid==0)
		{
			MessageBox(NULL,L"��Ч���ھ��",L"TS",NULL);
			return false;
		}
	}
	//MessageBox(NULL,L"MyGetWindowThreadProcessId!",L"TS",NULL);
	SendMsg(TS_UNBIND);
	sprintf( pszMapName,"%s%d",TS_MAPVIEW_NAME,nPid);

	char pszBinWindow_SetWindowHook[MAX_PATH]={0};
	sprintf( pszBinWindow_SetWindowHook,"%s%d",TS_BINDWINDOW_SETWINDOWHOOK,nPid);
	HANDLE hbindprop=GetPropA(m_hwnd,pszBinWindow_SetWindowHook);

	char pszBinWindow_IME[MAX_PATH]={0};
	sprintf( pszBinWindow_IME,"%s%d",TS_BINDWINDOW_IME,nPid);
	HANDLE hbindIMEprop=GetPropA(m_hwnd,pszBinWindow_IME);

	char pszBinWindow_IME101[MAX_PATH]={0};
	sprintf( pszBinWindow_IME101,"%s%d",TS_BINDWINDOW_IME101,nPid);
	HANDLE hbindIMEprop101=GetPropA(m_hwnd,pszBinWindow_IME101);

	if(hbindprop&&m_isBind)
		return false;

	if(hbindIMEprop101||hbindIMEprop)   //����󶨱�ʶ������˵���Ѿ������Ѿ���
	{
		//MessageBox(NULL,L"ж��DLL!",L"TS",NULL);
		SendMessage(wnd,TS_UNBIND,0,0);
		Sleep(100);
		if(hbindIMEprop)
			RemovePropA(wnd,pszBinWindow_IME);
		else if(hbindIMEprop101)
			RemovePropA(wnd,pszBinWindow_IME101);
	}

	//MessageBox(NULL,L"����ָ�����ȵĹ����ڴ�ռ�!-start",L"TS",NULL);
	//����ָ�����ȵĹ����ڴ�ռ�
	CShareMemory *sm =new CShareMemory(pszMapName, sizeof(CMessageData),TRUE);
	//ȡ��ָ�����ڴ��ָ��
	pData = (CMessageData*)sm->GetBuffer();

	if(pData!=NULL)
	{
		
		//MessageBox(NULL,L"reset!-start",L"TS",NULL);
		pData->reset();
		//MessageBox(NULL,L"reset!-end",L"TS",NULL);
		//TSRuntime::add_log( "TS_GETSCREENDATA:%x",pData->ColorDataInfo);
	}
	else
		return false;

	pData->InjectHwnd=TSRuntime::GetProcessMainWnd(GetCurrentProcessId());	//�����ھ��
	pData->isBind=true;
	pData->m_hwnd=wnd;

	if(m_mouseMode&MOUSE_API)
		pData->ismousehook=true;
	if(m_keyMode&KEY_API)
		pData->iskeyboardhook=true;
	if(m_displayMode&DISPLAY_DX_3D)
		pData->ispichook=true;
	if(TSRuntime::IsNpProtect)
	{
		pData->IsNpProtect=true;
		IsNpProtect=true;
	}
	if(m_displayMode&DISPLAY_DX_3D)//�����DXͼɫ��
		pData->isgraphicprotect=Isgraphicprotect;

	if(wcslen(TSRuntime::SetPicPwdString)>0)
		wcscpy(pData->SetPicPwdString,TSRuntime::SetPicPwdString);

	pData->Isdxkmprotect=Isdxkmprotect;
	pData->Isdxantiapi=Isdxantiapi;

	TSRuntime::hookHwnd=wnd;
	winver=TSRuntime::InitialWindowsVersion();
	if(TSRuntime::IsStartProtect)
	{
		//BYTE winver=TSRuntime::InitialWindowsVersion();
		//if(winver!=4)//����Win7
		{
			//MessageBox(NULL,L"HookandUnhookAPI-start",L"HookandUnhookAPI",NULL);
			TSRuntime::IsVirtualProtectEx=true;	//������˶�!ʹ������ģʽԶ���޸���Ϸҳ��������
			HookandUnhookAPI(0);//������˶�!ʹ������ģʽԶ���޸���Ϸҳ��������	
		}
	}

	//SetWindowHookע��
	if(bindMode==BIND_WINHOOK)
	{
		if(!SetWindowHookExInject(wnd))
		{
			//MessageBoxA(NULL,"SetWindowHookע��ʧ��","TS",NULL);
			return false;
		}
		SetPropA(wnd,pszBinWindow_SetWindowHook,(HANDLE)1);   //���ð󶨱�ʶ��
	}
	//���뷨ע��
	else if(bindMode==BIND_IME||bindMode==BIND_IME101)
	{

		if(bindMode==BIND_IME)
		{
			pData->InjectType=BIND_IME;
			SetPropA(wnd,pszBinWindow_IME,(HANDLE)1);   //���ð󶨱�ʶ��
		}

		else if(bindMode==BIND_IME101)
		{
			pData->InjectType=BIND_IME101;
			SetPropA(wnd,pszBinWindow_IME101,(HANDLE)1);   //���ð󶨱�ʶ��
		}

		//MessageBox(NULL,L"���뷨ע��!-start",L"TS",NULL);
		char pszEventName[MAX_PATH]={0};
		::sprintf(pszEventName,"%s%d",TS_EVENT_IMEHOOK,nPid);
		HANDLE hEvent=OpenEventA(EVENT_ALL_ACCESS,FALSE,pszEventName);
		if(hEvent==NULL)
		{
			if(!IMEInject(wnd))
			{
				if(hbindIMEprop)
					RemovePropA(m_hwnd,pszBinWindow_IME);  //ɾ���󶨴��ڱ�ʶ
				else if(hbindIMEprop101)
					RemovePropA(m_hwnd,pszBinWindow_IME101);  //ɾ���󶨴��ڱ�ʶ
				return false;
			}
		}
		//else
		//   TSRuntime::add_log( "SetEvent");
	}
	else if(bindMode==BIND_201||bindMode==BIND_203)
	{
		pData->InjectType=bindMode;
		bool bret=Inject201();
		if(!bret)
			return false;
	}
	else
	{
		return   false;//δ֪ע��ģʽ
	}

	//MessageBox(NULL,L"���뷨ע��!-end",L"TS",NULL);
	for(int i=0;i<300;i++)
	{
		if(pData->isInject)	 ////�ȴ��Ѿ��󶨴��ڱ�ʶ		TS_BINDWINDOW_NAME
			break;
		::Sleep(20);
	}

	//�����ж�DLL�Ƿ��Ѿ�ע��,����ɹ���������İ󶨲���
	if(!pData->isInject)
	{
		//MessageBox(NULL,L"��ʧ��!",L"TS",NULL);
		return false;
	}

	if(wcslen(m_SetPath)>1)
	{
		memset(pData->setpath,0,MAX_PATH);
		wcscpy(pData->setpath,m_SetPath);
		SendMsg(TS_SETPATH);
	}
	if(NowUsingDictIndex!=-1)
	{
		//����Ѿ�ע��ɹ�,���追��һ���ֿ���Ϣ�������ڴ�
		pData->NowUsingDictIndex=NowUsingDictIndex;
		pData->MyDictCount[NowUsingDictIndex]=MyDictCount[NowUsingDictIndex];
		pData->nMyDictCountsize[NowUsingDictIndex]=nMyDictCountsize[NowUsingDictIndex];
		pData->nMaxStrHight[NowUsingDictIndex]=nMaxStrHight[NowUsingDictIndex];
		//return SendMsg(TS_SETDICT,(WPARAM)GetCurrentProcessId());	//������Ϣ֪ͨ�л��ֿ�
	}
	//TSRuntime::add_log( "pData->isgraphicprotect:%d,Isgraphicprotect;%d",pData->isgraphicprotect,Isgraphicprotect);
	//Sleep(50);
	SendMsg(TS_BIND,(WPARAM)wnd,(LPARAM)IsNpProtect);

	m_isBind=true;

	return true;

}

bool DXBind::SetWindowHookExInject(HWND wnd)
{
	bool bInstall=true;
	BOOL bRet=false;

	HINSTANCE hlibrary=NULL;
	hlibrary = LoadLibrary(gDLLFolder);
	if(hlibrary)
	{
		mSetHook=(MySetWindowHook)GetProcAddress(hlibrary,"CBFunB");
		if(mSetHook)
		{
			// ����SetHook����
			DWORD dwProcessId=0;
			DWORD dwThreadId=GetWindowThreadProcessId(wnd,&dwProcessId);
			if(dwThreadId!=0)
				bRet = mSetHook(bInstall, dwThreadId);
			SendMessage(wnd,WM_PAINT,0,0);	//WH_CALLWNDPROC��Ϣ��Ҫ,��SendMessage��Ϣ��ſ��԰󶨳ɹ�,����ģ��SendMessage����һ����Ϣ
		}
		FreeLibrary(hlibrary);
	}
	return bRet;
}

VOID GetInstallIMEValue(wchar_t *keyvaule)
{
	TCHAR ValueInfo[MAX_PATH]={0}; 
	TCHAR achValue[MAX_PATH]={0};
	DWORD ValueSize=MAX_PATH; 
	DWORD cType; 
	HKEY hKey;
	//��ע�����
	if(RegOpenKey(HKEY_CURRENT_USER, L"Keyboard Layout\\Preload", &hKey) == ERROR_SUCCESS)
	{
		for (int i=1; i<100; i++)   //�û���װ�����뷨���������Ϊ100 
		{ 
			swprintf(achValue,L"%d",i);
			if(RegQueryValueEx(hKey,achValue,NULL,&cType,(LPBYTE)ValueInfo,&ValueSize)==ERROR_SUCCESS)
			{  
				wcscpy(keyvaule,ValueInfo);
			}
			else
				break;

		} 
	}
}

bool DXBind::IMEInject(HWND wnd)
{
	//ע��DLL,����DLLע�������߳�
	{
		wchar_t tempPath[MAX_PATH]={0};
		wchar_t tempIME[MAX_PATH]={0};
		wchar_t IMEpath[MAX_PATH]={0};
		GetTempPath(MAX_PATH,tempPath);
		::GetSystemDirectory(tempPath,MAX_PATH);
		wchar_t IMEWOW64Path[MAX_PATH]={0};
		wchar_t sys32Path[MAX_PATH]={0};
		if(TSRuntime::IsWin8X64)//WIN8X64�°�װ·���б�,���밲װ��SysWOW64Ŀ¼��
		{
			wcscpy(IMEWOW64Path,tempPath);
			wcscpy(sys32Path,tempPath);
			wchar_t *syspath=wcsrchr(IMEWOW64Path,'\\');
			int syslen=wcslen(syspath);
			memset(syspath,0,syslen);
			swprintf(IMEWOW64Path,L"%s\\SysWOW64\\TSimedll.ime",IMEWOW64Path);
			//MessageBox(NULL,tempPath,syspath,NULL);
		}
		::wsprintf(tempIME,L"%s\\TSimedllcode.ime",tempPath);//MessageBoxA(NULL,"TS_BINDWINDOW_NAME","IME",NULL);   
		::wsprintf(IMEpath,L"%s\\TSimedll.ime",tempPath);//MessageBoxA(NULL,"TS_BINDWINDOW_NAME","IME",NULL);
		HINSTANCE globalModuleHandle=::GetModuleHandle(gDLLFolder);
		HRSRC hRsc=FindResource(globalModuleHandle,MAKEINTRESOURCE(IDR_IME1),L"IME");
		HGLOBAL hglobal=LoadResource(globalModuleHandle,hRsc);
		VOID* lock=LockResource(hglobal);
		DWORD size=SizeofResource(globalModuleHandle,hRsc);
		char* pmen=(char*)malloc(size);
		WriteProcessMemory(GetCurrentProcess(),(void*)pmen,lock,size,NULL);
		HANDLE Filepath;
		Filepath=CreateFile(tempIME,GENERIC_WRITE,NULL,NULL,CREATE_ALWAYS,FILE_ATTRIBUTE_NORMAL,NULL);
		DWORD nwrite;
		//TSRuntime::add_log("Filepath:%d,tempIME:%s,GetLastError:%d",Filepath,tempIME,::GetLastError());	
		WriteFile(Filepath,(void*)pmen,size,&nwrite,NULL);
		CloseHandle(Filepath);

		int rbl =1;
		if(rbl)//���ܳɹ�
		{
			if(TSRuntime::IsWin8X64)
				::CopyFile(IMEpath,IMEWOW64Path,false);
			//MessageBox(NULL,IMEpath,L"TS",NULL);
			DeleteFile(tempIME);

			////////ע��ǰ��̬�޸����뷨DLL�ĵ����
			//USES_CONVERSION;
			//wchar_t sysdll[MAX_PATH]={0};
			//::wsprintf(sysdll,L"%s\\TSPlug.dll",tempPath);
			//CopyFile(gDLLFolder,sysdll,FALSE);
			//HookIMEdllIAT(W2A(IMEpath),W2A(sysdll));
			////////ע��ǰ��̬�޸����뷨DLL�ĵ����
			//���뷨ע��

			SystemParametersInfo(SPI_GETDEFAULTINPUTLANG, 0, &SysIME, 0);  //�õ�ϵͳĬ�����뷨����
			MSetUpIME = ImmInstallIME(IMEpath , L"��ʹ���뷨");                            //TSRuntime::add_log("ImmInstallIME������Ϣ:%d",::GetLastError());
			//if(TSRuntime::IsWin8X64==false)
			bool setdef=SystemParametersInfo(SPI_SETDEFAULTINPUTLANG, 0, &MSetUpIME, SPIF_SENDWININICHANGE);   //��ָ�����뷨����ΪϵͳĬ�����뷨��Ӧ�ó���һ�򿪾ͼ���
			if(MSetUpIME>0)
			{
				//DLLע��
				int ret=::SendMessage(wnd,WM_INPUTLANGCHANGEREQUEST,(WPARAM )TRUE,(LPARAM )MSetUpIME); //��̨�������뷨,ע��Dll
				//if(!ret)
				//	MessageBox(NULL,L"IMEʧ��",L"TS",NULL);
				//::PostMessage(wnd,WM_INPUTLANGCHANGEREQUEST,(WPARAM )TRUE,(LPARAM )MSetUpIME);
				////��������
				DWORD IMEkey=(DWORD)MSetUpIME;//��¼��ǰ���뷨�ļ�ֵ,���������ע�����ɾ��
				TCHAR keyvaule[10]={0};
				swprintf(keyvaule,L"%x",IMEkey);//��ʽ��Ϊ�ַ���,��Ϊֵ����������ֵ�����Χ
				//ж�����뷨
				SystemParametersInfo(SPI_SETDEFAULTINPUTLANG, 0, &SysIME, 0);	//��ԭϵͳĬ�����뷨����
				UnloadKeyboardLayout(MSetUpIME);
				//ע�����ɾ�����뷨
				TCHAR achValue[MAX_PATH]={0};    
				TCHAR ValueInfo[MAX_PATH]={0};  
				DWORD ValueSize=MAX_PATH;  
				DWORD cType; 
				HKEY hKey;
				//��ע�����
				if(RegOpenKey(HKEY_CURRENT_USER, L"Keyboard Layout\\Preload", &hKey) == ERROR_SUCCESS)
				{
					for (int i=1; i<100; i++)   //�û���װ�����뷨���������Ϊ100 
					{ 
						swprintf(achValue,L"%d",i);
						if(RegQueryValueEx(hKey,achValue,NULL,&cType,(LPBYTE)ValueInfo,&ValueSize)==ERROR_SUCCESS)
						{  
							if(wcsicmp(keyvaule,ValueInfo)==0)//���ƥ�䵽�����ǰ�װ�����뷨,ɾ����
							{
								RegDeleteValue(hKey, achValue); 
								break;
							}
						}
						else
							break;
					} 
				}
			}
			else
			{
				//wchar_t err[MAX_PATH]={0};
				//swprintf(err,L"���뷨��װʧ��:GetLastError:%d",GetLastError());
				//::MessageBox(0,err,L"TS",0);
				return false;
			}
			DeleteFile(IMEpath);
		}
	}
	return true;
}

bool DXBind::DownCpu(DWORD sleeptime)
{
	bool bret=false;
	if(!pData->ispichook)
		return 0;//���PIC����HOOKʧ��,ֱ�ӷ���ʧ��
	if(sleeptime>100)
		sleeptime=100;
	else if(sleeptime<0)
		sleeptime=0;

	bret=SendMsg(TS_DOWNCPU,sleeptime);
	return bret;
}

bool DXBind::CmpColor(LONG x,LONG y,BSTR sColor,DOUBLE sim)
{
	bool bret=1;	//��ɫƥ�䷵��0,��ɫ��ƥ��1

	if(wcslen(sColor)>MAX_PATH)//����Ҫ�Ƚϵ���ɫֵ�ַ���̫������ʧ��
		return 1;

	DWORD nret= GetColor(x,y,TSRuntime::RetStr);

	if(nret==0)	//���ȡɫʧ��,����ʧ��
		return 1;

	//������ɫƫ
	int col=0,ncolors;
	wchar_t colorBuffer[MAX_PATH][16];//�洢����ַ���
	for(int i=0;i<MAX_PATH;i++)
	{
		memset(colorBuffer[i],0,16);
	}

	short nstr=0;//Ҫ����ɫƫ�ĸ���  ,���֧��(MAX_PATH)��ɫƫ
	while(*sColor)
	{
		if(*sColor!=L'|')
		{
			if(col>13)
				return 1;
			colorBuffer[nstr][col++]=*sColor;
			sColor++;
			continue;
		}
		else
		{
			if(col<1)
			{
				sColor++;
				continue;
			}
			nstr++;
			col=0;
			sColor++;
		}
	}
	if(col>=1)
		nstr++;

	ncolors=nstr;//��¼��ɫƫ����

	//int t=::GetTickCount();
	for(int i=0;i<nstr;i++)
	{
		WCHAR colorR[4]={0};//�ֵ���ɫ
		WCHAR colorG[4]={0};//�ֵ���ɫ
		WCHAR colorB[4]={0};//�ֵ���ɫ

		WCHAR coloroffR[4]={0};//ƫɫ
		WCHAR coloroffG[4]={0};//ƫɫ
		WCHAR coloroffB[4]={0};//ƫɫ
		int count=0;
		int colorL=0;

		while(colorBuffer[i][colorL]!=L'-')
		{
			if(count>6)	//�ж��Ƿ��ǷǷ���ɫֵ
				break;
			if(count<2)
				colorR[count]=colorBuffer[i][colorL++];
			else if(count>1&&count<4)
				colorG[count-2]=colorBuffer[i][colorL++];
			else if(count>3)
				colorB[count-4]=colorBuffer[i][colorL++];
			count++;

		}
		//�������RGBת��ΪBGR
		WCHAR colorBGR[16]={0};//�ֵ���ɫ
		swprintf(colorBGR,L"%s%s%s",colorR,colorG,colorB);
		count=0;
		colorL++;

		while(colorBuffer[colorL]!=L'\0')
		{
			if(count>=6) //�ж��Ƿ��ǷǷ�ɫƫֵ
				break;
			if(count<2)
				coloroffR[count]=colorBuffer[i][colorL++];
			else if(count>1&&count<4)
				coloroffG[count-2]=colorBuffer[i][colorL++];
			else if(count>3)
				coloroffB[count-4]=colorBuffer[i][colorL++];
			count++;
		}

		//�������RGBת��ΪBGR
		WCHAR coloroffBGR[16]={0};//ƫɫ
		swprintf(coloroffBGR,L"%s%s%s",coloroffB,coloroffG,coloroffR);

		Colors[i]=wcstol(colorBGR,NULL,16);//������ɫֵ
		DWORD strColoroff=wcstol(coloroffBGR,NULL,16);//����ƫɫֵ
		m_colorOffR[i] = GetRValue(strColoroff);
		m_colorOffG[i] = GetGValue(strColoroff);
		m_colorOffB[i] = GetBValue(strColoroff);
	}
	//������ɫƫ

	BYTE simColor = 0;
	if(sim==0.5)
		simColor=49;
	else if(sim==0.6)
		simColor=38;
	else if(sim==0.7)
		simColor=29;
	else if(sim==0.8)
		simColor=18;
	else if(sim==0.9)
		simColor=9;
	else if(sim==0.4)
		simColor=58;
	else if(sim==0.3)
		simColor=67;
	else if(sim==0.2)
		simColor=76;
	else if(sim==0.1)
		simColor=85;
	/////////////////////////////////////
	DWORD loadColor=wcstol(TSRuntime::RetStr,NULL,16);//������ɫֵ
	BYTE loadR = GetRValue(loadColor);
	BYTE loadG = GetGValue(loadColor);
	BYTE loadB = GetBValue(loadColor);

	for(int i=0;i<ncolors;i++)
	{
		BYTE cmpR = GetRValue(Colors[i]);
		BYTE cmpG = GetGValue(Colors[i]);
		BYTE cmpB = GetBValue(Colors[i]);

		if(abs(loadR-cmpR)<=(m_colorOffR[i]+simColor) && abs(loadG-cmpG)<=( m_colorOffG[i]+simColor) && abs(loadB-cmpB)<=(m_colorOffB[i]+simColor))
		{
			return 0;//ƥ��ɹ�����0
		}
	}


	return bret;
}

int DXBind::GetColor(LONG x, LONG y,BSTR sColor)
{
	int ret=0;

	RECT clientrc;
	::GetClientRect(m_hwnd,&clientrc);
	if(x>=clientrc.right||y>=clientrc.bottom)
	{
		return 0;
	}

	MyFindPictureClass  fpic;
	fpic.m_displayMode=m_displayMode;
	fpic.m_parenthwnd=m_parenthwnd;
	fpic.pWndBmpBuffer=pWndBmpBuffer;
	fpic.pBuffer=pBuffer;
	fpic.m_hwnd=m_hwnd;
	int color=0;
	// if(TSRuntime::m_displayMode&DISPLAY_GDI)
	if((m_displayMode&DISPLAY_GDI)==DISPLAY_GDI||(m_displayMode&DISPLAY_NORMAL)==DISPLAY_NORMAL||(m_displayMode&DISPLAY_DX2)==DISPLAY_DX2||(m_displayMode&DISPLAY_GDI2)==DISPLAY_GDI2)
	{
		long x1,y1;
		ret=fpic.processColor(0,m_hwnd,
			color,
			x,
			y,
			0,
			0,
			0,
			0,
			x1,y1,NULL);
		int r=0,g=0,b=0;
		r=GetRValue(color);
		g=GetGValue(color);
		b=GetBValue(color);
		memset(TSRuntime::RetStr,0,MAX_PATH);
		if(r>=0x10&&g>=0x10&&b>=0x10)
			swprintf(TSRuntime::RetStr,L"%x%x%x",r,g,b);//�������BGR��ɫֵת��ΪRGB�������
		else if(r<0x10&&g<0x10&&b<0x10)
			swprintf(TSRuntime::RetStr,L"0%x0%x0%x",r,g,b);//�������BGR��ɫֵת��ΪRGB�������
		else if(r<0x10&&g<0x10)
			swprintf(TSRuntime::RetStr,L"0%x0%x%x",r,g,b);//�������BGR��ɫֵת��ΪRGB�������
		else if(r<0x10&&b<0x10)
			swprintf(TSRuntime::RetStr,L"0%x%x0%x",r,g,b);//�������BGR��ɫֵת��ΪRGB�������
		else if(g<0x10&&b<0x10)
			swprintf(TSRuntime::RetStr,L"%x0%x0%x",r,g,b);//�������BGR��ɫֵת��ΪRGB�������
		else if(r<0x10)
			swprintf(TSRuntime::RetStr,L"0%x%x%x",r,g,b);//�������BGR��ɫֵת��ΪRGB�������
		else if(g<0x10)
			swprintf(TSRuntime::RetStr,L"%x0%x%x",r,g,b);//�������BGR��ɫֵת��ΪRGB�������
		else if(b<0x10)
			swprintf(TSRuntime::RetStr,L"%x%x0%x",r,g,b);//�������BGR��ɫֵת��ΪRGB�������

	}
	else if(m_displayMode&DISPLAY_DX_3D)
	{
		if(!pData->ispichook)
			return 0;//���PIC����HOOKʧ��,ֱ�ӷ���ʧ��
		fpic.m_parenthwnd=0;
		ST_TSFINDPIC getdata;
		getdata.left=x;
		getdata.top=y;
		getdata.right=0;
		getdata.bottom=0;
		getdata.ret=-1;
		pData->type=TS_GETSCREENDATA;
		::memcpy(pData->pmsg,&getdata,sizeof(ST_TSFINDPIC));
		wchar_t pszEventName[MAX_PATH]={0};

		::wsprintf(pszEventName,L"%s%d",TS_EVENT_NAME,nPid);
		HANDLE picEvent=::OpenEvent(EVENT_ALL_ACCESS,FALSE,pszEventName);
		if(picEvent)
		{
			::WaitForSingleObject(picEvent,10000);
			::CloseHandle(picEvent);
		}
		else
		{
			picEvent=::CreateEvent(NULL,TRUE,FALSE,pszEventName);
			::WaitForSingleObject(picEvent,3000);
			::CloseHandle(picEvent);
		}
		DWORD (*Data)[2000] = (DWORD(*)[2000])pData->ColorDataInfo;

		long x1,y1;
		ret=fpic.processColor(0,m_hwnd,
			color,
			x,
			y,
			0,
			0,
			0,
			0,
			x1,y1,Data,NULL,NULL);
		memset(TSRuntime::RetStr,0,MAX_PATH);
		int r=0,g=0,b=0;
		r=GetRValue(color);
		g=GetGValue(color);
		b=GetBValue(color);

		if(r>=0x10&&g>=0x10&&b>=0x10)
			swprintf(TSRuntime::RetStr,L"%x%x%x",r,g,b);//�������BGR��ɫֵת��ΪRGB�������
		else if(r<0x10&&g<0x10&&b<0x10)
			swprintf(TSRuntime::RetStr,L"0%x0%x0%x",r,g,b);//�������BGR��ɫֵת��ΪRGB�������
		else if(r<0x10&&g<0x10)
			swprintf(TSRuntime::RetStr,L"0%x0%x%x",r,g,b);//�������BGR��ɫֵת��ΪRGB�������
		else if(r<0x10&&b<0x10)
			swprintf(TSRuntime::RetStr,L"0%x%x0%x",r,g,b);//�������BGR��ɫֵת��ΪRGB�������
		else if(g<0x10&&b<0x10)
			swprintf(TSRuntime::RetStr,L"%x0%x0%x",r,g,b);//�������BGR��ɫֵת��ΪRGB�������
		else if(r<0x10)
			swprintf(TSRuntime::RetStr,L"0%x%x%x",r,g,b);//�������BGR��ɫֵת��ΪRGB�������
		else if(g<0x10)
			swprintf(TSRuntime::RetStr,L"%x0%x%x",r,g,b);//�������BGR��ɫֵת��ΪRGB�������
		else if(b<0x10)
			swprintf(TSRuntime::RetStr,L"%x%x0%x",r,g,b);//�������BGR��ɫֵת��ΪRGB�������
	}
	return ret;
}

int DXBind::Ocr(LONG x1, LONG y1, LONG x2, LONG y2, wchar_t *color, DOUBLE sim,int type)
{
	int ret=0;

	if(wcslen(color)>MAX_PATH)
		return ret;
	wchar_t coloroffer[MAX_PATH]={0};
	swprintf(coloroffer,L"%s",color);

	RECT clientrc;
	::GetClientRect(m_hwnd,&clientrc);
	if(x1>=clientrc.right||y1>=clientrc.bottom)
	{
		return 0;
	}

	MyFindPictureClass  fpic;
	fpic.m_displayMode=m_displayMode;
	fpic.m_parenthwnd=m_parenthwnd;
	fpic.pWndBmpBuffer=pWndBmpBuffer;
	fpic.pWndBmpStrxy=pWndBmpStrxy;
	fpic.pBuffer=pBuffer;
	//if(TSRuntime::m_displayMode&DISPLAY_GDI)
	if((m_displayMode&DISPLAY_GDI)==DISPLAY_GDI||(m_displayMode&DISPLAY_NORMAL)==DISPLAY_NORMAL||(m_displayMode&DISPLAY_DX2)==DISPLAY_DX2||(m_displayMode&DISPLAY_GDI2)==DISPLAY_GDI2)
	{
		TSRuntime::NowUsingDictIndex=NowUsingDictIndex;
		TSRuntime::nMyDictCountsize[TSRuntime::NowUsingDictIndex]=nMyDictCountsize[NowUsingDictIndex];
		TSRuntime::nMaxStrHight[TSRuntime::NowUsingDictIndex]=nMaxStrHight[NowUsingDictIndex];
		TSRuntime::MyDictCount[TSRuntime::NowUsingDictIndex]=MyDictCount[NowUsingDictIndex];
		if(pData)
		{
			memset(pData->RetString,0,MAX_PATH*100);
			ret=fpic.ocr(0,m_hwnd,
				x1,
				y1,
				x2,
				y2,
				coloroffer,
				sim,
				pData->RetString,MyDictCount,nMyDictCountsize,NowUsingDictIndex,NULL,type);
		}
		else
		{
			memset(m_Retstr,0,MAX_PATH*100);
			ret=fpic.ocr(0,m_hwnd,
				x1,
				y1,
				x2,
				y2,
				coloroffer,
				sim,
				m_Retstr,MyDictCount,nMyDictCountsize,NowUsingDictIndex,NULL,type);
		}


	}
	else if(m_displayMode&DISPLAY_DX_3D)
	{
		if(!pData->ispichook)
			return 0;//���PIC����HOOKʧ��,ֱ�ӷ���ʧ��

		fpic.m_hwnd=m_hwnd;
		fpic.m_parenthwnd=0;
		ST_TSFINDPIC getdata;
		getdata.left=x1;
		getdata.top=y1;
		getdata.right=x2;
		getdata.bottom=y2;
		getdata.ret=-1;
		pData->type=TS_GETSCREENDATA;
		::memcpy(pData->pmsg,&getdata,sizeof(ST_TSFINDPIC));
		wchar_t pszEventName[MAX_PATH]={0};

		::wsprintf(pszEventName,L"%s%d",TS_EVENT_NAME,nPid);
		HANDLE picEvent=::OpenEvent(EVENT_ALL_ACCESS,FALSE,pszEventName);
		if(picEvent)
		{
			::WaitForSingleObject(picEvent,10000);
			::CloseHandle(picEvent);
		}
		else
		{
			picEvent=::CreateEvent(NULL,TRUE,FALSE,pszEventName);
			::WaitForSingleObject(picEvent,3000);
			::CloseHandle(picEvent);
		}
		DWORD (*Data)[2000] = (DWORD(*)[2000])pData->ColorDataInfo;

		memset(pData->RetString,0,MAX_PATH*100);
		ret=fpic.ocr(0,m_hwnd,
			x1,
			y1,
			x2,
			y2,
			coloroffer,
			sim,
			pData->RetString,MyDictCount,nMyDictCountsize,NowUsingDictIndex,Data,type);
		//ST_TSFINDPIC pic;
		//pic.left=x1;
		//pic.top=y1;
		//pic.right=x2;
		//pic.bottom=y2;
		//wcscpy(pic.color_format,coloroffer);
		//pic.simi=sim;
		//if(type==0)
		//	pData->type=TS_OCR;
		//else if(type==1)
		//	pData->type=TS_OCREX;

		//::memcpy(pData->pmsg,&pic,sizeof(ST_TSFINDPIC));
		//wchar_t pszEventName[MAX_PATH]={0}; 

		////DWORD nPid=0;
		////GetWindowThreadProcessId(m_hwnd,&nPid); //��ȡע�봰�ڵĽ���ID
		//::wsprintf(pszEventName,L"%s%d",TS_EVENT_NAME,nPid);
		//HANDLE picEvent=::CreateEvent(NULL,TRUE,FALSE,pszEventName);
		//::WaitForSingleObject(picEvent,INFINITE);
		//::CloseHandle(picEvent);
	}
	return ret;
}

int DXBind::findColor(LONG x1, LONG y1, LONG x2, LONG y2, int color, DOUBLE sim, LONG dir, LONG &intX, LONG &intY,wchar_t *colorstr,wchar_t *retstring,wchar_t *MultiColor)
{
	int ret=0;

	if(wcslen(colorstr)>=MAX_PATH-1)
		return ret;

	RECT clientrc;
	::GetClientRect(m_hwnd,&clientrc);
	if(x1>=clientrc.right||y1>=clientrc.bottom)
	{
		intX=-1;
		intY=-1;
		return -1;
	}

	MyFindPictureClass  fpic;
	fpic.m_displayMode=m_displayMode;
	fpic.m_parenthwnd=m_parenthwnd;
	fpic.pWndBmpBuffer=pWndBmpBuffer;
	fpic.pBuffer=pBuffer;
	//if(TSRuntime::m_displayMode&DISPLAY_GDI)
	if((m_displayMode&DISPLAY_GDI)==DISPLAY_GDI||(m_displayMode&DISPLAY_NORMAL)==DISPLAY_NORMAL||(m_displayMode&DISPLAY_DX2)==DISPLAY_DX2||(m_displayMode&DISPLAY_GDI2)==DISPLAY_GDI2)
	{
		ret=fpic.processColor(0,m_hwnd,
			color,
			x1,
			y1,
			x2,
			y2,
			sim,
			dir,
			intX,intY,NULL,colorstr,retstring,MultiColor);
	}
	else if(m_displayMode&DISPLAY_DX_3D)
	{
		if(!pData->ispichook)
			return 0;//���PIC����HOOKʧ��,ֱ�ӷ���ʧ��

		fpic.m_hwnd=m_hwnd;
		fpic.m_parenthwnd=0;
		ST_TSFINDPIC getdata;
		getdata.left=x1;
		getdata.top=y1;
		getdata.right=x2;
		getdata.bottom=y2;
		getdata.ret=-1;
		pData->type=TS_GETSCREENDATA;
		::memcpy(pData->pmsg,&getdata,sizeof(ST_TSFINDPIC));
		wchar_t pszEventName[MAX_PATH]={0};

		::wsprintf(pszEventName,L"%s%d",TS_EVENT_NAME,nPid);
		HANDLE picEvent=::OpenEvent(EVENT_ALL_ACCESS,FALSE,pszEventName);
		if(picEvent)
		{
			::WaitForSingleObject(picEvent,10000);
			::CloseHandle(picEvent);
		}
		else
		{
			picEvent=::CreateEvent(NULL,TRUE,FALSE,pszEventName);
			::WaitForSingleObject(picEvent,3000);
			::CloseHandle(picEvent);
		}
		DWORD (*Data)[2000] = (DWORD(*)[2000])pData->ColorDataInfo;


		ret=fpic.processColor(0,m_hwnd,
			color,
			x1,
			y1,
			x2,
			y2,
			sim,
			dir,
			intX,intY,Data,colorstr,retstring,MultiColor);
		//ST_TSFINDPIC pic;
		//pic.left=x1;
		//pic.top=y1;
		//pic.right=x2;
		//pic.bottom=y2;
		//pic.colorOffset=color;
		//wcscpy(pic.color_format,colorstr);
		//pic.simi=sim;
		//pic.dir=dir;
		//pic.x=-1;
		//pic.y=-1;
		//pic.ret=-1;
		//if(retstring==NULL)
		//	pData->type=TS_FINDCOLOR;
		//else
		//	pData->type=TS_FINDCOLOREX;

		//::memcpy(pData->pmsg,&pic,sizeof(ST_TSFINDPIC));
		//wchar_t pszEventName[MAX_PATH]={0}; 

		////DWORD nPid=0;
		////GetWindowThreadProcessId(m_hwnd,&nPid); //��ȡע�봰�ڵĽ���ID
		//::wsprintf(pszEventName,L"%s%d",TS_EVENT_NAME,nPid);
		//HANDLE picEvent=::CreateEvent(NULL,TRUE,FALSE,pszEventName);
		//::WaitForSingleObject(picEvent,3000);
		//::CloseHandle(picEvent);
		//ST_TSFINDPIC *pPic=(ST_TSFINDPIC *)pData->pmsg;
		//intX=pPic->x;
		//intY=pPic->y;
		//ret=pPic->ret;
		//if(retstring!=NULL)
		//	wcscpy(retstring,pData->RetString);
	}
	return ret;
}

bool DXBind::TSUseDict(int index)
{
	MyFindPictureClass fpic;
	BOOL isuse=fpic.MyUseDict(index,MyDictCount,NowUsingDictIndex);
	//�ж��Ƿ��Ѿ�ע��,���追��һ���ֿ���Ϣ�������ڴ�
	if(pData&&isuse)
	{
		pData->MyDictCount[TSRuntime::NowUsingDictIndex]=MyDictCount[NowUsingDictIndex];
		pData->nMyDictCountsize[TSRuntime::NowUsingDictIndex]=nMyDictCountsize[NowUsingDictIndex];
		pData->nMaxStrHight[TSRuntime::NowUsingDictIndex]=nMaxStrHight[NowUsingDictIndex];
		pData->NowUsingDictIndex=NowUsingDictIndex;
		return SendMessage(m_hwnd,TS_USEDICT,(WPARAM)GetCurrentProcessId(),0);	//������Ϣ֪ͨ�л��ֿ�
	}
	return isuse;

}

bool DXBind::TSSetDict(int index,wchar_t *filepath)
{
	MyFindPictureClass fpic;
	wchar_t path[MAX_PATH]={0};
	wchar_t *findpath=wcsstr(filepath,L":");
	if(wcslen(m_SetPath)>1&&findpath==NULL)
	{
		swprintf(path,L"%s\\%s",m_SetPath,filepath);
	}
	else
	{
		swprintf(path,L"%s",filepath);
	}
	BOOL isuse=fpic.MySetDict(index,path,MyDictCount,nMyDictCountsize,NowUsingDictIndex);
	//�ж��Ƿ��Ѿ�ע��,���追��һ���ֿ���Ϣ�������ڴ�
	if(pData!=NULL&&isuse)
	{
		if(m_displayMode&DISPLAY_DX_3D)
		{

			pData->MyDictCount[NowUsingDictIndex]=MyDictCount[NowUsingDictIndex];
			pData->nMyDictCountsize[NowUsingDictIndex]=nMyDictCountsize[NowUsingDictIndex];
			pData->nMaxStrHight[NowUsingDictIndex]=TSRuntime::nMaxStrHight[NowUsingDictIndex];
			pData->NowUsingDictIndex=NowUsingDictIndex;

			return SendMessage(m_hwnd,TS_SETDICT,(WPARAM)GetCurrentProcessId(),0);	//������Ϣ֪ͨ�л��ֿ�
		}

	}

	return isuse;

}

bool DXBind::TSSetpath(wchar_t *path)
{

	memset(m_SetPath,0,MAX_PATH);
	wcscpy(m_SetPath,path);
	if(pData)
	{
		memset(pData->setpath,0,MAX_PATH);
		wcscpy(pData->setpath,path);
		return SendMessage(m_hwnd,TS_SETPATH,0,0);
	}
}

bool DXBind::TSGetScreenData(LONG x1, LONG y1, LONG x2, LONG y2)
{
	bool nret=FALSE;

	RECT clientrc;
	::GetClientRect(m_hwnd,&clientrc);
	if(x1>=clientrc.right||y1>=clientrc.bottom)
		return 0;

	memset(ColorDataInfo,0,sizeof(ColorDataInfo));
	if((m_displayMode&DISPLAY_GDI)==DISPLAY_GDI||(m_displayMode&DISPLAY_NORMAL)==DISPLAY_NORMAL||(m_displayMode&DISPLAY_DX2)==DISPLAY_DX2||(m_displayMode&DISPLAY_GDI2)==DISPLAY_GDI2)
	{
		int m_Left=0,m_Top=0,m_Right=0,m_bottom=0;
		int left=x1, right=x2, top=y1, bottom=y2;
		int scrennwide;
		int scrennheight;
		HDC hDC;	
		if(m_displayMode&DISPLAY_NORMAL)
		{
			hDC=CreateDC(L"DISPLAY", NULL, NULL, NULL);
			//////ȷ��ѡ�������ǿɼ���
			if(m_parenthwnd!=::GetDesktopWindow()&&m_parenthwnd!=0)
			{
				//::MessageBoxA(NULL,"GetDesktopWindow","GetDesktopWindow",NULL);
				RECT rec;
				::GetWindowRect(m_parenthwnd,&rec);
				int xc =::GetSystemMetrics(SM_CYCAPTION);
				int cx =::GetSystemMetrics(SM_CXFRAME);
				int cy =::GetSystemMetrics(SM_CYFRAME);
				m_Left=rec.left+cx;
				m_Top=rec.top+xc+cy;
				m_Right=rec.right;
				m_bottom=rec.bottom;
				scrennwide=::GetSystemMetrics(SM_CXSCREEN);
				scrennheight=::GetSystemMetrics(SM_CYSCREEN);

				if(m_Left<0)
				{
					if((left+m_Left)<=0)
						left=0;//Խ��
					else
						left=m_Left+left;
				}
				else
					left=m_Left+left;

				if(m_Top>=0)
					top=m_Top+top;

				if(m_Right >= scrennwide)
				{
					if((right+m_Left)>scrennwide)
						right=scrennwide-1;
					else
						right=right+m_Left;
				}
				else
					right=right+m_Left;

				if(m_bottom >= scrennheight)
				{
					if((bottom+m_Top)>=scrennheight)
						bottom=scrennheight-1;
					else
						bottom=bottom+m_Top;
				}
				else
					bottom=bottom+m_Top;

				x1=left;
				y1=top;
				x2=right;
				y2=bottom;

			}
		}
		else//GDI�߽�ֵ�ж�
		{
			hDC=GetDCEx(m_hwnd,NULL,DCX_PARENTCLIP );
			RECT clientrc;
			::GetClientRect(m_hwnd,&clientrc);
			scrennwide=clientrc.right-clientrc.left;
			scrennheight=clientrc.bottom-clientrc.top;
			m_Left = left;
			m_Top = top;
			m_Right = right;
			m_bottom = bottom;

			if(left<0)
				m_Left = left =0;
			if(left >= scrennwide)
				m_Left = scrennwide-1;

			if(top<0)
				m_Top = top =0;
			if(top >= scrennheight)
				m_Top = scrennheight-1;

			if(right >= scrennwide)
				m_Right=scrennwide-1;

			if(bottom >= scrennheight)
				m_bottom=scrennheight-1;

			x1=left;
			y1=top;
			x2=right;
			y2=bottom;
		}

		HDC hMemDC;					//�ڴ滺���豸����
		HBITMAP hbmMem,hbmOld;		//�ڴ滺���豸�����е�λͼ

		// 24λͼ��BITMAPINFO
		BITMAPINFO *pBITMAPINFO = (BITMAPINFO*)malloc(sizeof(BITMAPINFOHEADER));
		memset(pBITMAPINFO, 0, sizeof(BITMAPINFOHEADER));
		BITMAPINFOHEADER *pInfo_Header = (BITMAPINFOHEADER *)pBITMAPINFO;
		pInfo_Header->biSize = sizeof(BITMAPINFOHEADER);   
		pInfo_Header->biWidth = x2 - x1;   
		pInfo_Header->biHeight = y2 - y1;   
		pInfo_Header->biPlanes = 1;   
		pInfo_Header->biBitCount = 24;   
		pInfo_Header->biCompression = BI_RGB;

		int xc =0;
		int cx =0;
		int cy =0;
		hMemDC=CreateCompatibleDC(hDC);	//�����ڴ�����豸����
		//�����ڴ����λͼ
		hbmMem=CreateCompatibleBitmap(hDC,pInfo_Header->biWidth,pInfo_Header->biHeight);
		hbmOld=(HBITMAP)SelectObject(hMemDC,hbmMem);
		if((m_displayMode&DISPLAY_GDI2)==DISPLAY_GDI2)
		{
			RECT winret;
			::GetWindowRect(m_hwnd,&winret);
			POINT point;
			point.x=0;
			point.y=0;
			::ClientToScreen(m_hwnd,&point);
			cx=point.x-winret.left;
			cy=point.y-winret.top;
			HDC T_hMemDC=CreateCompatibleDC(hDC);	//�����ڴ�����豸����
			//�����ڴ����λͼ
			HBITMAP T_hbmMem=CreateCompatibleBitmap(hDC,pInfo_Header->biWidth+cx+x1,pInfo_Header->biHeight+cy+y1);
			HBITMAP T_hbmOld=(HBITMAP)SelectObject(T_hMemDC,T_hbmMem);
			::UpdateWindow(m_hwnd);
			::RedrawWindow(m_hwnd,NULL,NULL,RDW_INVALIDATE|RDW_ERASE|RDW_ALLCHILDREN|RDW_FRAME);
			::PrintWindow(m_hwnd,T_hMemDC,0);
			BitBlt(hMemDC,0,0,pInfo_Header->biWidth,pInfo_Header->biHeight,T_hMemDC,xc+x1,cy+y1,CAPTUREBLT|SRCCOPY);
			DeleteDC(T_hMemDC);
			DeleteObject(T_hbmMem);
			DeleteObject(T_hbmOld);
		}
		else
		{
			//���ڴ��豸�����е����ݻ��Ƶ������豸����   hDC
			BitBlt(hMemDC,0,0,pInfo_Header->biWidth,pInfo_Header->biHeight,hDC,xc+x1,cy+y1,CAPTUREBLT|SRCCOPY);
		}

		HBITMAP hBitmap=(HBITMAP)SelectObject(hMemDC,hbmOld);

		// �������buf
		DWORD bufSize=(pInfo_Header->biWidth * 3 + 3) / 4 * 4 * pInfo_Header->biHeight;
		BYTE * pBuffer = new BYTE[bufSize];

		int aHeight=pInfo_Header->biHeight;

		if(::GetDIBits(hMemDC, hBitmap, 0, aHeight, pBuffer,pBITMAPINFO, DIB_RGB_COLORS) == 0)
		{
			if(TSRuntime::IsShowErrorMsg)
				::MessageBox(NULL,L"����λͼʧ��",L"TS",0);
			return false;
		}

		int wndWidth=pBITMAPINFO->bmiHeader.biWidth;
		int wndHeight=pBITMAPINFO->bmiHeader.biHeight;
		//TSRuntime::add_log( "wndHeight:%d wndWidth%d",wndHeight,wndWidth);

		//HDC dd = ::GetWindowDC(::GetDesktopWindow());
		COLORREF helpcolor=0;
		int pitch=wndWidth%4;
		for(int i=0;i<wndHeight;i++)
		{
			int realPitch=i*pitch;
			for(int j=0;j<wndWidth;j++)
			{
				UCHAR b=pBuffer[(i*wndWidth+j)*3+realPitch];
				UCHAR g=pBuffer[(i*wndWidth+j)*3+1+realPitch];
				UCHAR r=pBuffer[(i*wndWidth+j)*3+2+realPitch];
				helpcolor=RGB(r,g,b);

				ColorDataInfo[wndHeight-i-1][j]=helpcolor;
				//pColorBuffer[wndHeight-i-1][j]=helpcolor;
				//::SetPixel(dd,wndHeight-i-1,j,helpcolor);
			}
		}
		if(m_hwnd==GetDesktopWindow())
			DeleteDC(hDC);
		else
			ReleaseDC(m_hwnd,hDC);

		//�ͷ���Դ
		DeleteObject(hbmMem);
		DeleteObject(hbmOld);
		DeleteDC(hMemDC);
		free(pBITMAPINFO);
		::DeleteObject(hBitmap);
		delete [] pBuffer;
	}
	else if(m_displayMode&DISPLAY_DX_3D)
	{
		if(!pData->ispichook)
			return 0;//���PIC����HOOKʧ��,ֱ�ӷ���ʧ��

		ST_TSFINDPIC getdata;
		getdata.left=x1;
		getdata.top=y1;
		getdata.right=x2;
		getdata.bottom=y2;
		getdata.ret=-1;
		pData->type=TS_GETSCREENDATA;
		::memcpy(pData->pmsg,&getdata,sizeof(ST_TSFINDPIC));
		wchar_t pszEventName[MAX_PATH]={0};

		::wsprintf(pszEventName,L"%s%d",TS_EVENT_NAME,nPid);
		HANDLE picEvent=::OpenEvent(EVENT_ALL_ACCESS,FALSE,pszEventName);
		if(picEvent)
		{
			::WaitForSingleObject(picEvent,10000);
			::CloseHandle(picEvent);
		}
		else
		{
			picEvent=::CreateEvent(NULL,TRUE,FALSE,pszEventName);
			::WaitForSingleObject(picEvent,3000);
			::CloseHandle(picEvent);
		}

		ST_TSFINDPIC *pcaptrue=(ST_TSFINDPIC *)pData->pmsg;
		nret=pcaptrue->ret;

		memcpy(ColorDataInfo,pData->ColorDataInfo,sizeof(ColorDataInfo));
		return nret;
	}

}

int DXBind::Capture(LONG x1, LONG y1, LONG x2, LONG y2, wchar_t* pic_path,int pictype)
{
	//TSRuntime::add_log( "��ͼ");
	int nret=0;
	//if(TSRuntime::m_displayMode&DISPLAY_GDI)
	RECT clientrc;
	::GetClientRect(m_hwnd,&clientrc);
	if(x1>=clientrc.right||y1>=clientrc.bottom)
		return 0;//�Ѿ�Խ��
	::GetClientRect(m_hwnd,&clientrc);
	if((m_displayMode&DISPLAY_GDI)==DISPLAY_GDI||(m_displayMode&DISPLAY_NORMAL)==DISPLAY_NORMAL||(m_displayMode&DISPLAY_DX2)==DISPLAY_DX2||(m_displayMode&DISPLAY_GDI2)==DISPLAY_GDI2)
	{

		//TSRuntime::add_log( "gdiģʽ��ͼ");

		wchar_t savepath[MAX_PATH]={0};
		wchar_t *findpath=wcsstr(pic_path,L":");
		if(wcslen(m_SetPath)>1&&findpath==NULL)
		{
			swprintf(savepath,L"%s\\%s",m_SetPath,pic_path);
		}
		else
		{
			swprintf(savepath,L"%s",pic_path);
		}
		MyFindPictureClass pic;
		pic.m_displayMode=m_displayMode;
		pic.m_parenthwnd=m_parenthwnd;
		//TSRuntime::add_log( "pic.m_parenthwnd:%d",pic.m_parenthwnd);
		RECT rc;
		rc.left=x1;
		rc.top=y1;
		rc.right=x2;
		rc.bottom=y2;
		int scrennwide;
		int scrennheight;
		scrennwide=::GetSystemMetrics(SM_CXSCREEN);
		scrennheight=::GetSystemMetrics(SM_CYSCREEN);
		bool bret=false;
		if(pictype==D3DXIFF_JPG||pictype==D3DXIFF_PNG)
		{
			wchar_t temppath[MAX_PATH]={0};
			wchar_t path[MAX_PATH]={0};
			GetTempPath(MAX_PATH,temppath);
			//DWORD nPid=0;
			//GetWindowThreadProcessId(m_hwnd,&nPid); //��ȡע�봰�ڵĽ���ID
			swprintf(path,L"%s\\TEMPBMP%d.BMP",temppath,nPid);
			if(m_displayMode&DISPLAY_NORMAL)
			{
				if(m_parenthwnd!=::GetDesktopWindow()&&m_parenthwnd!=0)
				{
					int m_Left=0,m_Top=0,m_Right=0,m_bottom=0;
					int left=x1, right=x2, top=y1, bottom=y2;
					RECT rec;
					::GetWindowRect(m_parenthwnd,&rec);
					int xc = 0;
					int cx = 0;
					int cy = 0;
					if(m_hwnd!=GetDesktopWindow())
					{
						xc =::GetSystemMetrics(SM_CYCAPTION);
						cx =::GetSystemMetrics(SM_CXFRAME);
						cy =::GetSystemMetrics(SM_CYFRAME);
					}
					m_Left=rec.left+cx;
					m_Top=rec.top+xc+cy;
					m_Right=rec.right;
					m_bottom=rec.bottom;

					if(m_Left<0)
					{
						if((left+m_Left)<=0)
							left=0;//Խ��
						else
							left=m_Left+left;
					}
					else
						left=m_Left+left;

					if(m_Top>=0)
						top=m_Top+top;

					if(m_Right >= scrennwide)
					{
						if((right+m_Left)>scrennwide)
							right=scrennwide-1;
						else
							right=right+m_Left;
					}
					else
						right=right+m_Left;

					if(m_bottom >= scrennheight)
					{
						if((bottom+m_Top)>=scrennheight)
							bottom=scrennheight-1;
						else
							bottom=bottom+m_Top;
					}
					else
						bottom=bottom+m_Top;

					rc.left=left;
					rc.top=top;
					rc.right=right;
					rc.bottom=bottom;
				}
				else
				{
					////ȷ��ѡ�������ǿɼ���
					if(rc.left<0)
						rc.left=0;
					if(rc.top<0)
						rc.top=0;
					if(rc.right>scrennwide)
						rc.right=scrennwide;
					if(rc.bottom>scrennheight)
						rc.bottom=scrennheight;
				}

				bret =pic.CopyScreenToBitmap(&rc,path); 

				if(pictype==D3DXIFF_JPG&&bret)
					bret=pic.BMP2JPG(path,savepath);
				else if(pictype==D3DXIFF_PNG&&bret)
					bret=pic.BMP2PNG(path,savepath);
				DeleteFile(path);

			}
			else if(pic.SaveGDIBitmap(m_hwnd,rc,path))
			{
				////ȷ��ѡ�������ǿɼ���
				if(rc.left<0)
					rc.left=0;
				if(rc.top<0)
					rc.top=0;
				if(rc.right>clientrc.right)
					rc.right=clientrc.right;
				if(rc.bottom>clientrc.bottom)
					rc.bottom=clientrc.bottom;

				if(pictype==D3DXIFF_JPG)
					bret=pic.BMP2JPG(path,savepath);
				else if(pictype==D3DXIFF_PNG)
					bret=pic.BMP2PNG(path,savepath);
				DeleteFile(path);
			}
		}
		else if(pictype==D3DXIFF_BMP)
			{
				if(m_displayMode&DISPLAY_NORMAL)
					{
						//::GetWindowRect(m_parenthwnd,&rc);
						//int xc =::GetSystemMetrics(SM_CYCAPTION);
						//int cx =::GetSystemMetrics(SM_CXFRAME);
						//int cy =::GetSystemMetrics(SM_CYFRAME);
						//rc.top=rc.top+xc+cy;
						if(m_parenthwnd!=::GetDesktopWindow()&&m_parenthwnd!=0)
						{
							int m_Left=0,m_Top=0,m_Right=0,m_bottom=0;
							int left=x1, right=x2, top=y1, bottom=y2;
							RECT rec;
							::GetWindowRect(m_parenthwnd,&rec);
							int xc = 0;
							int cx = 0;
							int cy = 0;
							if(m_hwnd!=GetDesktopWindow())
							{
								xc =::GetSystemMetrics(SM_CYCAPTION);
								cx =::GetSystemMetrics(SM_CXFRAME);
								cy =::GetSystemMetrics(SM_CYFRAME);
							}
							m_Left=rec.left+cx;
							m_Top=rec.top+xc+cy;
							m_Right=rec.right;
							m_bottom=rec.bottom;

							if(m_Left<0)
							{
								if((left+m_Left)<=0)
									left=0;//Խ��
								else
									left=m_Left+left;
							}
							else
								left=m_Left+left;

							if(m_Top>=0)
								top=m_Top+top;

							if(m_Right >= scrennwide)
							{
								if((right+m_Left)>scrennwide)
									right=scrennwide-1;
								else
									right=right+m_Left;
							}
							else
								right=right+m_Left;

							if(m_bottom >= scrennheight)
							{
								if((bottom+m_Top)>=scrennheight)
									bottom=scrennheight-1;
								else
									bottom=bottom+m_Top;
							}
							else
								bottom=bottom+m_Top;

							rc.left=left;
							rc.top=top;
							rc.right=right;
							rc.bottom=bottom;
						}
						else
						{
							////ȷ��ѡ�������ǿɼ���
							if(rc.left<0)
								rc.left=0;
							if(rc.top<0)
								rc.top=0;
							if(rc.right>scrennwide)
								rc.right=scrennwide;
							if(rc.bottom>scrennheight)
								rc.bottom=scrennheight;
						}

				bret =pic.CopyScreenToBitmap(&rc,savepath); 

			}
			else
				bret=pic.SaveGDIBitmap(m_hwnd,rc,savepath);
		}

		if(bret)
			nret=1;
		else
			nret=0;
		//USES_CONVERSION;
		//TSRuntime::add_log( "findPicture,pic_path:%s,X:%d,Y:%d",W2A(pic_name),intX,intY);
		return nret;
	}
	//else if(TSRuntime::m_displayMode&DISPLAY_DX_3D)
	else if(m_displayMode&DISPLAY_DX_3D)
	{
		//TSRuntime::add_log( "dxģʽ��ͼ");

		if(!pData->ispichook)
			return 0;//���PIC����HOOKʧ��,ֱ�ӷ���ʧ��

		ST_TSFINDPIC captrue;
		captrue.left=x1;
		captrue.top=y1;
		captrue.right=x2;
		captrue.bottom=y2;
		wcscpy(captrue.path,pic_path);
		captrue.pictype=pictype;
		captrue.ret=-1;
		pData->type=TS_CAPTURE;
		::memcpy(pData->pmsg,&captrue,sizeof(ST_TSFINDPIC));
		wchar_t pszEventName[MAX_PATH]={0};

		//DWORD nPid=0;
		//GetWindowThreadProcessId(m_hwnd,&nPid); //��ȡע�봰�ڵĽ���ID
		::wsprintf(pszEventName,L"%s%d",TS_EVENT_NAME,nPid);
		HANDLE picEvent=::OpenEvent(EVENT_ALL_ACCESS,FALSE,pszEventName);
		if(picEvent)
		{
			::WaitForSingleObject(picEvent,10000);
			::CloseHandle(picEvent);
		}
		else
		{
			picEvent=::CreateEvent(NULL,TRUE,FALSE,pszEventName);
			::WaitForSingleObject(picEvent,3000);
			::CloseHandle(picEvent);
		}
		ST_TSFINDPIC *pcaptrue=(ST_TSFINDPIC *)pData->pmsg;
		nret=pcaptrue->ret;
		return nret;
	}
}
//����GIFͼƬ
int DXBind::CaptureGif(LONG x1, LONG y1, LONG x2, LONG y2, wchar_t* pic_path,int delay,int time)
{
	//�Ƚ�ͼ,Ȼ��ϳ�GIFͼƬ
	wchar_t temppath[MAX_PATH]={0};
	//���洢260*2��ͼƬ
	wchar_t path[MAX_PATH*4][MAX_PATH]={0};
	GetTempPath(MAX_PATH,temppath);
	//DWORD pid=0;
	//GetWindowThreadProcessId(m_hwnd,&pid);
	DWORD time1=GetTickCount();
	int n=0;
	//�Ƚ�ͼ,�洢��ʱͼƬ����ʱ·����
	while(1)
	{
		swprintf(path[n],L"%s\\%d%d.bmp",temppath,GetTickCount(),nPid);
		Capture(x1,y1,x2,y2,path[n],D3DXIFF_BMP);
		n++;
		DWORD time2=GetTickCount();
		if((time2-time1)>time||n==(MAX_PATH*4-1))
			break;
		Sleep(delay);
	}
	//Ȼ��ϳ�GIFͼƬ
	wchar_t savepath[MAX_PATH]={0};
	wchar_t *findpath=wcsstr(pic_path,L":");
	if(wcslen(m_SetPath)>1&&findpath==NULL)
	{
		swprintf(savepath,L"%s\\%s",m_SetPath,pic_path);
	}
	else
	{
		swprintf(savepath,L"%s",pic_path);
	}

	BYTE *palette = NULL;
	BYTE *pData = NULL;
	int nWidth,nHeight;
	BYTE bitsPixel = 8;

	//if(PathFileExists(savepath))
	//	{
	//		if(!DeleteFile(savepath))  //ɾ���ļ�ʧ���ļ���ռ��
	//			return 0;
	//	}

	HANDLE hfile=::CreateFile(savepath,GENERIC_ALL,0,NULL,CREATE_NEW,FILE_ATTRIBUTE_NORMAL,NULL);//���ļ�//�����ڴ���

	//дGIFͷ
	CreateGIFHeard(hfile,nWidth,nHeight,bitsPixel);

	int m=0; //�����ϳ�ͼƬ�ĸ���

	if(delay<=0)
		m=1;
	else if(time/delay<n)
		m=time/delay;
	else if(time/delay>=n)
		m=n;

	for(int i=0;i<m;i++)
	{
		HBITMAP hBmp2 = (HBITMAP)LoadImage(NULL,path[i],IMAGE_BITMAP,0,0,LR_LOADFROMFILE|LR_CREATEDIBSECTION);

		if(hBmp2 == NULL)
		{
			CloseGIF(hfile);
			CloseHandle(hfile);
			break;
			//return 0;
		}

		if(GetData(hBmp2,&palette,&pData,&bitsPixel,&nWidth,&nHeight) == FALSE)
		{
			DeleteObject(hBmp2);
			CloseGIF(hfile);
			CloseHandle(hfile);
			break;
			//return 0;
		}
		DeleteObject(hBmp2);

		short	nTransparentColorIndex = -1;

		//��������ͼƬ
		AddImageToGIF(hfile,pData,palette,nWidth,nHeight,bitsPixel,delay,nTransparentColorIndex);
		delete []pData;
		delete []palette;
	}


	//����GIF
	CloseGIF(hfile);
	CloseHandle(hfile);
	//Ȼ��ϳ�GIFͼƬ

	//�����ʱͼƬ����ʱ·����ͼƬ
	for(int i=0;i<n;i++)
		DeleteFile(path[i]);

	return 1;
}

//Findstrtype=0��ʱ��Findstr=Findstr;Findstrtype=1��ʱ��Findstr=FindStrFast;
int DXBind::Findstr(LONG x1, LONG y1, LONG x2, LONG y2, wchar_t* findstring, wchar_t *color, DOUBLE sim, LONG &intX, LONG &intY,BYTE Findstrtype,wchar_t *retstring,int type)
{
	//TSRuntime::add_log( "Findstr");
	intX=-1;
	intY=-1; 

	if(wcslen(color)>MAX_PATH)
		return -1;

	RECT clientrc;
	::GetClientRect(m_hwnd,&clientrc);
	if(x1>=clientrc.right||y1>=clientrc.bottom)
	{
		intX=-1;
		intY=-1;
		return -1;
	}

	int findstringlen=wcslen(findstring);
	if(findstringlen<1||findstringlen>MAX_PATH*4)
	{
		return   -1;
	}

	wchar_t coloroffer[MAX_PATH]={0};
	swprintf(coloroffer,L"%s",color);
	wchar_t fstring[MAX_PATH*4]={0};
	wcscpy(fstring,findstring);

	MyFindPictureClass  fpic;
	fpic.m_displayMode=m_displayMode;
	fpic.m_parenthwnd=m_parenthwnd;
	fpic.pWndBmpBuffer=pWndBmpBuffer;
	fpic.pWndBmpStrxy=pWndBmpStrxy;
	fpic.pBuffer=pBuffer;
	int bret=-1;

	if((m_displayMode&DISPLAY_GDI)==DISPLAY_GDI||(m_displayMode&DISPLAY_NORMAL)==DISPLAY_NORMAL||(m_displayMode&DISPLAY_DX2)==DISPLAY_DX2||(m_displayMode&DISPLAY_GDI2)==DISPLAY_GDI2)
	{

		TSRuntime::NowUsingDictIndex=NowUsingDictIndex;
		TSRuntime::nMyDictCountsize[TSRuntime::NowUsingDictIndex]=nMyDictCountsize[NowUsingDictIndex];
		TSRuntime::nMaxStrHight[TSRuntime::NowUsingDictIndex]=nMaxStrHight[NowUsingDictIndex];
		TSRuntime::MyDictCount[TSRuntime::NowUsingDictIndex]=MyDictCount[NowUsingDictIndex];
		if(Findstrtype==0)   //FindStr
		{
			bret=fpic.FindStr(NULL,m_hwnd,x1,
				y1,
				x2,
				y2,
				fstring,
				coloroffer,
				sim,
				intX,intY,MyDictCount,nMyDictCountsize,NowUsingDictIndex,NULL,retstring,type);
		}
		else if(Findstrtype==1)	 //FindStrFast
		{
			bret=fpic.FindStrFast(NULL,m_hwnd,x1,
				y1,
				x2,
				y2,
				fstring,
				coloroffer,
				sim,
				intX,intY,MyDictCount,nMyDictCountsize,NowUsingDictIndex,NULL,retstring,type);
		}
		//USES_CONVERSION;
		//TSRuntime::add_log( "findPicture,findstring:%s,X:%d,Y:%d",W2A(findstring),intX,intY);
		return bret;
	}
	else if(m_displayMode&DISPLAY_DX_3D)
	{
		if(!pData->ispichook)
			return 0;//���PIC����HOOKʧ��,ֱ�ӷ���ʧ��

		fpic.m_hwnd=m_hwnd;
		fpic.m_parenthwnd=0;
		ST_TSFINDPIC getdata;
		getdata.left=x1;
		getdata.top=y1;
		getdata.right=x2;
		getdata.bottom=y2;
		getdata.ret=-1;
		pData->type=TS_GETSCREENDATA;
		::memcpy(pData->pmsg,&getdata,sizeof(ST_TSFINDPIC));
		wchar_t pszEventName[MAX_PATH]={0};

		::wsprintf(pszEventName,L"%s%d",TS_EVENT_NAME,nPid);
		HANDLE picEvent=::OpenEvent(EVENT_ALL_ACCESS,FALSE,pszEventName);
		if(picEvent)
		{
			::WaitForSingleObject(picEvent,10000);
			::CloseHandle(picEvent);
		}
		else
		{
			picEvent=::CreateEvent(NULL,TRUE,FALSE,pszEventName);
			::WaitForSingleObject(picEvent,3000);
			::CloseHandle(picEvent);
		}
		DWORD (*Data)[2000] = (DWORD(*)[2000])pData->ColorDataInfo;

		if(Findstrtype==0)   //FindStr
		{
			bret=fpic.FindStr(NULL,m_hwnd,x1,
				y1,
				x2,
				y2,
				fstring,
				coloroffer,
				sim,
				intX,intY,MyDictCount,nMyDictCountsize,NowUsingDictIndex,Data,retstring,type);
		}
		else if(Findstrtype==1)	 //FindStrFast
		{
			bret=fpic.FindStrFast(NULL,m_hwnd,x1,
				y1,
				x2,
				y2,
				fstring,
				coloroffer,
				sim,
				intX,intY,MyDictCount,nMyDictCountsize,NowUsingDictIndex,Data,retstring,type);
		}
		return bret;

		//TSRuntime::add_log( "dxFindstr");
		//ST_TSFINDPIC pic;
		//pic.left=x1;
		//pic.top=y1;
		//pic.right=x2;
		//pic.bottom=y2;
		//wcscpy(pic.path,findstring);
		//wcscpy(pic.color_format,coloroffer);
		//pic.simi=sim;
		//pic.x=-1;
		//pic.y=-1;
		//pic.ret=-1;
		//if(Findstrtype==0&&retstring==NULL)   //FindStr
		//	pData->type=TS_FINDSTR;
		//else if(Findstrtype==1&&retstring==NULL)	 //FindStrFast
		//	pData->type=TS_FINDSTRFAST;
		//else if(Findstrtype==0&&retstring!=NULL&&type==0)//FindStrEx
		//	pData->type=TS_FINDSTREX;
		//else if(Findstrtype==1&&retstring!=NULL&&type==0)//FindStrFastEx
		//	pData->type=TS_FINDSTRFASTEX;
		//else if(Findstrtype==0&&retstring==NULL&&type==2)   //FindStrS
		//	pData->type=TS_FINDSTRS;
		//else if(Findstrtype==1&&retstring==NULL&&type==2)	 //FindStrFastS
		//	pData->type=TS_FINDSTRFASTS;
		//else if(Findstrtype==0&&retstring!=NULL&&type==1)  //FindStrExS
		//	pData->type=TS_FINDSTREXS;
		//else if(Findstrtype==1&&retstring!=NULL&&type==1)   //FindStrFastExS
		//	pData->type=TS_FINDSTRFASTEXS;


		//::memcpy(pData->pmsg,&pic,sizeof(ST_TSFINDPIC));
		//wchar_t pszEventName[MAX_PATH]={0}; 
		////DWORD nPid=0;
		////GetWindowThreadProcessId(m_hwnd,&nPid); //��ȡע�봰�ڵĽ���ID
		//::wsprintf(pszEventName,L"%s%d",TS_EVENT_NAME,nPid);
		//HANDLE picEvent=::CreateEvent(NULL,TRUE,FALSE,pszEventName);
		//::WaitForSingleObject(picEvent,INFINITE);
		//::CloseHandle(picEvent);
		//ST_TSFINDPIC *pPic=(ST_TSFINDPIC *)pData->pmsg;
		//intX=pPic->x;
		//intY=pPic->y;

		//if(retstring!=NULL)
		//	wcscpy(retstring,pData->RetString);

		//return pPic->ret;
	}
}

int DXBind::findPic(LONG x1, LONG y1, LONG x2, LONG y2, wchar_t* pic_name,  wchar_t *color, DOUBLE sim, LONG dir, LONG &intX, LONG &intY,wchar_t *retstring,int type)
{
	//TSRuntime::add_log( "��ͼ");
	//if(TSRuntime::m_displayMode&DISPLAY_GDI)

	if(wcslen(pic_name)>=1024)
	{
		intX=-1;
		intY=-1;
		return -1;
	}
	RECT clientrc;
	::GetClientRect(m_hwnd,&clientrc);
	if(x1>=clientrc.right||y1>=clientrc.bottom)
	{
		intX=-1;
		intY=-1;
		return -1;
	}

	int bret=0;
	MyFindPictureClass  fpic;
	fpic.m_displayMode=m_displayMode;
	fpic.m_parenthwnd=m_parenthwnd;
	fpic.pWndBmpBuffer=pWndBmpBuffer;
	fpic.pBuffer=pBuffer;
	if((m_displayMode&DISPLAY_GDI)==DISPLAY_GDI||(m_displayMode&DISPLAY_NORMAL)==DISPLAY_NORMAL||(m_displayMode&DISPLAY_DX2)==DISPLAY_DX2||(m_displayMode&DISPLAY_GDI2)==DISPLAY_GDI2)
	{
		if(wcslen(m_SetPath)>0)
			wcscpy(fpic.SetPath,m_SetPath);

		bret=fpic.findPicture(NULL,m_hwnd,x1,
			y1,
			x2,
			y2,
			pic_name,
			color,
			sim,
			dir,
			intX,intY,NULL,retstring,type);
		//USES_CONVERSION;
		//TSRuntime::add_log( "findPicture,pic_path:%s,X:%d,Y:%d",W2A(pic_name),intX,intY);
		return bret;
	}
	else if(m_displayMode&DISPLAY_DX_3D)
	{
		if(!pData->ispichook)
			return 0;//���PIC����HOOKʧ��,ֱ�ӷ���ʧ��

		fpic.m_hwnd=m_hwnd;
		fpic.m_parenthwnd=0;
		ST_TSFINDPIC getdata;
		getdata.left=x1;
		getdata.top=y1;
		getdata.right=x2;
		getdata.bottom=y2;
		getdata.ret=-1;
		pData->type=TS_GETSCREENDATA;
		::memcpy(pData->pmsg,&getdata,sizeof(ST_TSFINDPIC));
		wchar_t pszEventName[MAX_PATH]={0};

		::wsprintf(pszEventName,L"%s%d",TS_EVENT_NAME,nPid);
		HANDLE picEvent=::OpenEvent(EVENT_ALL_ACCESS,FALSE,pszEventName);
		if(picEvent)
		{
			::WaitForSingleObject(picEvent,10000);
			::CloseHandle(picEvent);
		}
		else
		{
			picEvent=::CreateEvent(NULL,TRUE,FALSE,pszEventName);
			::WaitForSingleObject(picEvent,3000);
			::CloseHandle(picEvent);
		}
		DWORD (*Data)[2000] = (DWORD(*)[2000])pData->ColorDataInfo;

		if(wcslen(m_SetPath)>0)
			wcscpy(fpic.SetPath,m_SetPath);

		bret=fpic.findPicture(NULL,m_hwnd,x1,
			y1,
			x2,
			y2,
			pic_name,
			color,
			sim,
			dir,
			intX,intY,Data,retstring,type);

		return bret;
		//TSRuntime::add_log( "dxģʽ��ͼ,ndx:%d",++add);
		//ST_TSFINDPIC pic;
		//pic.left=x1;
		//pic.top=y1;
		//pic.right=x2;
		//pic.bottom=y2;
		//wcscpy(pic.path,pic_name);
		//wcscpy(pic.color_format,color);
		////pic.colorOffset=delta_color;
		//pic.simi=sim;
		//pic.dir=dir;
		//pic.x=-1;
		//pic.y=-1;
		//pic.ret=-1;
		//if(retstring==NULL)
		//	pData->type=TS_FINDPIC;
		//else if(retstring&&type==2)
		//	pData->type=TS_FINDPICS;
		//else if(retstring&&type==0)
		//	pData->type=TS_FINDPICEX;
		//else if(retstring&&type==1)
		//	pData->type=TS_FINDPICEXS;
		//::memcpy(pData->pmsg,&pic,sizeof(ST_TSFINDPIC)); 

		////DWORD nPid=0;
		////GetWindowThreadProcessId(m_hwnd,&nPid); //��ȡע�봰�ڵĽ���ID
		//wchar_t pszEventName[MAX_PATH]={0};
		//::wsprintf(pszEventName,L"%s%d",TS_EVENT_NAME,nPid);
		//HANDLE picEvent=::CreateEvent(NULL,TRUE,FALSE,pszEventName);
		//::WaitForSingleObject(picEvent,INFINITE);
		//::CloseHandle(picEvent);
		//ST_TSFINDPIC *pPic=(ST_TSFINDPIC *)pData->pmsg;
		//intX=pPic->x;
		//intY=pPic->y;
		//if(retstring!=NULL)
		//	wcscpy(retstring,pData->RetString);
		//return pPic->ret;
	}
}

//�ж��Ƿ���
int DXBind:: IsDisplayDead(LONG x1, LONG y1, LONG x2, LONG y2,int times)	
{
	//DWORD npid=0;
	//GetWindowThreadProcessId(m_hwnd,&npid);
	wchar_t path[MAX_PATH]={0};
	if(nPid!=0)
	{
		GetTempPath(MAX_PATH,path);
		swprintf(path,L"%s\\tbmp%d.bmp",path,nPid);
		Capture(x1,y1,x2,y2,path,D3DXIFF_BMP);
		times=times*1000;
		LONG retx=-1,rety=-1;
		int t1,t2,t3=0;
		for(int i=0;i<times;i=i+t3)
		{
			t1=GetTickCount();
			int bfind=findPic(x1-10,y1-10,x2+10,y2+10,path,L"000000",1.0,0,retx,rety);
			if(bfind==-1&&retx==-1)
			{
				DeleteFile(path);
				return 1;
			}
			Sleep(10);
			t2=GetTickCount();
			t3=t2-t1;

		}
	}
	DeleteFile(path);
	return 0;
}

void DXBind::setIsBind(bool isbind)	
{
	m_isBind=isbind;
}

bool DXBind::isBind()
{
	return m_isBind;
}

bool DXBind::TSMatchPicName(wchar_t *pic_name,wchar_t*ret_name)
{

	if(wcslen(pic_name)<=0)
		return false;

	wchar_t picname[MAX_PATH][MAX_PATH];//�洢����ַ���
	for(int i=0;i<MAX_PATH;i++)
	{
		memset(picname[i],0,16);
	}
	int col=0;
	short nstr=0;//Ҫ�����ļ����͸��� ,���֧��(MAX_PATH)��
	bool bfindxing=false;   //�ҵ�*
	bool bfindwen=false;	   //�ҵ�?
	while(*pic_name)
	{
		if(*pic_name!=L'|')
		{
			if(*pic_name=='*')
				bfindxing=true;
			if(*pic_name=='?')
				bfindwen=true;

			picname[nstr][col++]=*pic_name;
			pic_name++;
			continue;
		}
		else
		{
			if(col<1)
			{
				pic_name++;
				continue;
			}
			nstr++;
			col=0;
			pic_name++;
		}
	}
	if(col>=1)
		nstr++;

	col=0;
	if(wcslen(m_SetPath)>0)
	{
		wchar_t szFind[MAX_PATH]={0};
		TCHAR szFile[MAX_PATH]={0};
		wcscpy(szFind,m_SetPath);
		wcscat(szFind,L"\\*.bmp");
		WIN32_FIND_DATA FindFileData;
		HANDLE hFind=::FindFirstFile(szFind,&FindFileData);
		if(INVALID_HANDLE_VALUE == hFind)    return false;
		int retnamelen=0;
		while(TRUE)
		{
			if(FindFileData.dwFileAttributes!= FILE_ATTRIBUTE_DIRECTORY)
			{
				//FindFileData.cFileName
				for(int i=col;i<nstr;i++)
				{
					int len=wcslen(FindFileData.cFileName);
					wchar_t pic[MAX_PATH]={0};
					bool findxing=false;   //�ҵ�*
					bool findwen=false;	   //�ҵ�?
					bool bcontinue=true;
					bool bfind=false;
					for(int j=0;j<len;j++)
					{
						if(FindFileData.cFileName[j]=='.')
						{

							for(int n=0;n<nstr;n++)
							{
								if(wcscmp(FindFileData.cFileName,picname[n])==0)
								{
									bfind=true;
									break;
								}
							}
							if(!bfind)
							{
								//bcontinue=false;
								break;
							}

							if(retnamelen==0)
								retnamelen=wcslen(ret_name);
							if(retnamelen==0)
								swprintf(ret_name,L"%s",FindFileData.cFileName);
							else
								swprintf(ret_name,L"%s|%s",ret_name,FindFileData.cFileName);

							if(!bfindxing&&!bfindwen)
								col++;
							bcontinue=false;
							break;
						}


						if(picname[i][j]=='*')
							findxing=true;
						else if(picname[i][j]=='?')
							findwen=true;
						else if(picname[i][j]!='*'||picname[i][j]!='?')
							pic[j]=picname[i][j];

						if(findxing)//�ҵ�*
						{
							int cmp=wcsncmp(FindFileData.cFileName,pic,j);
							if(cmp==0)
							{	
								if(retnamelen==0)
									retnamelen=wcslen(ret_name);
								if(retnamelen==0)
									swprintf(ret_name,L"%s",FindFileData.cFileName);
								else
									swprintf(ret_name,L"%s|%s",ret_name,FindFileData.cFileName);

								bcontinue=false;
								break;
							}
						}
						else if(findwen)//�ҵ�?
						{
							int filelen=wcslen(pic);
							filelen=len-filelen;
							int cmp=wcsncmp(FindFileData.cFileName,pic,j);
							if(cmp==0)
							{
								for(int k=0;k<filelen;k++)
								{
									if(FindFileData.cFileName[j+k]=='.')
									{
										if(retnamelen==0)
											retnamelen=wcslen(ret_name);
										if(retnamelen==0)
											swprintf(ret_name,L"%s",FindFileData.cFileName);
										else
											swprintf(ret_name,L"%s|%s",ret_name,FindFileData.cFileName);
										bcontinue=false;
										break;
									}
									if(picname[i][j+k]=='?')
									{
										pic[j+k]=FindFileData.cFileName[j+k];
										continue;
									}
									else
										break;
								}
								if(!bcontinue)
									break;
							}
						}
					}
					if(!bcontinue)
					{
						break;
					}

				}
			}

			if(!FindNextFile(hFind,&FindFileData)||col==nstr)    break;
		}
		FindClose(hFind);

	}
}

void DXBind::InitGdiNormal()
{
	//if((m_displayMode&DISPLAY_GDI)==DISPLAY_GDI||(m_displayMode&DISPLAY_NORMAL)==DISPLAY_NORMAL||(m_displayMode&DISPLAY_DX2)==DISPLAY_DX2||(m_displayMode&DISPLAY_GDI2)==DISPLAY_GDI2)
	{
		if(pWndBmpBuffer==NULL)
		{
			pWndBmpBuffer = new COLORREF*[2000];             /////��ά���� �����洢ͼ�����ɫֵ
			for(int i=0;i<2000;i++)
			{
				pWndBmpBuffer[i]=new COLORREF[2000];
			}
		}
		if(pWndBmpStrxy==NULL)
		{
			pWndBmpStrxy=new short *[2000];
			for(int i=0;i<2000;i++)
			{
				pWndBmpStrxy[i]=new short[2000];
				memset(pWndBmpStrxy[i],0,2000);
				for(int j=0;j<2000;j++)
					pWndBmpStrxy[i][j]=0;
			}
		}
		if(pBuffer==NULL)
		{
			pBuffer=new BYTE[(2000 * 3 + 3) / 4 * 4 * 2000];
		}
	}
}
void DXBind::mysleep(DWORD delaytime)
{
	char eventname[MAX_PATH]={0};
	sprintf(eventname,"MYSLEEPEVENT:%d",nPid);
	HANDLE hEvent=::CreateEventA(NULL,TRUE,FALSE,eventname);
	DWORD dtime1=::GetTickCount();
	DWORD dtime2=dtime1;     
	DWORD result ;     
	MSG msg ;
	while (1)
	{
		result=::MsgWaitForMultipleObjects(1,&hEvent,FALSE,INFINITE,QS_ALLINPUT);
		dtime1=::GetTickCount();
		if((dtime1-dtime2)>=delaytime)
		{
			CloseHandle(hEvent);
			break;
		}

		if (result == WAIT_OBJECT_0+1)
		{
			while (PeekMessage(&msg,NULL,0,0,PM_REMOVE))
			{
				TranslateMessage(&msg);
				DispatchMessage(&msg);
			}
		}

	}
}

bool DXBind::TSEnableRealMouse(LONG X,LONG Y)
{
	bool bret=false;
	double DouMovelen=0.0;
	ULONG Movelen=::abs(X-LastMouseMoveX)*::abs(X-LastMouseMoveX)+::abs(Y-LastMouseMoveY)*::abs(Y-LastMouseMoveY);//(x*x+y*y)���ڿ����󳤶�
	DouMovelen=::sqrt((double)Movelen);//����
	Movelen=(ULONG)DouMovelen;
	short x=X,y=Y;
	DWORD MouseMoveX=LastMouseMoveX;
	DWORD MouseMoveY=LastMouseMoveY;
	while(mousestep<Movelen)
	{
		if(X==LastMouseMoveX)
		{
			x=X;
			if(Y>LastMouseMoveY)
			{
				y=MouseMoveY+mousestep;
				MouseMoveY=y;
			}
			else
			{
				y=MouseMoveY-mousestep;
				MouseMoveY=y;
			}

		}
		else  if(X>LastMouseMoveX)
		{
			if(Y>LastMouseMoveY)
			{
				x=(X-MouseMoveX)*mousestep/Movelen+MouseMoveX;
				y=(Y-MouseMoveY)*mousestep/Movelen+MouseMoveY;
				MouseMoveX=x;
				MouseMoveY=y;
			}
			else
			{
				x=(X-MouseMoveX)*mousestep/Movelen+MouseMoveX;
				y=MouseMoveY-(MouseMoveY-Y)*mousestep/Movelen;
				MouseMoveX=x;
				MouseMoveY=y;
			}
		}
		else if(X<LastMouseMoveX)
		{
			if(Y>LastMouseMoveY)
			{
				x=MouseMoveX-(MouseMoveX-X)*mousestep/Movelen;
				y=(Y-MouseMoveY)*mousestep/Movelen+MouseMoveY;
				MouseMoveX=x;
				MouseMoveY=y;
			}
			else
			{
				x=MouseMoveX-(MouseMoveX-X)*mousestep/Movelen;
				y=MouseMoveY-(MouseMoveY-Y)*mousestep/Movelen;
				MouseMoveX=x;
				MouseMoveY=y;
			}
		}

		if((m_mouseMode&MOUSE_NORMAL)==MOUSE_NORMAL)
		{
			if(TSRuntime::SetSimModeType==0)//��ͨģʽ
				::SetCursorPos(x,y);
		}
		else
		{
			if(m_mouseMode&MOUSE_WINDOW)
				PostMessage(m_mousekeyhwnd,WM_MOUSEMOVE,0,MAKELPARAM(x,y));
			else
			{
				SendMsg(TS_MOUSEMOVE,0,MAKELPARAM(x,y));
				//*nret=gDxObj.SendMsg(TS_MOUSEMOVEOVER);
			}
		}
		Movelen-=mousestep;
		Sleep(mousedelay);
	}
	x=X,y=Y;
	if((m_mouseMode&MOUSE_NORMAL)==MOUSE_NORMAL)
	{
		if(TSRuntime::SetSimModeType==0)//��ͨģʽ
			::SetCursorPos(x,y);
	}
	else
	{
		if(m_mouseMode&MOUSE_WINDOW)
			PostMessage(m_mousekeyhwnd,WM_MOUSEMOVE,0,MAKELPARAM(x,y));
		else
		{
			SendMsg(TS_MOUSEMOVE,0,MAKELPARAM(x,y));
		}
	}
	return bret;
}

DWORD  DXBind::TSRealKeyMousSleepTime(DWORD type)
{
	srand(::GetTickCount());
	DWORD sleeptime=0;
	if(type==0)//���
	{
		DWORD Moustart=MouseClicksleep/2; //��Χ����Сֵ
		DWORD Mouend=MouseClicksleep+Moustart;//��Χ�����ֵ
		int randnum=rand();
		if(randnum<=Moustart)
		{
			Moustart+=(Moustart-randnum);
			sleeptime=Moustart;
		}
		else
		{
			if(randnum/Mouend==0)
				sleeptime=Mouend-(Mouend-randnum);
			else
			{
				sleeptime=Mouend-(randnum-Mouend*(randnum/Mouend));
				if(sleeptime<Moustart)
					sleeptime=sleeptime+Moustart;
			}
		}
	}
	else//����
	{
		DWORD Keytart=KeyDownsleep/2; //��Χ����Сֵ
		DWORD Keyend=KeyDownsleep+Keytart;//��Χ�����ֵ
		int randnum=rand();
		if(randnum<=Keytart)
		{
			Keytart+=(Keytart-randnum);
			sleeptime=Keytart;
		}
		else
		{
			if(randnum/Keyend==0)
				sleeptime=Keyend-(Keyend-randnum);
			else
			{
				sleeptime=Keyend-(randnum-Keyend*(randnum/Keyend));
				if(sleeptime<Keytart)
					sleeptime=sleeptime+Keytart;
			}
		}
	}
	return sleeptime;
}

void DXBind::TSMoveToEx(ULONG x,ULONG y,ULONG w,ULONG h,wchar_t *retstring)
{
	Sleep(5);
	srand(::GetTickCount());
	int randnum=rand();
	DWORD movx=0,movy=0;
	DWORD xw=w+x;
	DWORD hy=h+y;
	if(randnum<=x)
	{
		movx=x+(x-randnum);
		if(movx>xw)
			movx=x+(movx-xw);
	}
	else
	{
		if(randnum/xw==0)
			movx=randnum;
		else
		{
			movx=x+(randnum-w*(randnum/w));
		}
	}

	if(randnum<=y)
	{
		movy=y+(y-randnum);
		if(movy>hy)
			movy=y+(movy-hy);
	}
	else
	{
		if(randnum/h==0)
			movy=randnum;
		else
			movy=y+(randnum-h*(randnum/h));
		
	}
	swprintf(retstring,L"%d,%d",movx,movy);

}


//////////////////////////////////������ע����ϷԶ��ʹ�õ�API�ӿ�///////////////////////////////

//��������API,���ҿ�������߳�
bool DXBind::hookApi()
{
	//�����߳�
	//if(TSRuntime::MapViewThread==NULL)
	TSRuntime::MapViewThread=(HANDLE)_beginthread(ReadShareMemoryThreadFunc,0,(void*)true);//����ע��HOOK�߳�
	//ReadShareMemoryThreadFunc((void*)true);//HookandUnhookAPI((void*)false);
	return true;
}

//��ȡ������
bool DXBind::TSGetMachineCode(wchar_t* retcode)
{

	return true;
}


