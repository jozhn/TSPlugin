// dllmain.h : ģ�����������
class CTSPlugModule : public CAtlDllModuleT< CTSPlugModule >
{
public :
	DECLARE_LIBID(LIBID_TSPlugLib)
	DECLARE_REGISTRY_APPID_RESOURCEID(IDR_TSPLUG, "{900527EB-7D74-41DE-9E3E-80E4B267E0F2}")
	
};

//���ʿ���
class TsMutex//�����ٽ����������ٽ���
	{
	public:
		TsMutex(char *pszEventName);
		~TsMutex();
		//CRITICAL_SECTION m_mutex;
		HANDLE hEvent;
		void lock();
		void unlock();

	};

class TsMutexlock//������뿪�ٽ���
	{
	public:
		TsMutexlock(TsMutex *ptcmutex);
		~TsMutexlock();
		TsMutex *m_ptcmutex;
	};



extern class CTSPlugModule _AtlModule;
