///////////////////////////////////////
#if !defined(MYKEYBOARDNAMESPACE_H)
#define MYKEYBOARDNAMESPACE_H

//���̹�����
class MyKeyboardNamespace
{
private:
	//ģ�ⰴ����״̬
	//KEY_DOWN  ���̴��ڰ���״̬
	//KEY_UP    ���̴��ڵ����״̬
	//KEY_DOWNANDUP  ���̴��ڰ��µ����״̬
    enum KeyboardEvent
    {
        KEY_DOWN
        ,KEY_UP
        ,KEY_DOWNANDUP
    };

public:
	//��������:���̰��µ���
    //����ֵ:BOOL����
    //_TRUE��ʾ�ɹ�,_FALSE��ʾʧ��
    //
    //����˵��:
    //��������        ��������       ˵��
    //list            MyDataList *   ���̰��µ���ʲô���Լ����̰��µ������Ĵ���
    //ret             _variant_t *      ���շ���ֵ����ȥ
	 bool keyPress(DWORD keycode);

	//��������:���̰���
    //����ֵ:BOOL����
    //_TRUE��ʾ�ɹ�,_FALSE��ʾʧ��
    //
    //����˵��:
    //��������        ��������       ˵��
    //list            MyDataList *   ���̰���ʲô���Լ����̰��¾������
    //ret             _variant_t *      ���շ���ֵ����ȥ
	 bool keyDown(DWORD keycode);

	//��������:���̵���
    //����ֵ:BOOL����
    //_TRUE��ʾ�ɹ�,_FALSE��ʾʧ��
    //
    //����˵��:
    //��������        ��������       ˵��
    //list            MyDataList *   ���̵���ʲô���Լ����̵���Ĵ���
    //ret             _variant_t *      ���շ���ֵ����ȥ
	 bool keyUp(DWORD keycode);
    
    //��������:���¼��̷���һ���ַ���
    //����ֵ:BOOL����
    //_TRUE��ʾ�ɹ�,_FALSE��ʾʧ��
    //
    //����˵��:
    //��������        ��������       ˵��
    //list            MyDataList *   ���̷��͵��ַ���
    //ret             _variant_t *      ���շ���ֵ����ȥ
	 bool sendkeyString(wchar_t *strs,DWORD delays);

	//��������:��ͣ����ȴ����ⰴ�������
    //����ֵ:BOOL����
    //_TRUE��ʾ�ɹ�,_FALSE��ʾʧ��
    //
    //����˵��:
    //��������        ��������       ˵��
    //list            MyDataList *   ���̷��͵��ַ���
    //ret             _variant_t *      ���շ���ֵ����ȥ
	 bool waitkeypress(DWORD keycode,DWORD delay);

	 //���̹�����Ĺ��캯��
	 MyKeyboardNamespace(void);

	 //���̹��������������
	 ~MyKeyboardNamespace(void);
public:
	 DWORD delaytime;
};

#endif