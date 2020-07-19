#if !defined(TSMESSAGE_H)

#define TSMESSAGE_H

#include <string>

#define TS_MESSAGEBASE        (WM_USER+2000)

#define TS_BIND               (TS_MESSAGEBASE +  1)
#define TS_UNBIND             (TS_MESSAGEBASE +  2)
#define TS_KEYDOWN            (TS_MESSAGEBASE +  10)
#define TS_KEYUP              (TS_MESSAGEBASE +  11)
#define TS_CHAR               (TS_MESSAGEBASE +  12)
#define TS_MOUSEMOVE          (TS_MESSAGEBASE +  20)
#define TS_MOUSEMOVEOVER      (TS_MESSAGEBASE +  21)
#define TS_LBUTTONDOWN        (TS_MESSAGEBASE +  22)
#define TS_LBUTTOUP           (TS_MESSAGEBASE +  23)
#define TS_RBUTTONDOWN        (TS_MESSAGEBASE +  24)
#define TS_RBUTTONUP          (TS_MESSAGEBASE +  25)
#define TS_GETCURSORPOS       (TS_MESSAGEBASE +  26)
#define TS_MOUSER			  (TS_MESSAGEBASE +  27)
#define TS_MBUTTONDOWN        (TS_MESSAGEBASE +  28)
#define TS_MBUTTONUP          (TS_MESSAGEBASE +  29)
#define TS_MOUSEWHEEL         (TS_MESSAGEBASE +  30)
			 
#define TS_FINDPIC            (TS_MESSAGEBASE +  40)
#define TS_FINDCOLOR          (TS_MESSAGEBASE +  41)
#define TS_GETCOLOR			  (TS_MESSAGEBASE +  42)
#define TS_GETMOUSESHARE      (TS_MESSAGEBASE +  43)//GetBkMouseShape   
#define TS_SETPATH			  (TS_MESSAGEBASE +  44)
#define TS_CAPTURE			  (TS_MESSAGEBASE +  45)
#define TS_LOCKINPUT		  (TS_MESSAGEBASE +  46) //�����ⲿ��������Ϣ

#define TS_OCR				  (TS_MESSAGEBASE +  50)//ʶ��
#define TS_USEDICT            (TS_MESSAGEBASE +  51)
#define TS_SETDICT            (TS_MESSAGEBASE +  52)
#define TS_FINDSTR            (TS_MESSAGEBASE +  53)
#define TS_FINDSTRFAST        (TS_MESSAGEBASE +  54)
#define TS_FINDPICEX		  (TS_MESSAGEBASE +  55)
#define TS_FINDSTREX		  (TS_MESSAGEBASE +  56)
#define TS_FINDSTRFASTEX	  (TS_MESSAGEBASE +  57)
#define TS_DOWNCPU			  (TS_MESSAGEBASE +  58)
#define TS_SENDSTRINGIME	  (TS_MESSAGEBASE +  59)
#define TS_FINDCOLOREX		  (TS_MESSAGEBASE +  60)   //TS_OCR
#define TS_OCREX			  (TS_MESSAGEBASE +  61)//ʶ��
#define TS_FINDSTRS           (TS_MESSAGEBASE +  62)
#define TS_FINDSTRFASTS       (TS_MESSAGEBASE +  63)
#define TS_FINDSTREXS		  (TS_MESSAGEBASE +  64)
#define TS_FINDSTRFASTEXS	  (TS_MESSAGEBASE +  65)
#define TS_FINDPICS           (TS_MESSAGEBASE +  66)
#define TS_FINDPICEXS		  (TS_MESSAGEBASE +  67)
#define TS_SETPICPWD		  (TS_MESSAGEBASE +  68)
#define TS_ISGRAPHICPROTECT	  (TS_MESSAGEBASE +  69)//graphic.protect ,ͼɫ����� 
#define TS_GETSCREENDATA	  (TS_MESSAGEBASE +  70)//


#define TS_VERSION             L"4.019"

