/*
��Դ����TC������Ƽ����޹�˾��Դ,���ܿ��������޸ġ�������
��ɳ������Ƽ����޹�˾����Դ�벻������ά��,,������ʹ�ù�������ѭ��ԴЭ��
*/

#pragma once

#include "TSMessage.h"
#include "KeyMouse/MyKeyboardNamespace.h"
#include "KeyMouse/MyMouseNamespace.h"

////TS�����ܵ���������
#define TSPROTECT_HIDE    0x00000001L  //"phide [pid]" : ����ָ�������Լ������ڵĴ��ڲ����Ƿ�����.Ĭ�ϱ�����ǰ����.(��ģʽ��Ҫ��������,Ŀǰ��֧��32λϵͳ)
#define TSPROTECT_HIDE2    0x00000002L	//"phide2 [pid]" : ͬphide. ֻ�ǽ��̲�����(��������������в���)

typedef void *HMEMORYLOADER;
void MemoryFreeLibrary(HMEMORYLOADER mod);
class DXBind;
class TSRuntime
{
public:
	static MyMouseNamespace    g_Mouse;
	static MyKeyboardNamespace g_KeyBoard;
	static DXBind g_DxObj;  //DX��̨��������,ȫ��Ψһ,����һ��comֻ�ܰ�һ������,�ര�ھ�Ҫ��ʵ����������          
	static CMessageData *pData;	      //����Ϊ��̬���Ա,���㱣�湲������ָ��
	static HANDLE MapViewThread;      //�����⹲���ڴ��߳�,����ж��ʱ����TerminateThread�����߳�
	static DWORD m_displayMode;
	static DWORD m_dwExStyle;
	static wchar_t RetStr[MAX_PATH*4];
	static wchar_t  SetPath[MAX_PATH];
	static LPOLESTR KeyPressCharMap[0x100];	  //256����λ
	static BYTE VirtualToASCIIMap[0x100];  //256����λ
	static BYTE keyMap[0x100];
	static BYTE KeyPressMap[0x100];
	static BYTE RawInputKeyPressMap[0x100];
	static BYTE KeyPressMap_Mouse[0x100];
	static bool IsVipLogin;
	static bool IsRegLogin;
	static DWORD g_nChecktime;//��¼ʱ��
	static bool IsStartProtect;
	static HANDLE h_checkthread;//��֤�߳̾��
	static INT64 checkthreadtime;//У���߳�ʱ��
	static bool g_IsSYSKEY;//����ϵͳ������:ATL
	static pMyDictInfo MyDictCount[20]; //�洢��ǰ�����ֿ�,Ĭ������ֿ����Ϊ20��
	static int nMaxStrHight[20]; //��¼ÿ���ֿ���,��ߵ��ָ�.
	static int nMyDictCountsize[20]; //��¼ÿ���ֿ������
	static int NowUsingDictIndex;//��¼��ǰ����ʹ���ֿ���±�
	static COLORREF pLoadstrBuffer[11][MAX_PATH];//�洢�ֿ����ԭͼƬ��ɫ����COLORREF
	static char bytestr[1024*3]; //�洢�����������Ϣ���洢Ϊ250*11
	static bool IsVirtualProtectEx;//�Ƿ�����ģʽԶ���޸�ע����̵�ҳ�汣������
	static HWND hookHwnd;//��¼Ҫע��Ĵ��ھ��
	static HMEMORYLOADER myUser32module;
	static HMEMORYLOADER mykernel32module;
	static bool IsInitialmyUser32module;
	static bool IsInitialmykernel32module;
	static wchar_t membstr[MAX_PATH*400];
	static bool IsShowErrorMsg;
	static bool IsNpProtect;
	static bool IsWin7X64;
	static bool IsWin8X64;
	static DWORD IsProid;
	static DWORD ProtectPid[20];
	static wchar_t Regcode[MAX_PATH];//��¼ע������Ϣ
	static wchar_t VipCountCode[MAX_PATH];//��¼VIP�û��˻���Ϣ
	static DWORD ZwProtectVirtualMemoryRet;
	static wchar_t SetDictPwdString[MAX_PATH];
	static wchar_t SetPicPwdString[MAX_PATH];
	static wchar_t MachineCode[MAX_PATH];//
	static bool IsLoginlog;
	static BYTE SetSimModeType;
	static bool g_IsLoadDrive;
	//static CComBSTR newbstr;
public:
	static HWND  GetProcessMainWnd(DWORD  dwProcessId);	 //��ȡ�����ھ��
	static void getMode(wchar_t *mouse,wchar_t *key,wchar_t *display,DWORD &dwMouse,DWORD &dwKey,DWORD &dwDisplay);
    static void my_split(TCHAR* sourcestr, TCHAR *oldstr, TCHAR (*temp)[28], int &rlen);
	static void add_log( const char * fmt, ... );
	static int  InitialWindowsVersion();//��ȡϵͳ�汾
	static bool EnablePrivilege(LPCTSTR pszPrivName, bool fEnable );
	static void initial();
	static bool  MyWriteMemory(IN PWriteMemoryInfo WriteInfo);
	static int VipLogin(wchar_t *regcode,int type,bool isvip=true);
	static bool GetComPath(TCHAR * Path);
	static bool StartProtect(long enable,long type,int Pid=0);
	static void InitKeyPressCharMap();//��ʼ��KeyPressCharMap
	static void InitVirtualToASCIIMap();
	static void InitKeyMap();
	static void InitKeyPressMap();
	static int retrunLparamDown(int key);
	static BOOL MByteToWChar(LPCSTR lpcszStr,LPWSTR lpwszStr,DWORD dwSize);
	static BOOL WCharToMByte(LPCWSTR lpcwszStr,LPSTR lpszStr,DWORD dwSize);
	static DWORD GetPassR3HookFuntionAddr(char *modename,char*funname);
	static HMODULE GetRemoteModuleHandle(const wchar_t *module, short nPID);//��ȡָ������ID��DLLģ����
	static HMODULE TSRuntime::GetRemoteModuleBase(const wchar_t *module, short nPID);
	static DWORD GetRemoteModuleBaseAddr(const wchar_t *module, short nPID);//��ȡָ������ID��DLLģ���ַ
	static bool GetRemoteModulePath(const wchar_t *module, short nPID,wchar_t *modulepath);//��ȡָ������ID��DLLģ��·��
	static FARPROC GetRemoteProcAddress( wchar_t *module, const char *func, short nPID);//��ȡָ������ID��DLLģ�麯���ĵ�ַ
	static bool MyLoadLibrary();
private:
	TSRuntime(void);
	~TSRuntime(void);
};

////���ʿ���
//class TsMutex//�����ٽ����������ٽ���
//{
//public:
//   TsMutex();
//   ~TsMutex();
//   CRITICAL_SECTION m_mutex;
//   void lock();
//   void unlock();
//
//};
//
//class TsMutexlock//������뿪�ٽ���
//{
//public:
//	TsMutexlock(TsMutex *ptcmutex);
//	~TsMutexlock();
//	TsMutex *m_ptcmutex;
//};
