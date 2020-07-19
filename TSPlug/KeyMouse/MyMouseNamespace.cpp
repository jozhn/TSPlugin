/*
��Դ����TC������Ƽ����޹�˾��Դ,���ܿ��������޸ġ�������
��ɳ������Ƽ����޹�˾����Դ�벻������ά��,,������ʹ�ù�������ѭ��ԴЭ��
*/
#include "stdafx.h"
#include "MyMouseNamespace.h"

/*===================================================================
//���캯��
====================================================================*/
MyMouseNamespace::MyMouseNamespace()
{
	delaytimes=30;
}
/*===================================================================
//��������
====================================================================*/
MyMouseNamespace::~MyMouseNamespace()
{
}

//����ƶ����������
/*===================================================================
�������� :  mouseMvrelative
�������� :  ����ƶ������λ��
====================================================================*/
bool  MyMouseNamespace::mouseMvrelative(DWORD x_pos,DWORD y_pos)
{
    //�ƶ���������
	POINT pt;
	::GetCursorPos(&pt);
	::SetCursorPos(pt.x+x_pos,pt.y+y_pos);
    return true;
}

//����ƶ�����������
/*===================================================================
�������� :  mouseMove
�������� :  ����ƶ��ľ���λ��

====================================================================*/
//����ƶ�������λ��
bool  MyMouseNamespace::mouseMove(DWORD x_pos,DWORD y_pos)
{
    //�ƶ���������
	::SetCursorPos(x_pos,y_pos);
    return true;
}