#define  GetDeviceStateOBJkeyboardXPoffse   0x80a7       // WINXPDinput8����:GetDeviceState�����ַƫ��
#define	 GetDeviceStateOBJkeyboardXPoffse_Next   0x3aac       // WINXPDinput8����:GetDeviceState�����ַƫ��
#define  GetDeviceStateOBJMouseXPoffse   0x827b          // WINXPDinput8����:GetDeviceState�����ַƫ��
#define  GetDeviceStateOBJMouseXPoffse_Next   0x3ab0          // WINXPDinput8����:GetDeviceState�����ַƫ��
#define  USER32InternalCallWinProcXPoffse  0x870c        // InternalCallWinProc�����ĵ�ַƫ�� 
#define  D3D9PresentXPoffse  0x40EA0                     // Present�����ĵ�ַƫ��

#define  USER32InternalCallWinProcWin2003offse  0x1b6bb        // InternalCallWinProc�����ĵ�ַƫ��	 400A0
#define  D3D9PresentWin2003offse  0x410A0                     // Present�����ĵ�ַƫ��

#define  GetDeviceStateOBJkeyboardWin7offse   0x69dd     // WIN7X64Dinput8����:GetDeviceState�����ַƫ��
#define  GetDeviceStateOBJMouseWin7offse   0x6ba7        //   WINXPDinput8����:GetDeviceState�����ַƫ��
#define  USER32InternalCallProcWin7offse  0x1c4c4        // InternalCallWinProc�����ĵ�ַƫ��
#define  USER32InternalCallProcWin7x64offse  0x162d7     // InternalCallWinProc�����ĵ�ַƫ��	    0x6215
#define  D3D9PresentWin7offse  0x4a064                   // Present�����ĵ�ַƫ��

#define  USER32InternalCallProcWin8offse  0x7420		//Win8ϵͳInternalCallWinProc�����ĵ�ַƫ��
#define  USER32InternalCallProcWin8x64offse  0x77b5		//Win8ϵͳInternalCallWinProc�����ĵ�ַƫ��
#define  D3D9PresentWin8offse  0x7b6fc					 // Present�����ĵ�ַƫ��
#define  GetDeviceStateOBJkeyboardWin8offse   0x7c85     // WIN7X64Dinput8����:GetDeviceState�����ַƫ��
#define  GetDeviceStateOBJMouseWin8offse   0x7df0       //   WINXPDinput8����:GetDeviceState�����ַƫ��// Present�����ĵ�ַƫ��


#define TS_BINDEVEN				  "TS_BIND_EVEN"
#define TS_UNBINDEVEN			  "TS_UNBIND_EVEN"
#define TS_KEYDOWNEVEN			  "TS_KEYDOWN_EVEN"
#define TS_KEYUPEVEN			  "TS_KEYUP_EVEN"//	
#define TS_KEYPRESSEVEN			  "TS_KEYPRESS_EVEN"
#define TS_KEYPRESSSTREVEN		  "TS_KEYPRESSSTR_EVEN"
#define TS_KEYPRESSCHAREVEN		  "TS_KEYPRESSCHAR_EVEN"

