// dllmain.cpp : DllMain ��ʵ�֡�

/*��Դ����TC������Ƽ����޹�˾��Դ,���ܿ��������޸ġ�������
��ɳ������Ƽ����޹�˾����Դ�벻������ά��,,������ʹ�ù�������ѭ��ԴЭ��
*/



#include "stdafx.h"
#include "resource.h"
#include "TSPlug_i.h"
#include "dllmain.h"
#include "DXBind.h"
#include "TSRuntime.h"
#include <psapi.h> 
#pragma comment ( lib, "psapi.lib" )


CTSPlugModule _AtlModule;
TCHAR gDLLFolder[MAX_PATH + 1];
HHOOK g_hSetWindowsHook=NULL;
HMODULE g_hInstance=NULL;
extern bool g_Unbind;
extern HWND g_InjectHWND;
extern HWND g_currentHwnd;
HANDLE g_hthread=NULL;
extern int SySTpye;

//ж���߳�
void IMEUnLoadThread(void *para)
{
	while(1)
	{
		if(TSRuntime::pData->InjectType==204)//203ע��
		{
			TSRuntime::pData->InjectType=205;
			TSRuntime::MyLoadLibrary();
			FreeLibraryAndExitThread(g_hInstance,0);  //ж��DLL
			return;
		}
		if(g_Unbind==true)	 //�ȴ����ڽ��
			{
			//TSRuntime::add_log( "ж��DLL,InjectType:%d",TSRuntime::pData->InjectType);
			if(TSRuntime::pData->InjectType==1||TSRuntime::pData->InjectType==202||TSRuntime::pData->InjectType==205)
				{
					//TSRuntime::add_log( "ж��DLL,InjectType:%d",TSRuntime::pData->InjectType);
					FreeLibraryAndExitThread(g_hInstance,0);  //ж��DLL
				}
			   return ;
			}
		//���ע�뷽�����쳣�˳�,���ҽ��,ж��DLL
		if(::IsWindow(g_InjectHWND)==false&&g_InjectHWND!=NULL)
			{
			if(TSRuntime::pData->InjectType==0)
				{
					//֪ͨ�����ڽ��
					SendMessage(g_currentHwnd,TS_UNBIND,0,0);
					::UnhookWindowsHookEx(g_hSetWindowsHook);
				}
			else
				{
					//֪ͨ�����ڽ��
					SendMessage(g_currentHwnd,TS_UNBIND,0,0);
					FreeLibraryAndExitThread(g_hInstance,0);  //ж��DLL
				}
				return ;
			}
		Sleep(10);

		//CString scd;
	}

}

DWORD CALLBACK CBFunA(DWORD calldata1, DWORD calldata2,DWORD calldata3)	//���뷨ע��ص�����
{
	HINSTANCE my_hInstance=(HINSTANCE)calldata1;  //���뷨��������DLL��ַ������õ��Ļ�ַ��֤��ſ����߳�
	//TSRuntime::add_log( "IMEע��");
	if(my_hInstance)
		{
			if(my_hInstance==g_hInstance)
				g_hthread=(HANDLE)_beginthread(IMEUnLoadThread, 0 ,0 );//�����̵߳ȴ����ж��DLL
		}
	return 0;
}

static HMODULE ModuleFromAddress(PVOID pv) 
{
	MEMORY_BASIC_INFORMATION mbi;
	if(::VirtualQuery(pv, &mbi, sizeof(mbi)) != 0)
		{
			return (HMODULE)mbi.AllocationBase;
		}
	else
		{
			return NULL;
		}
}

static LRESULT WINAPI GetMsgProc(int code, WPARAM wParam, LPARAM lParam) 
{
	
	return ::CallNextHookEx(g_hSetWindowsHook, code, wParam, lParam);
}

BOOL WINAPI CBFunB(BOOL bInstall, DWORD dwThreadId)
{
	BOOL bOk=FALSE;
	if(bInstall)
		{
		g_hSetWindowsHook = ::SetWindowsHookEx(WH_CALLWNDPROC, GetMsgProc,ModuleFromAddress(GetMsgProc), dwThreadId);
		//TSRuntime::add_log( "g_hSetWindowsHook:%x,PID:%d",GetCurrentProcessId());
		if(g_hSetWindowsHook != NULL)
			{
			   bOk = true;
			}
			
		} 
	else 
		{
		 
		 if(g_hSetWindowsHook)
			 {
				//::MessageBox(0,L"Dll Main:UnhookWindowsHookEx",L"TS",0);
				bOk = ::UnhookWindowsHookEx(g_hSetWindowsHook);
			 }
		}
	return bOk;
}