//// ������
//// LEFTCLICK   =0    //�������
////,RIGHTCLICK        //�Ҽ�����
////,MIDDLECLICK       //�м�����
////,LEFTDOWN          //�������
////,LEFTUP            //�������
////,RIGHTDOWN         //�Ҽ�����
////,RIGHTUP           //�Ҽ�����
////,MIDDLEDOWN        //�м�����
////,MIDDLEUP          //�м�����
////,LEFTDOUBLECLICK   //���˫��
////,RIGHTDOUBLECLICK  //�Ҽ�˫��
//����ƶ�����������
/*===================================================================
�������� :  mouseAction
�������� :  ��굥����˫��ģʽ�Լ������ִ�д���


����ֵ: void����

����:
����        ����             ����
--------- -------------------------------------------
mousemode   MouseMode *    ��������굥����˫��ģʽ
nEcute      int            ִ�е�������˫������


�޸���ʷ :
�޸���   ����           ����
����Ԫ   2010-07-17     
����Ԫ   2010-07-20     �޸�ע��
====================================================================*/
void MyMouseNamespace::mouseAction(MouseMode mousemode, int nEcute)
{
    //Sleep(1000);

    //���״̬ѡȡ 
    switch (mousemode) 
    {
        //����������
    case LEFTCLICK:
        for(int i = 0; i < nEcute; i++)
        {   //��갴��
            //mouse_event(MOUSEEVENTF_LEFTDOWN , 0, 0, 0, 0);
            //::Sleep(100);
            //mouse_event(MOUSEEVENTF_LEFTUP , 0, 0, 0, 0);

			INPUT  MyMouseClick[1];  
			////��һ��������ģ������������  
			MyMouseClick[0].type   =   INPUT_MOUSE;  
			MyMouseClick[0].mi.dwFlags   =   MOUSEEVENTF_LEFTDOWN;  
			MyMouseClick[0].mi.mouseData   =   NULL;  
			MyMouseClick[0].mi.dwExtraInfo   =   NULL;  
			MyMouseClick[0].mi.time   =   NULL;  
			SendInput(1,MyMouseClick,sizeof(INPUT));
			Sleep(delaytimes);
			////�ڶ���������ģ���������ͷ�  
			MyMouseClick[0].type   =   INPUT_MOUSE;   
			MyMouseClick[0].mi.dwFlags   =   MOUSEEVENTF_LEFTUP;  
			MyMouseClick[0].mi.mouseData   =   NULL;  
			MyMouseClick[0].mi.dwExtraInfo   =   NULL;  
			MyMouseClick[0].mi.time   =   NULL;  ;
			////������궯������Ϣ���С�
			SendInput(1,MyMouseClick,sizeof(INPUT));
        }
        break;
        //����Ҽ�����
    case RIGHTCLICK: 
        for(int i = 0; i < nEcute; i++)
        {   //��갴��
            //mouse_event(MOUSEEVENTF_RIGHTDOWN,0,0,0,0);
            //::Sleep(100);
            //mouse_event(MOUSEEVENTF_RIGHTUP,0,0,0,0);

			INPUT  MyMouseClick[1];  
			////��һ��������ģ������������  
			MyMouseClick[0].type   =   INPUT_MOUSE;  
			MyMouseClick[0].mi.dwFlags   =   MOUSEEVENTF_RIGHTDOWN;  
			MyMouseClick[0].mi.mouseData   =   NULL;  
			MyMouseClick[0].mi.dwExtraInfo   =   NULL;  
			MyMouseClick[0].mi.time   =   NULL;  
			SendInput(1,MyMouseClick,sizeof(INPUT));
			Sleep(delaytimes);
			////�ڶ���������ģ���������ͷ�  
			MyMouseClick[0].type   =   INPUT_MOUSE;   
			MyMouseClick[0].mi.dwFlags   =   MOUSEEVENTF_RIGHTUP;  
			MyMouseClick[0].mi.mouseData   =   NULL;  
			MyMouseClick[0].mi.dwExtraInfo   =   NULL;  
			MyMouseClick[0].mi.time   =   NULL;  ;
			////������궯������Ϣ���С�
			SendInput(1,MyMouseClick,sizeof(INPUT));
        }
        break;
        //����м�����
    case MIDDLECLICK:
        for(int i = 0; i < nEcute; i++)
        {   //��갴��
            //mouse_event(MOUSEEVENTF_MIDDLEDOWN|MOUSEEVENTF_MIDDLEUP, 0, 0, 0, 0);

			INPUT  MyMouseClick[1];  
			////��һ��������ģ������������  
			MyMouseClick[0].type   =   INPUT_MOUSE;  
			MyMouseClick[0].mi.dwFlags   =   MOUSEEVENTF_MIDDLEDOWN;  
			MyMouseClick[0].mi.mouseData   =   NULL;  
			MyMouseClick[0].mi.dwExtraInfo   =   NULL;  
			MyMouseClick[0].mi.time   =   NULL;  
			SendInput(1,MyMouseClick,sizeof(INPUT));

			Sleep(delaytimes);
			////�ڶ���������ģ���������ͷ�  
			MyMouseClick[0].type   =   INPUT_MOUSE;   
			MyMouseClick[0].mi.dwFlags   =   MOUSEEVENTF_MIDDLEUP;  
			MyMouseClick[0].mi.mouseData   =   NULL;  
			MyMouseClick[0].mi.dwExtraInfo   =   NULL;  
			MyMouseClick[0].mi.time   =   NULL;  ;
			////������궯������Ϣ���С�
			SendInput(1,MyMouseClick,sizeof(INPUT));
        }
        break;
        //����������
    case LEFTDOWN:
		{
			//�������һ��
			//mouse_event(MOUSEEVENTF_LEFTDOWN, 0, 0, 0, 0); 	
			INPUT  MyMouseClick[1];  
			////��һ��������ģ������������  
			MyMouseClick[0].type   =   INPUT_MOUSE;  
			MyMouseClick[0].mi.dwFlags   =   MOUSEEVENTF_LEFTDOWN;  
			MyMouseClick[0].mi.mouseData   =   NULL;  
			MyMouseClick[0].mi.dwExtraInfo   =   NULL;  
			MyMouseClick[0].mi.time   =   NULL;  
			SendInput(1,MyMouseClick,sizeof(INPUT));
		}
        break;
        //����������
    case LEFTUP:
		{
			//mouse_event(MOUSEEVENTF_LEFTUP, 0, 0, 0, 0);
			INPUT  MyMouseClick[1]; 
			////�ڶ���������ģ���������ͷ�  
			MyMouseClick[0].type   =   INPUT_MOUSE;   
			MyMouseClick[0].mi.dwFlags   =   MOUSEEVENTF_LEFTUP;  
			MyMouseClick[0].mi.mouseData   =   NULL;  
			MyMouseClick[0].mi.dwExtraInfo   =   NULL;  
			MyMouseClick[0].mi.time   =   NULL;  ;
			////������궯������Ϣ���С�
			SendInput(1,MyMouseClick,sizeof(INPUT));
		}
        break;
        //����Ҽ�����
    case RIGHTDOWN:
		{
        //mouse_event(MOUSEEVENTF_RIGHTDOWN, 0, 0, 0,0);
		    INPUT  MyMouseClick[1];  
			////��һ��������ģ������������  
			MyMouseClick[0].type   =   INPUT_MOUSE;  
			MyMouseClick[0].mi.dwFlags   =   MOUSEEVENTF_RIGHTDOWN;  
			MyMouseClick[0].mi.mouseData   =   NULL;  
			MyMouseClick[0].mi.dwExtraInfo   =   NULL;  
			MyMouseClick[0].mi.time   =   NULL;  
			SendInput(1,MyMouseClick,sizeof(INPUT));
		}
        break;
        //����Ҽ��̵���
    case RIGHTUP:
		{
        //mouse_event(MOUSEEVENTF_RIGHTUP, 0, 0, 0,0);
			INPUT  MyMouseClick[1];  
			MyMouseClick[0].type   =   INPUT_MOUSE;   
			MyMouseClick[0].mi.dwFlags   =   MOUSEEVENTF_RIGHTUP;  
			MyMouseClick[0].mi.mouseData   =   NULL;  
			MyMouseClick[0].mi.dwExtraInfo   =   NULL;  
			MyMouseClick[0].mi.time   =   NULL;  ;
			////������궯������Ϣ���С�
			SendInput(1,MyMouseClick,sizeof(INPUT));
		}
        break;
        //����м�����
    case MIDDLEDOWN:
		{
        //mouse_event(MOUSEEVENTF_MIDDLEDOWN, 0, 0, 0,0);
			INPUT  MyMouseClick[1];  
			////��һ��������ģ������������  
			MyMouseClick[0].type   =   INPUT_MOUSE;  
			MyMouseClick[0].mi.dwFlags   =   MOUSEEVENTF_MIDDLEDOWN;  
			MyMouseClick[0].mi.mouseData   =   NULL;  
			MyMouseClick[0].mi.dwExtraInfo   =   NULL;  
			MyMouseClick[0].mi.time   =   NULL;  
			SendInput(1,MyMouseClick,sizeof(INPUT));
		}
        break;
        //����м��̵���
    case MIDDLEUP:
		{
        //mouse_event(MOUSEEVENTF_MIDDLEUP, 0, 0, 0,0);
			INPUT  MyMouseClick[1]; 			
			MyMouseClick[0].type   =   INPUT_MOUSE;   
			MyMouseClick[0].mi.dwFlags   =   MOUSEEVENTF_MIDDLEUP;  
			MyMouseClick[0].mi.mouseData   =   NULL;  
			MyMouseClick[0].mi.dwExtraInfo   =   NULL;  
			MyMouseClick[0].mi.time   =   NULL;  ;
			////������궯������Ϣ���С�
			SendInput(1,MyMouseClick,sizeof(INPUT));
		}
        break;
        //������˫��
	case LEFTDOUBLECLICK:
		for (int i = 0; i < nEcute; i++)
		{   
			INPUT  MyMouseClick[1];  
			//�ڶ���������ģ������������  
			MyMouseClick[0].type   =   INPUT_MOUSE;  
			MyMouseClick[0].mi.dwFlags   =   MOUSEEVENTF_LEFTDOWN;  
			MyMouseClick[0].mi.mouseData   =   NULL;  
			MyMouseClick[0].mi.dwExtraInfo   =   NULL;  
			MyMouseClick[0].mi.time   =   NULL;  
			Sleep(delaytimes);
			SendInput(1,MyMouseClick,sizeof(INPUT));
			//������������ģ���������ͷ�  
			MyMouseClick[0].type   =   INPUT_MOUSE;   
			MyMouseClick[0].mi.dwFlags   =   MOUSEEVENTF_LEFTUP;  
			MyMouseClick[0].mi.mouseData   =   NULL;  
			MyMouseClick[0].mi.dwExtraInfo   =   NULL;  
			MyMouseClick[0].mi.time   =   NULL;  
			//������궯������Ϣ���С�
			SendInput(1,MyMouseClick,sizeof(INPUT));
			Sleep(delaytimes);
			//�ڶ���������ģ������������  
			MyMouseClick[0].type   =   INPUT_MOUSE;  
			MyMouseClick[0].mi.dwFlags   =   MOUSEEVENTF_LEFTDOWN;  
			MyMouseClick[0].mi.mouseData   =   NULL;  
			MyMouseClick[0].mi.dwExtraInfo   =   NULL;  
			MyMouseClick[0].mi.time   =   NULL;  
			SendInput(1,MyMouseClick,sizeof(INPUT));
			Sleep(delaytimes);
			//������������ģ���������ͷ�  
			MyMouseClick[0].type   =   INPUT_MOUSE;   
			MyMouseClick[0].mi.dwFlags   =   MOUSEEVENTF_LEFTUP;  
			MyMouseClick[0].mi.mouseData   =   NULL;  
			MyMouseClick[0].mi.dwExtraInfo   =   NULL;  
			MyMouseClick[0].mi.time   =   NULL;  
			//������궯������Ϣ���С�
			SendInput(1,MyMouseClick,sizeof(INPUT));
		}
		break;
        //����Ҽ�˫��
    case RIGHTDOUBLECLICK:
        for (int i = 0; i < nEcute; i++)
        {
			INPUT  MyMouseClick[1];  
			////��һ��������ģ������������  
			MyMouseClick[0].type   =   INPUT_MOUSE;  
			MyMouseClick[0].mi.dwFlags   =   MOUSEEVENTF_RIGHTDOWN;  
			MyMouseClick[0].mi.mouseData   =   NULL;  
			MyMouseClick[0].mi.dwExtraInfo   =   NULL;  
			MyMouseClick[0].mi.time   =   NULL;  
			SendInput(1,MyMouseClick,sizeof(INPUT));
			Sleep(delaytimes);
			////�ڶ���������ģ���������ͷ�  
			MyMouseClick[0].type   =   INPUT_MOUSE;   
			MyMouseClick[0].mi.dwFlags   =   MOUSEEVENTF_RIGHTUP;  
			MyMouseClick[0].mi.mouseData   =   NULL;  
			MyMouseClick[0].mi.dwExtraInfo   =   NULL;  
			MyMouseClick[0].mi.time   =   NULL;  ;
			////������궯������Ϣ���С�
			SendInput(1,MyMouseClick,sizeof(INPUT));
			Sleep(delaytimes);
			////��һ��������ģ������������  
			MyMouseClick[0].type   =   INPUT_MOUSE;  
			MyMouseClick[0].mi.dwFlags   =   MOUSEEVENTF_RIGHTDOWN;  
			MyMouseClick[0].mi.mouseData   =   NULL;  
			MyMouseClick[0].mi.dwExtraInfo   =   NULL;  
			MyMouseClick[0].mi.time   =   NULL;  
			SendInput(1,MyMouseClick,sizeof(INPUT));
			Sleep(delaytimes);
			////�ڶ���������ģ���������ͷ�  
			MyMouseClick[0].type   =   INPUT_MOUSE;   
			MyMouseClick[0].mi.dwFlags   =   MOUSEEVENTF_RIGHTUP;  
			MyMouseClick[0].mi.mouseData   =   NULL;  
			MyMouseClick[0].mi.dwExtraInfo   =   NULL;  
			MyMouseClick[0].mi.time   =   NULL;  ;
			////������궯������Ϣ���С�
			SendInput(1,MyMouseClick,sizeof(INPUT));

        }
        break;
    default:
        return;
    }
}

