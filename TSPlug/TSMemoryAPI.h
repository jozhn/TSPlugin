#pragma once

#include "ASM/MgAsmCom.h"
#include "ASM/MgAsmComDef.h"
#include <string>

#define  FINDDATATYPE_FINDDATAEX		1	
#define  FINDDATATYPE_FINDDOUBLEEX		2
#define  FINDDATATYPE_FINDFLOATEX		3
#define  FINDDATATYPE_FINDINTEX			4
#define  FINDDATATYPE_FINDSTRINGEX		5

typedef struct  _FindDataInfo //�̴߳������ṹ��
	{
		HANDLE hprocess;
		DWORD dwncount;	//Ҫ�ҵĵ�ַ���ݸ���
		int count;//��¼����
		double double_value_min;
		double double_value_max;
		float float_value_min;
		float float_value_max;
		LONG int_value_min;
		LONG int_value_max;
		BYTE FindIntType;//��0:32λ,1:16λ,2:8λ
		LONG FindDataType;//�����ݵ�����
		wchar_t Findstring[MAX_PATH];
		DWORD Finddata[MAX_PATH];  //Ҫ�ҵ������ַ���
		DWORD dwbegin[MAX_PATH*10];
		DWORD dwend[MAX_PATH*10];
		bool bfindindex[MAX_PATH*10];//����ַ��־λ,��ʶ���߳�Ҫ����ĵ�ַ
		wchar_t *retstr;
		CRITICAL_SECTION m_mutex;//���߳��ٽ���
	   _FindDataInfo()
		   {
			  hprocess=NULL;
			  retstr=NULL;
			  dwncount=0;
			  count=0;
			  double_value_min=0;
			  double_value_max=0;
			  float_value_min=0;
			  float_value_max=0;
			  int_value_min=0;
			  int_value_max=0;
			  FindIntType=-1;//��0:32λ,1:16λ,2:8λ
			  FindDataType=-1;//�����ݵ�����
			  memset(Finddata,0,MAX_PATH*sizeof(DWORD));
			  memset(Findstring,0,MAX_PATH);
			  memset(dwbegin,0,MAX_PATH*10);
			  memset(dwend,0,MAX_PATH*10);
			  memset(bfindindex,0,MAX_PATH*10);	//ģʽΪfalse
		   }
	}FindDataInfo, *PFindDataInfo;

typedef struct {
	unsigned short Length;
	unsigned short MaximumLength;
	unsigned short *Buffer;
	} UNICODE_STRING;
typedef UNICODE_STRING *PUNICODE_STRING;

typedef struct _CLIENT_ID {
	HANDLE UniqueProcess;
	HANDLE UniqueThread;
	} CLIENT_ID;
typedef CLIENT_ID *PCLIENT_ID;

typedef struct _OBJECT_ATTRIBUTES {
	ULONG  Length;
	HANDLE  RootDirectory;
	PUNICODE_STRING  ObjectName;
	ULONG  Attributes;
	PVOID  SecurityDescriptor;
	PVOID  SecurityQualityOfService;
	} OBJECT_ATTRIBUTES, *POBJECT_ATTRIBUTES;
typedef CONST OBJECT_ATTRIBUTES *PCOBJECT_ATTRIBUTES;



typedef struct {
	unsigned long AllocationSize;
	unsigned long ActualSize;
	unsigned long Flags;
	unsigned long Unknown1;
	UNICODE_STRING Unknown2;
	void *InputHandle;
	void *OutputHandle;
	void *ErrorHandle;
	UNICODE_STRING CurrentDirectory;
	void *CurrentDirectoryHandle;
	UNICODE_STRING SearchPaths;
	UNICODE_STRING ApplicationName;
	UNICODE_STRING CommandLine;
	void *EnvironmentBlock;
	unsigned long Unknown[9];
	UNICODE_STRING Unknown3;
	UNICODE_STRING Unknown4;
	UNICODE_STRING Unknown5;
	UNICODE_STRING Unknown6;
	} PROCESS_PARAMETERS;

typedef struct {
	unsigned long AllocationSize;
	unsigned long Unknown1;
	void *ProcessHinstance;
	void *ListDlls;
	PROCESS_PARAMETERS *ProcessParameters;
	unsigned long Unknown2;
	void *Heap;
	} PEB;