#define TS_LEFTDOWNEVEN			  "TS_LEFTDOWN_EVEN"
#define TS_LEFTUPEVEN			  "TS_LEFTUP_EVEN"
#define TS_LEFTCLICKEVEN		  "TS_LEFTCLICK_EVEN"
#define TS_MOVETOEVEN			  "TS_MOVETO_EVEN"
#define TS_FINDPICEVEN			  "TS_FINDPIC_EVEN"
#define TS_RIGHTCLICKEVEN		  "TS_RIGHTCLICK_EVEN"
#define TS_RIGHTDOWNEVEN		  "TS_RIGHTDOWN_EVEN"
#define TS_RIGHTUPEVEN			  "TS_RIGHTUP_EVEN"
#define TS_FINDCOLOREVEN		  "TS_FINDCOLOR_EVEN"
#define TS_GETCOLOREVEN			  "TS_GETCOLOR_EVEN"
#define TS_GETCURSORSHAPEEVEN	  "TS_GETCURSORSHAPE_EVEN"
#define TS_SETPATHEVEN			  "TS_SETPATH_EVEN"
#define TS_GETCURSORPOSEVEN		  "TS_GETCURSORPOS_EVEN"
#define TS_MOVEREVEN			  "TS_MOVER_EVEN"
#define TS_MIDDLECLICKEVEN		  "TS_MIDDLECLICK_EVEN"
#define TS_WHEELDOWNEVEN		  "TS_WHEELDOWN_EVEN"
#define TS_WHEELUPEVEN			  "TS_WHEELUP_EVEN"  
#define TS_CAPTUREEVEN			  "TS_CAPTUREE_EVEN" 
#define TS_LOCKINPUTEVEN		  "TS_LOCKINPUT_EVEN"
#define TS_OCREVEN				  "TS_OCR_EVEN"
#define TS_SETDICTEVEN			  "TS_SETDICT_EVEN"
#define TS_USEDICTEVEN			  "TS_USEDICT_EVEN"
#define TS_CLEARDICTEVEN		  "TS_CLEARDICT_EVEN"
#define TS_FINDSTREVEN			  "TS_FINDSTR_EVEN"
#define TS_GETNOWDICTEVEN		  "TS_GETNOWDICT_EVEN"
#define TS_CAPTUREGIFEVEN		   "TS_TS_CAPTUREGIF_EVEN"
#define TS_ENUMWINDOWEVEN		   "TS_ENUMWINDOW_EVEN"
#define TS_ENUMWINDOWBYPROCESSEVEN "TS_ENUMWINDOWBYPROCESS_EVEN"
#define TS_ENUMPROCESSEVEN	    "TS_ENUMPROCESS_EVEN"
#define TS_FINDDATAEVEN			"TS_FINDDATA_EVEN"
#define TS_FINDDOUBLEEVEN	    "TS_FINDDOUBL_EVEN"
#define TS_FINDFLOATEVEN	    "TS_FINDFLOAT_EVEN"
#define TS_FINDINTEVEN			"TS_FINDINT_EVEN"
#define TS_FINDSTRINGEVEN	    "TS_FINDSTRING_EVEN"
#define TS_MYSLEEPEVEN			"TS_MYSLEEP_EVEN"
#define TS_MYGETSCREENDATAEVEN	"TS_MYGETSCREENDATA_EVEN"
#define TS_MOVETOEXEVEN			"TS_MOVETOEX_EVEN"


#define TS_SENDSTRINGEVEN		  "TS_SENDSTRING_EVEN"
#define TS_SENDSTRING2EVEN		  "TS_SENDSTRING2_EVEN"
#define TS_SENDSTRINGIMEEVEN	  "TS_SENDSTRINGIME_EVEN"

#define MakeDelta(cast, x, y) (cast) ( (DWORD_PTR)(x) - (DWORD_PTR)(y))
#define MakePtr( cast, ptr, addValue ) (cast)( (DWORD_PTR)(ptr) + (DWORD_PTR)(addValue))

#define  VMPBEGIN \
	__asm _emit 0xEB \
	__asm _emit 0x10 \
	__asm _emit 0x56 \
	__asm _emit 0x4D \
	__asm _emit 0x50 \
	__asm _emit 0x72 \
	__asm _emit 0x6F \
	__asm _emit 0x74 \
	__asm _emit 0x65 \
	__asm _emit 0x63 \
	__asm _emit 0x74 \
	__asm _emit 0x20 \
	__asm _emit 0x62 \
	__asm _emit 0x65 \
	__asm _emit 0x67 \
	__asm _emit 0x69 \
	__asm _emit 0x6E \
	__asm _emit 0x00

