#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>   //ͷ�ļ�
#include <windows.h>

//�������ܣ��ı���ʾ��ɫ
int color(int c)
{
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), c);        //����������ɫ
	return 0;
}

//������
void colors()
{
	unsigned char c; //�����ɫ�仯�ı��� 
	int i;  //ѭ����������	

	for (i = 0; i < 100; i++)
	{
		color(i);  //�ı���ʾ��ɫ  
		//printf("color = %d\n", i);	 //��ӡ��Ӧ��ɫ��ֵ 
	}
	Sleep(1000);  //�ȴ�1s 
	return 0;
}