typedef struct {
	unsigned int ExitStatus;
	PEB *PebBaseAddress;
	unsigned int AffinityMask;
	unsigned int BasePriority;
	unsigned long UniqueProcessId;
	unsigned long InheritedFromUniqueProcessId;
	} PROCESS_BASIC_INFORMATION;


class TSMemoryAPI
	{
	public:
		TSMemoryAPI(void);
		~TSMemoryAPI(void);
	CMgAsmBase tsasm;
	CMgDisasmBase tsdsm;
	public:
		bool TSValueTypeToData(int type,wchar_t *retstr,double dvalue=NULL,float fvalue=NULL,int ivalue=0,wchar_t *svalue=NULL,int type1=0);
		bool TSFindData(LONG hwnd,wchar_t * addr_range,wchar_t *data,wchar_t *retstr,bool threadtype=false);
		bool TSFindDouble(LONG hwnd,wchar_t * addr_range,wchar_t *retstr,double double_value_min,double double_value_max,bool threadtype=false);
		bool TSFindFloat(LONG hwnd,wchar_t * addr_range,wchar_t *retstr,FLOAT float_value_min, FLOAT float_value_max,bool threadtype=false);
		bool TSFindInt(LONG hwnd,wchar_t * addr_range,wchar_t *retstr,LONG int_value_min, LONG int_value_max,LONG type,bool threadtype=false);
		bool TSFindString(LONG hwnd,wchar_t * addr_range,wchar_t *retstr,wchar_t*string_value,LONG type,bool threadtype=false);
		bool TSReadData(LONG hwnd,wchar_t*addr,wchar_t *retstr,LONG len);
		bool TSReadDouble(LONG hwnd,wchar_t*addr,double &dvalue,float &fvalue,int type=0); //type0:DOUBLE,1:FLOAT
		bool TSReadInt(LONG hwnd,wchar_t*addr,int &ivalue,short &svalue,BYTE &bvalue,int type);
		bool TSReadString(LONG hwnd,wchar_t*addr,wchar_t *retstr,LONG len,int type);
		bool TSTerminateProcess(LONG pid);
		bool TSVirtualAllocEx(LONG hwnd,LONG &addr,LONG size,LONG type);
		bool TSVirtualFreeEx(LONG hwnd,LONG addr);
		bool TSWriteData(LONG hwnd,wchar_t * addr,wchar_t *data);
		bool TSWriteDouble(LONG hwnd,wchar_t *addr,DOUBLE dvalue=0,FLOAT fvlaue=0);
		bool TSWriteInt(LONG hwnd,wchar_t *addr,int ivalue=0,short svalue=0,BYTE bvalue=0);
		bool TSWriteString(LONG hwnd,wchar_t*addr,wchar_t* strvalue,LONG type);
		bool TSGetCmdLine(LONG hwnd,wchar_t *retstr);
		bool TSAsmAdd(wchar_t*asm_ins);
		bool TSAsmCall(LONG hwnd,LONG mode);
		bool TSAsmClear();
		bool TSAsmCode(LONG base_addr,wchar_t *retstr);
		bool TSAssemble(wchar_t * asm_code,LONG base_addr,LONG is_upper,wchar_t *retstr);
		bool TSFreeProcessMemory(LONG hwnd);
	private:
	DWORD nPid;
	int retstringlen;//�̺߳������ص�ַ�ĳ���
	CMgAsmBase::t_asmmodel  am;
	std::string asmcodearry;//�洢AsmAdd��ָ��
	char Asmcalladdr[MAX_PATH]; //��¼����CALLָ��
	LPVOID allocatememory;
	
	
	DWORD TSGetFindDataAddr(wchar_t* strs, DWORD pid);//��ȡҪ��д�Ķ�㼶��ĵ�ַָ��
	bool TSGetaddr_range(wchar_t* strs,LONG &begin,LONG &end,DWORD *addr_range,int &nconut); //��ȡҪ�ҵĵ�ַ����
	bool TSGetDataValue(wchar_t* strs,DWORD *Data_range,int &nconut);
	//void FindDataThread(void *para);
	bool GetFindaddr(HANDLE hprocess,PVOID  lpbegin,PVOID lpend,DWORD *ibegin,DWORD *ipend,int &ncount);

	DWORD GetCallstartData(DWORD Allocaddr,DWORD * startaddr,char *code=NULL);//��ȡCALL��ַǰ�Ļ��ָ��
	};