/*===================================================================
�������� :  GetmousePoint
�������� :  ��ȡ��ǰ����λ������
====================================================================*/
bool  MyMouseNamespace::GetmousePoint(DWORD &x_pos,DWORD &y_pos)
{
    POINT pt;
    GetCursorPos(&pt);
	x_pos=pt.x;
	y_pos=pt.y;
    return true;
}
/*����ֵ: void����

����:
����        ����             ����
--------- -------------------------------------------
direction   MouseWheel       ���շ���ֵ����ȥ
nMove       int              ���ƹ����ƶ�����
====================================================================*/
void MyMouseNamespace::mouseMidleWheel(MouseWheel direction,int  nMove)
{
    if (direction == MouseWheel::WHEEL_DOWN) //��������
    {
        mouse_event(MOUSEEVENTF_WHEEL, 0,0,-nMove, 0);
    }
    else if (direction == MouseWheel::WHEEL_UP) //��������
    {
        mouse_event(MOUSEEVENTF_WHEEL, 0,0, nMove, 0);
    }
}

HBITMAP BitmapFromIcon(HICON hIcon)
{
    HDC dDC = CreateDC(_T("DISPLAY"),NULL,NULL,NULL);
    HDC hDC = CreateCompatibleDC(dDC);
    HBITMAP hBitmap = CreateCompatibleBitmap(hDC, GetSystemMetrics(SM_CXICON), GetSystemMetrics(SM_CYICON));
    HBITMAP hOldBitmap = (HBITMAP)SelectObject(hDC, hBitmap);
    DrawIcon(hDC, 0, 0, hIcon);
    hBitmap=(HBITMAP)SelectObject(hDC, hOldBitmap);
    DeleteDC(hDC);
    ::DeleteDC(dDC);

    return hBitmap;
}