// DLL ��ڵ�
extern "C" BOOL WINAPI DllMain(HINSTANCE hInstance, DWORD dwReason, LPVOID lpReserved)
{
	switch(dwReason)
		{
		case DLL_PROCESS_ATTACH:
			{

				TSRuntime::InitKeyPressCharMap();
				TSRuntime::InitVirtualToASCIIMap();
				TSRuntime::InitKeyMap();
				TSRuntime::InitKeyPressMap();
				SySTpye=TSRuntime::InitialWindowsVersion();
				g_hInstance=hInstance;
				//wcscpy(gDLLFolder,TSRuntime::GetComPath()); 
				TSRuntime::GetComPath(gDLLFolder);
				//::MessageBox(0,gDLLFolder,L"TS",0);
				char pszMapName[MAX_PATH]={0};
				sprintf( pszMapName,"%s%d",TS_MAPVIEW_NAME,GetCurrentProcessId());
				HANDLE hFileMap = OpenFileMappingA(FILE_MAP_ALL_ACCESS, FALSE, pszMapName);
					//���hFileMap�����Ϊ��˵��DLL��ע��,׼������ע���߳�
				if(hFileMap!=NULL)                           
					{
					  //::MessageBox(0,L"Dll Main:DLL_PROCESS_ATTACH",L"TS",0);
					 //// �����ȴ򿪹����ڴ�,�����ڴ�ͳ�����һ��һ�Ĺ�ϵ
				      CShareMemory *sm=new CShareMemory(pszMapName);
					  TSRuntime::pData=(CMessageData*)sm->GetBuffer();
					 //// �����ڴ�ĳ�ʼ�������ǲ���Ϊ�յ�,Ϊ�վͲ�����
					  if(TSRuntime::pData!=NULL)       
						{
							if(TSRuntime::pData->InjectType==BIND_201||TSRuntime::pData->InjectType==BIND_203)//201ģʽע��
							{
								if(TSRuntime::pData->InjectType==BIND_201)
									TSRuntime::pData->InjectType=202;
								else if(TSRuntime::pData->InjectType==BIND_203)
									TSRuntime::pData->InjectType=204;
								//TSRuntime::add_log("201ģʽע��");
								DWORD InternalCallWinProc_Addr=(DWORD)::GetModuleHandle(L"user32.dll");
								if(SySTpye==1)//WinXP
									InternalCallWinProc_Addr+=USER32InternalCallWinProcXPoffse;
								else if(SySTpye==2)//Win2003
									InternalCallWinProc_Addr+=USER32InternalCallWinProcWin2003offse;
								else if(SySTpye==4&&TSRuntime::IsWin7X64)//WIN7X64
									InternalCallWinProc_Addr+=USER32InternalCallProcWin7x64offse;
								else if(SySTpye==4)//WIN7X86
									InternalCallWinProc_Addr+=USER32InternalCallProcWin7offse;
								else if(SySTpye==5&&TSRuntime::IsWin8X64)//WIN8X64
									InternalCallWinProc_Addr+=USER32InternalCallProcWin8x64offse;
								else if(SySTpye==5)//WIN8X86
									InternalCallWinProc_Addr+=USER32InternalCallProcWin8offse;

								BYTE ori[5]={0x55,0x8b,0xec,0x56,0x57};

								//ע����ɻ�ԭ����
								memcpy((void*)InternalCallWinProc_Addr,ori,5);
								FlushInstructionCache(GetCurrentProcess(),(void*)InternalCallWinProc_Addr,5);

								////TS_BIND201_NAME
								wchar_t pszEventName[MAX_PATH]={0};
								::wsprintf(pszEventName,L"%s%d",TS_BIND201_NAME,::GetCurrentProcessId());
								HANDLE picEvent=::CreateEvent(NULL,TRUE,FALSE,pszEventName);
								::WaitForSingleObject(picEvent,INFINITE);
								::CloseHandle(picEvent);
								g_Unbind=false;

								_beginthread(IMEUnLoadThread, 0 ,0 );
								if(TSRuntime::pData->InjectType==202)
									TSRuntime::g_DxObj.hookApi();
							}
							else if(TSRuntime::pData->InjectType!=202&&TSRuntime::pData->InjectType!=204) //// ������ݴ����ģʽ���к�������,����һ������߳̽��м��
							{
								if(TSRuntime::pData->InjectType==205)//203��
									_beginthread(IMEUnLoadThread, 0 ,0 );	
								TSRuntime::g_DxObj.hookApi();
							}
						}

					}
				
			break;
			}

		}
	return _AtlModule.DllMain(dwReason, lpReserved); 
}

TsMutex::TsMutex(char *pszEventName)
	{
		//InitializeCriticalSection(&m_mutex);
		hEvent=OpenEventA(EVENT_ALL_ACCESS,false,pszEventName);
		if(hEvent==NULL)
			{
				hEvent=CreateEventA(NULL,FALSE,FALSE,pszEventName);
				::SetEvent(hEvent);
			}
		
	}

TsMutex::~TsMutex()
	{
		//DeleteCriticalSection(&m_mutex);
		CloseHandle(hEvent);
	}

void TsMutex::lock()
	{
		//::WaitForSingleObject(hEvent,INFINITE);
		::WaitForSingleObject(hEvent,10000);
		//EnterCriticalSection(&m_mutex);
	}
void TsMutex::unlock()
	{
		::SetEvent(hEvent);
		//LeaveCriticalSection(&m_mutex);
	}

TsMutexlock::TsMutexlock(TsMutex *ptcmutex)
	{
		m_ptcmutex=	 ptcmutex;
		m_ptcmutex->lock();
	}

TsMutexlock::~TsMutexlock()
	{
		m_ptcmutex->unlock();
	}