////////////////////////////////////////////////////////////////////////////////////

#if !defined(MYFINDPICTURECLASS_H)
#define MYFINDPICTURECLASS_H

#include <windows.h>
#include "d3d9.h"
#include <GdiPlus.h>
#include <GdiplusBitmap.h>
#include <vector>

class MyFindPictureClass
{
public:
	MyFindPictureClass(void);
	~MyFindPictureClass(void);

	enum RUNTYPE{TurnUP=0,TurnDOWN,TurnLEFT,TurnRIGHT,TurnERRORR};
	//LPDIRECT3DDEVICE9 m_pDxdevice;
	//HWND              m_Wnd;
	bool isprocessColor;//˵������ɫ����ȡɫ
	int loadWidth;
	int loadHeight;
	HWND m_parenthwnd;
	HBITMAP hDXBitmap;
	HDC hDXMemDC;
	HWND m_hwnd;
	DWORD m_displayMode;//ͼɫģʽ
	bool IsLastFindStr;//�Ƿ����һ�β���

	//COLORREF pWndBmpBuffer[2000][2000];
	COLORREF** pWndBmpBuffer; 
	//DWORD ColorDataInfo[2000][2000];
	BYTE * pBuffer;
	//COLORREF** pColorBuffer; 
	int wndWidth;
	int wndHeight;
	int nbuffersize;
	PVOID pbuffer;

	bool SaveGDIBitmap(HWND hWnd,RECT rect,wchar_t *savepath);

	bool SaveBitmapToFile(HBITMAP hBitmap, LPCWSTR lpFileName);

	bool CopyScreenToBitmap(LPRECT lpRect,wchar_t *savepath);

	DWORD GetBkMouseShape(HCURSOR bkmouseshape=NULL);//Ĭ��bkmouseshapeΪ��ʱΪǰ̨ģʽ, bkmouseshape��ֵ��ʱ���Ǻ�̨ģʽ

	bool loadBitmap(wchar_t* path);
	//////////////////��ͼ   ֧�ֵ���24λλͼ/////////////////////
	////  ͼƬ��ʽ�������û�ҵ�ͼƬ����������-1	
	////  ����             ˵��
	////  hwnd           ���ڵľ��,ΪNULL��ʾǰ̨����,��ΪNULL��ʾ��̨����
	////  left           ���Ͻ�x
	////  top            ���Ͻ�y
	////  right          ���½�x
	////  bottom         ���½�y
	////  path           ͼƬ��·��,֧�ֶ���ͼƬ,ʹ��"|"����
	////  colorOffset    ɫƫ ����"102030"
	////  simi           ���ƶ�
	////  dir            ������ʽ
	////  xpos           ���ص�ͼƬ�����Ͻ�x����
	////  ypos           ���ص�ͼƬ�����Ͻ�y����
	int findPicture(PVOID pbuffer,HWND hwnd,int left, int top, int right, int bottom, wchar_t* path, wchar_t *color, double simi, int dir, long &x,long &y,DWORD (*ColorDataInfo)[2000],wchar_t *retstring=NULL,int type=0);

	/////// ��ɫ�ڴ洦���� ����ٶ� //////////////////////
	bool processCreenWindow(int color,int left,int top,int right,int bottom,double simi,int dir,int &x,int &y,wchar_t* colorStr=NULL,bool isMulitColor=false);

	/////// ��̨��ɫ�ڴ洦���� ����ٶ� //////////////////////
	int processColor(PVOID pbuffer,HWND hwnd,int &color,int left,int top,int right,int buttom,double simi,int dir,long &x,long &y,DWORD (*ColorDataInfo)[2000],wchar_t *colorstr=NULL,wchar_t *retstring=NULL,wchar_t *MultiColor=NULL);

	//��BMPͼתJPGͼ
	bool   BMP2JPG(wchar_t*   strBMPFile,wchar_t*   strJPGFile);
	//��BMPͼתPNGͼ
	bool   BMP2PNG(wchar_t*   strBMPFile,wchar_t*   strPNGFile);

