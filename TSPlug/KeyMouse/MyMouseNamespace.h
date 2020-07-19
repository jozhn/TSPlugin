#if !defined(MYMOUSENAMESPACE_H)
#define MYMOUSENAMESPACE_H
//��깦����
class MyMouseNamespace
{
private:
	//��갴��״̬ö�� 
	enum MouseMode
	{
		 LEFTCLICK   =0    //�������
		,RIGHTCLICK        //�Ҽ�����
		,MIDDLECLICK       //�м�����
		,LEFTDOWN          //�������
		,LEFTUP            //�������
		,RIGHTDOWN         //�Ҽ�����
		,RIGHTUP           //�Ҽ�����
		,MIDDLEDOWN        //�м�����
		,MIDDLEUP          //�м�����
		,LEFTDOUBLECLICK   //���˫��
		,RIGHTDOUBLECLICK  //�Ҽ�˫��
	};

	//��껬�ַ���
	enum MouseWheel
	{
		 WHEEL_UP   =0       //���ϻ���
		,WHEEL_DOWN          //���»���
	};

	//��������:��굥��˫��ģʽ�Լ������ִ�д���
    //����ֵ:BOOL����
    //_TRUE��ʾ�ɹ�,_FALSE��ʾʧ��
    //
    //����˵��:
    //��������        ��������       ˵��
    //mousemode       MouseMode *   ��������굥��˫��ģʽ
    //nEcute          int           ִ�е�������˫������
	void mouseAction(MouseMode mousemode, int nEcute=1);

	//��������:���ֵ�ʵ��   
    //����ֵ:BOOL����
    //_TRUE��ʾ�ɹ�,_FALSE��ʾʧ��
    //
    //����˵��:
    //��������        ��������       ˵��
	//direction       MouseWheel     ����м�ģʽ
	//nMove           int            ����м����ϻ������¾����ƶ�����ֵ
	void mouseMidleWheel(MouseWheel direction,int  nMove=1);

public:
	//��������:����ƶ������λ��
    //����ֵ:BOOL����
    //_TRUE��ʾ�ɹ�,_FALSE��ʾʧ��
    //
    //����˵��:
    //��������        ��������       ˵��
    //list            MyDataList *   �����������Ĳ���,����x,yֵ
    //ret             _variant_t *      ���շ���ֵ����ȥ
	 bool  mouseMvrelative(DWORD x_pos,DWORD y_pos);

	//��������:����ƶ��ľ���λ��
    //����ֵ:BOOL����
    //_TRUE��ʾ�ɹ�,_FALSE��ʾʧ��
    //
    //����˵��:
    //��������        ��������       ˵��
    //list            MyDataList *   �����������Ĳ���,����x,yֵ
    //ret             _variant_t *      ���շ���ֵ����ȥ
	 bool   mouseMove(DWORD x_pos,DWORD y_pos);

	//��������:��ȡ��ǰ���ĵ�ǰλ������
	//����ֵ:BOOL����
    //_TRUE��ʾ�ɹ�,_FALSE��ʾʧ��
    //
    //����˵��:
    //��������        ��������       ˵��
    //ret             _variant_t *      ���շ���ֵ����ȥ
	 bool GetmousePoint(DWORD &x_pos,DWORD &y_pos);
	////////////////////////��ȡ�����״������ ///////////////
	bool getmouseshape(DWORD &dwshape);

	////////�ȴ�����������//////////////////
	//static bool waitClick(MyDataList * list,_variant_t * ret);

	// ��ȡ��һ�����Ķ���
	//bool getLastClick(MyDataList * list,_variant_t * ret);

	 bool leftClick();
	 bool leftDoubleClick();
	 bool leftDown();
	 bool leftUp();

	 bool rightClick();
	 bool rightDoubleClick();
	 bool rightDown();
	 bool rightUp();

	 bool middleClick();
	 bool middleDown();
	 bool middleUp();
	// ���¹���
	 bool mouseSheetDown();
	// ���Ϲ���
	 bool mouseSheetUp();
	 //��깦����Ĺ��캯��
	 MyMouseNamespace();
	 //��깦�������������
	 ~MyMouseNamespace();
public:
	DWORD delaytimes;

};


#endif