#define  VMPEND \
	__asm _emit 0xEB \
	__asm _emit 0x0E \
	__asm _emit 0x56 \
	__asm _emit 0x4D \
	__asm _emit 0x50 \
	__asm _emit 0x72 \
	__asm _emit 0x6F \
	__asm _emit 0x74 \
	__asm _emit 0x65 \
	__asm _emit 0x63 \
	__asm _emit 0x74 \
	__asm _emit 0x20 \
	__asm _emit 0x65 \
	__asm _emit 0x6E \
	__asm _emit 0x64 \
	__asm _emit 0x00


struct ST_MSGBASE
{
   
};

#define  DICTLENGMAX     256*11 //��������Ϣ��󳤶�

//MyWriteMemory��Ҫ�Ľṹ�����
typedef struct __WriteMemoryInfo
{
	char Pbuff[10];
	ULONG Pid;
	ULONG BaseAddress;
	ULONG BufferSize;
	__WriteMemoryInfo()
		{
		Pid=0;
		BaseAddress=0;
		memset(Pbuff,0,10);
		BufferSize=0;
		}
}WriteMemoryInfo,*PWriteMemoryInfo;

typedef struct _MYDICTINFO   //��¼��ǰ�ֿ�ÿһ��������Ϣ
	{
	char mydistchar[16];//��¼��ǰ�����Ӧ��������Ϣ
	int strwide;//��¼�����ֿ�
	int strhight;
	short nstrcount;//��¼��ǰ����ֵĵ�������
	short nstrvalue[MAX_PATH];//��¼ǰ����������
	_MYDICTINFO()
		{
		memset(this,0,sizeof(_MYDICTINFO));
		}
	}MYDICTINFO, *pMyDictInfo;

struct ST_TSBIND:ST_MSGBASE
{
	DWORD key;
	DWORD mouse;
	DWORD display;
	HWND hwnd;
	ST_TSBIND()
    {
    hwnd=0;
	key=NULL;
	mouse=NULL;
	display=NULL;
    }
};

struct ST_TSFINDPIC:ST_MSGBASE
{
	int left;
	int top;
	int right;
	int bottom;
	wchar_t path[MAX_PATH*4];
	wchar_t color_format[MAX_PATH];
	int colorOffset;
	double simi;
	int dir;
	long x;
	long y;
	int pictype;
	int  ret;
	wchar_t *retstring;
	bool IsDisplayDead;
	int sleeptime;
	ST_TSFINDPIC()
    {
	sleeptime=0;
	IsDisplayDead=false;
	memset(path,0,512);
	memset(color_format,0,16);
 //   hwnd=0;
	//key=NULL;
	//mouse=NULL;
	//display=NULL;
    }
};

typedef struct tagWNDINFO 
	{
	DWORD dwProcessId; 
	HWND hWnd; 
	}WNDINFO, *LPWNDINFO;


