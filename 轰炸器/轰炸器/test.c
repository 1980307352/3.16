#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<Windows.h>

int main()
{

	int i=0,a=1000;
	char name1[100];//ʹ��֮ǰ����Ҫ��ը������
	printf("��������Ҫ��ը�Ķ�������\n");
	scanf("%s", &name1);
	printf("������Ҫ��ը�Ĵ���\n");
	scanf("%d", &i);
	HWND H = FindWindow(0, &name1);//�ҵ��Ի�����
	while (i-- > 0)
	{
		SendMessage(H, WM_PASTE, 0, 0);//ճ������
		SendMessage(H, WM_KEYDOWN, VK_RETURN, 0);//�س�����
	}
}