	//////////////////////////////////////////////////////////////////////////////////////�����㷨
	int   strColor;//�ֵ���ɫ
	int   strColors[MAX_PATH];//�ֵ���ɫ
	int   strColoroff[MAX_PATH];//�ֵ�ɫƫ
	int ncount;//��¼λͼ���صĵ������
	int addrxy[MAX_PATH*10][4];
	int dictindex;//��¼��ǰ�ֿ������
	int usingindex;	//��ǰʹ���ֿ���±�
	std::vector<POINT> pWndBmpStr[2048];
	short **pWndBmpStrxy;//�洢��ǰͼƬ������������ڵ�����ֵ
	wchar_t SetPath[MAX_PATH];
	//wchar_t SetPicPwdString[MAX_PATH];
	//COLORREF **pLoadstrBuffer;
	//COLORREF pLoadstrBuffer[11][MAX_PATH-10];

	void hextobyte(char * hexStr,char * byteStr);//��ʮ�������ַ���ת���ɶ������ַ���
	//void byteTopic(short strvalue[MAX_PATH],int strwide,COLORREF pLoadstrBuffer[11][MAX_PATH-10]);//��������ֵ��ԭ��ͼƬMAX_PATH
	void byteTopic(short strvalue[MAX_PATH],int strwide);//��������ֵ��ԭ��ͼƬMAX_PATH
	//bool comparaStrTosim(COLORREF pLoadstrBuffer[11][MAX_PATH-10],int strwide,int strhight,int &RetX,int &RetY,int startX,int startY,float simi,int nstrcount);	//���ƶ�ƥ��
	bool comparaStrTosim(int strwide,int strhight,int &RetX,int &RetY,int startX,int startY,float simi,int nstrcount);	//���ƶ�ƥ��
	bool comparaStr(short pLoadstrBufferxy[MAX_PATH],int strwide,int strhight,int &RetX,int &RetY,int startX,int startY,float simi,int nstrcount);//ƥ���ַ���
	void dicthextobyte(char * hexStr,char * byteStr,int &hexlen,short &nstrinfo);// �ֿ���Ϣת������
	bool GetStringInfo();//��ȡλ�õ�����Ϣ
	//��ȡλ�õ�����Ϣ,��GetStringInfo������,����һ��X�����ɨ��,�ų�������Ч�ĵ�����Ϣ
	bool GetStringInfo1();
	bool MySetDict(int nindex,wchar_t *dictpath,pMyDictInfo *MyDictCount,int *nMyDictCountsize,int &NowUsingDictIndex);//�����ֿ� �����ֿ�
	bool MyUseDict(int Useindex,pMyDictInfo *MyDictCount,int &NowUsingDictIndex);	   //ʹ���ֿ�
	bool MyDeleteDict(int deleteindex,pMyDictInfo *MyDictCount,int *nMyDictCountsize,int &NowUsingDictIndex);	//ɾ���ֿ�
	int ocr(PVOID pbuffer,HWND hwnd,int left, int top, int right, int bottom, wchar_t * color_format, double simi,wchar_t * retstr,pMyDictInfo *MyDictCount,int *nMyDictCountsize,int NowUsingDictIndex,DWORD (*ColorDataInfo)[2000],int type=0);
	int FindStr(PVOID pbuffer,HWND hwnd,int left, int top, int right, int bottom, wchar_t* strings, wchar_t* color, double simi, long &x,long &y,pMyDictInfo *MyDictCount,int *nMyDictCountsize,int NowUsingDictIndex,DWORD (*ColorDataInfo)[2000],wchar_t *retstring=NULL,int type=0);
	int FindStrFast(PVOID pbuffer,HWND hwnd,int left, int top, int right, int bottom, wchar_t* strings, wchar_t* color, double simi, long &x,long &y,pMyDictInfo *MyDictCount,int *nMyDictCountsize,int NowUsingDictIndex,DWORD (*ColorDataInfo)[2000],wchar_t *retstring=NULL,int type=0);
	//pMyDictInfo mydict;
	//////////////////////////////////////////////////////////////////////////////////////�����㷨
private:

	bool IsFindPicNext;
	COLORREF** pLoadBmpBuffer;
	//COLORREF** pWndBmpBuffer;
	int		   ncolors;	     //ɫƫ����
	BYTE       m_colorOffsR; // R��ƫ����
	BYTE       m_colorOffsG; // G��ƫ����
	BYTE       m_colorOffsB; // B��ƫ����
	BYTE       m_colorOffR[MAX_PATH]; // R��ƫ����
	BYTE       m_colorOffG[MAX_PATH]; // G��ƫ����
	BYTE       m_colorOffB[MAX_PATH]; // B��ƫ����
	/*double     m_sim;        // ���ƶ�*/  //δʹ�øñ���
	int        m_Dir;        // ������ʽ
	int		   m_simColor;	 //	���ƶȵ���ɫ�߽�ֵ

	//////////////////////////////�洢���������ĵ�ķ�Χ/////////////
	int        m_Left;       // ���ϵ�
	int        m_Top ;       // ���˵�
	int        m_Right ;     // ���µ�
	int        m_bottom ;    // �׶˵�

	int		xpos_offset;
	int		ypos_offset;

	///////////////////////////// ����͸��ͼ�Ĵ��� /////////////
	int        m_helpXpoint;
	int        m_helpYpoint; 
    //bool catchWindowBitmap();
 	//bool processBKWindows(HWND src_hWnd);

	//���BMP2JPGʹ��
	int   GetEncoderClsid(const   WCHAR*   format,   CLSID*   pClsid);
	bool getGDIBitmap(HWND wnd,RECT rc,int typemode=0);//��ʼĬ��Ϊ��ͼ	,typemode=0
	bool getDXBitmap(PVOID pbuffer,DWORD (*ColorDataInfo)[2000],int typemode=0);//��ʼĬ��Ϊ��ͼ	,typemode=0
	bool findImage(wchar_t* path,long &x,long &y,int type=0);

	bool comparabmp(int startX,int startY,int endX,int endY);
	//////////////// ���� ��ʽ //////////////////
	//////////////////////////////////0:������,���ϵ���/////////////////////
	bool leftToRightFromTop(long &x,long &y);
	//////������ɫΪ͸����ͼƬ////////////////
	bool comparaLeftToRightFromTop(int h,int w,int startX,int startY);
	//////������ɫΪ��͸����ͼƬ////////////////
	bool comparaLeftToRightFromTopEx(int h,int w);
	
	////////////////////////////////////1:������,���µ���//////////////////
	bool leftToRightFromBottom(long &x,long &y);
	////////������ɫΪ͸����ͼƬ////////////////
	bool comparaLeftToRightFromBottom(int h,int w,int startX,int startY);
	////////������ɫΪ��͸����ͼƬ////////////////
	bool comparaLeftToRightFromBottomEx(int h,int w);

	////////////////////////////////////2:���ҵ���,���ϵ���//////////////////
	bool rightToLeftFromTop(long &x,long &y);
	////////������ɫΪ͸����ͼƬ////////////////
	bool comparaRightToLeftFromTop(int h,int w,int startX,int startY);
	////////������ɫΪ��͸����ͼƬ////////////////
	bool comparaRightToLeftFromTopEx(int h,int w);	
	
	//////////////////////////////////3:���ҵ���,���µ���///////////////////
	bool rightToLeftFromBottom(long &x,long &y);
	////////������ɫΪ͸����ͼƬ////////////////
	bool comparaRightToLeftFromBottom(int h,int w,int startX,int startY);
	////////������ɫΪ��͸����ͼƬ////////////////
	bool comparaRightToLeftFromBottomEx(int h,int w);

	COLORREF RgbToBgb(__in COLORREF rgb);

	bool FindMultiColor(wchar_t *MultiColor,int i,int j,int Bottom,int right,int help_simi);
	
};
#endif