////////////////////////��ȡ�����״������ ///////////////
bool MyMouseNamespace::getmouseshape(DWORD &dwshape)
{
	dwshape=0;
	CURSORINFO pci;
	pci.cbSize=sizeof(CURSORINFO);
	pci.flags=0;
	pci.hCursor=0;
	if(!::GetCursorInfo(&pci))
		return false;
	
	HDC dDC = CreateDC(_T("DISPLAY"),NULL,NULL,NULL);
	HDC hDC = CreateCompatibleDC(dDC);
	HBITMAP hBitmap = CreateCompatibleBitmap(dDC, GetSystemMetrics(SM_CXICON), GetSystemMetrics(SM_CYICON));
	HBITMAP hOldBitmap = (HBITMAP)SelectObject(hDC, hBitmap);

	DrawIcon(hDC,0,0,pci.hCursor);
	hBitmap=(HBITMAP)SelectObject(hDC, hOldBitmap);

	DWORD           dwPaletteSize=0,dwBmBitsSize;
	BITMAP          Bitmap;              
	BITMAPINFOHEADER   bi;
	//λͼ��Ϣͷ�ṹ 
	LPBITMAPINFOHEADER lpbi; 
	HANDLE       hDib;
	HPALETTE     hOldPal=NULL;

	//����λͼ��Ϣͷ�ṹ
	GetObject(hBitmap, sizeof(BITMAP), (LPSTR)&Bitmap);
	WORD    wBitCount = Bitmap.bmBitsPixel;
	dwBmBitsSize = ((Bitmap.bmWidth*wBitCount+31)& ~31)/8*Bitmap.bmHeight;
	BYTE* bmpDate = new BYTE[dwBmBitsSize];

	bi.biSize            = sizeof(BITMAPINFOHEADER);
	bi.biWidth           = Bitmap.bmWidth;
	bi.biHeight          = Bitmap.bmHeight;
	bi.biPlanes          = 1;
	bi.biBitCount         = wBitCount;
	bi.biCompression      = BI_RGB;
	bi.biSizeImage        = dwBmBitsSize;
	bi.biXPelsPerMeter     = 0;
	bi.biYPelsPerMeter     = 0;
	bi.biClrUsed         = 0;
	bi.biClrImportant      = 0;

	hDib  = GlobalAlloc(GHND,dwBmBitsSize+dwPaletteSize+sizeof(BITMAPINFOHEADER));
	lpbi = (LPBITMAPINFOHEADER)GlobalLock(hDib);
	*lpbi = bi;
	GetDIBits(hDC,hBitmap,0,(UINT)Bitmap.bmHeight,bmpDate, (BITMAPINFO *)lpbi,DIB_RGB_COLORS);
	DWORD num=0;
	int height=Bitmap.bmHeight;
	int width =Bitmap.bmWidth;
	
	BYTE  b0 = bmpDate[0];
	BYTE  g0 = bmpDate[1];
	BYTE  r0 = bmpDate[2];

	// 32λͼ���н���
	if(Bitmap.bmBitsPixel==32)
	{
			for(int i=0;i<height;i++)
			{
				for(int j=0;j<width;j++)
				{
					UCHAR b=bmpDate[(i*width+j)*4];
					UCHAR g=bmpDate[(i*width+j)*4+1];
					UCHAR r=bmpDate[(i*width+j)*4+2];
					if( b == b0 && g == g0 && r == r0 )
					{
						continue;
					}
					else
					{
						num++;
					}
				}
			}
	}


	////////////////////////////////////////////////////////////////////////
	DWORD helpnum=num*RGB(255,255,0);
	delete [] bmpDate;
	:: GlobalFree(hDib);
	::DeleteDC(hDC);
	::DeleteDC(dDC);
	::DeleteObject(hBitmap);
	dwshape=helpnum;
	return true;
}