struct CMessageData	           //���ݹ���ṹ��
{
	bool isInject;
	bool isRead;
	bool isBind;
	bool ispichook;
	bool iskeyboardhook;
	bool ismousehook;
	bool isHSProtect;
	HWND InjectHwnd;
	DWORD SleepTime;
	int type;
	int InjectType;
	wchar_t eventName[MAX_PATH];
	wchar_t setpath[MAX_PATH];
	DWORD message;
	DWORD wparam;
	DWORD lparam;
    pMyDictInfo MyDictCount[20]; //�洢��ǰ�����ֿ�,Ĭ������ֿ����Ϊ20��
	int nMaxStrHight[20]; //��¼ÿ���ֿ���,��ߵ��ָ�
	int nMyDictCountsize[20]; //��¼ÿ���ֿ������
	int NowUsingDictIndex;//��¼��ǰ����ʹ�õ��ֿ��±�
	wchar_t RetString[MAX_PATH*100];
	bool IsNpProtect;
	bool isgraphicprotect;//�Ƿ���ͼɫ�����
	wchar_t SetDictPwdString[MAX_PATH];
	wchar_t SetPicPwdString[MAX_PATH];
	bool Isdxkmprotect;  //dx���󲻱��������
	bool Isdxantiapi;//����dx.public.anti.api����
	HMODULE RemodeDLLMode;
	DWORD ColorDataInfo[2000][2000];
	HWND m_hwnd;
	char pmsg[2048];
	//std::string tt;
	CMessageData()
	{
		//memset(ColorDataInfo,0,sizeof(ColorDataInfo));
		m_hwnd=NULL;
		RemodeDLLMode=NULL;
		Isdxkmprotect=false;
		Isdxantiapi=false;
		isgraphicprotect=false;
		NowUsingDictIndex=-1;
		SleepTime=0;
		isHSProtect=false;
		InjectType=-1;
		isInject=false;
		isRead=false;
		isBind=false;
		ispichook=false;
		iskeyboardhook=false;
		ismousehook=false;
		IsNpProtect=false;
		InjectHwnd=NULL;
		message=0;
		wparam=0;
		lparam=0;
		memset(SetDictPwdString,0,MAX_PATH);
		memset(SetPicPwdString,0,MAX_PATH);
		::wmemset(setpath,0,MAX_PATH);
		::wmemset(eventName,0,MAX_PATH);
		::wmemset(RetString,0,MAX_PATH*100-1);
		memset(pmsg,0,2048);
		memset(MyDictCount,0,20);	//�洢�ֿ�
		memset(nMaxStrHight,0,20);//��¼ÿ���ֿ���,��ߵ��ָ�.
		memset(nMyDictCountsize,0,20);//��¼ÿ���ֿ������
		NowUsingDictIndex=0;
		// tt.clear();
	} 
	void reset()
	{
		//memset(ColorDataInfo,0,sizeof(ColorDataInfo));
		m_hwnd=NULL;
		Isdxkmprotect=false;
		Isdxantiapi=false;
		isgraphicprotect=false;
		NowUsingDictIndex=-1;
		SleepTime=0;
		isHSProtect=false;
		InjectType=-1;
		isInject=false;
		isRead=false;
		isBind=false;
		ispichook=false;
		iskeyboardhook=false;
		ismousehook=false;
		IsNpProtect=false;
		InjectHwnd=NULL;
		message=0;
		wparam=0;
		lparam=0;
		memset(SetDictPwdString,0,MAX_PATH);
		memset(SetPicPwdString,0,MAX_PATH);
		::wmemset(setpath,0,MAX_PATH);
		::wmemset(eventName,0,MAX_PATH);
		::wmemset(RetString,0,MAX_PATH*100);
		//::memset(pmsg,0,2048);
	}
};


class CShareMemory
{
public:
// ���캯������������
	CShareMemory(const char * pszMapName, int nFileSize = 0, BOOL bServer = FALSE);
	~CShareMemory();
// ����
	LPVOID GetBuffer() const { return  m_pBuffer; }
	HANDLE	m_hFileMap;
// ʵ��
private:
	LPVOID	m_pBuffer;
};

inline CShareMemory::CShareMemory(const char * pszMapName, 
			int nFileSize, BOOL bServer) : m_hFileMap(NULL), m_pBuffer(NULL)
{
	if(bServer)
	{
		// ����һ���ڴ�ӳ���ļ�����
		m_hFileMap = CreateFileMappingA(INVALID_HANDLE_VALUE, 
			NULL, PAGE_READWRITE, 0, nFileSize, pszMapName);
	}
	else
	{
		// ��һ���ڴ�ӳ���ļ�����
		m_hFileMap = OpenFileMappingA(FILE_MAP_ALL_ACCESS, FALSE, pszMapName);
	}
	
	// ӳ�������ڴ棬ȡ�ù����ڴ���׵�ַ
	m_pBuffer = (LPBYTE)MapViewOfFile(
		m_hFileMap,
		FILE_MAP_ALL_ACCESS,
		0,
		0,
		0
		);
}

inline CShareMemory::~CShareMemory()
{
	// ȡ���ļ���ӳ�䣬�ر��ļ�ӳ�������
	UnmapViewOfFile(m_pBuffer);
	CloseHandle(m_hFileMap);
}

#endif