#define MOUSE_DOWN(vk_code) ((GetAsyncKeyState(vk_code) & 0x8000) ? 1 : 0)
#define MOUSE_UP(vk_code)   ((GetAsyncKeyState(vk_code) & 0x8000) ? 0 : 1)

bool MyMouseNamespace::leftClick()
{
	mouseAction(LEFTCLICK);
	return true;
}
bool MyMouseNamespace::leftDoubleClick()
{
	mouseAction(LEFTDOUBLECLICK);
	return true;
}
bool MyMouseNamespace::leftDown()
{
	mouseAction(LEFTDOWN);
	return true;
}
bool MyMouseNamespace::leftUp()
{
	mouseAction(LEFTUP);
	return true;
}

bool MyMouseNamespace::rightClick()
{
	mouseAction(RIGHTCLICK);
	return true;
}
bool MyMouseNamespace::rightDoubleClick()
{
	mouseAction(RIGHTDOUBLECLICK);
	return true;
}
bool MyMouseNamespace::rightDown()
{
	mouseAction(RIGHTDOWN);
	return true;
}
bool MyMouseNamespace::rightUp()
{
	mouseAction(RIGHTUP);
	return true;
}

bool MyMouseNamespace::middleClick()
{
	mouseAction(MIDDLECLICK);
	return true;
}
bool MyMouseNamespace::middleDown()
{
	mouseAction(MIDDLEDOWN);
	return true;
}
bool MyMouseNamespace::middleUp()
{
	mouseAction(MIDDLEUP);
	return true;
}
// ���¹���
bool MyMouseNamespace::mouseSheetDown()
{
	mouseMidleWheel(WHEEL_DOWN);
	return true;
}
// ���Ϲ���
bool MyMouseNamespace::mouseSheetUp()
{
	mouseMidleWheel(WHEEL_UP);
	return true;
}

