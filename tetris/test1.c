#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>   
#include <windows.h>

int main()
{
	framedata();  //��ֵ�Ӻ�������
	drawframe();  //��ӡ

	Sleep(1000);
	return 0;
}
void gotoxy(int x, int y);  //������ƶ�����x,y��λ��
int color(int c);  //������ʾ�ı�����ŵ���ɫ
void drawpage1();  //��ӡ��ӭҳ
void drawpage2();   //��ӡ����Ϸҳ��
void drawpage3();   //��ӡ����˵��ҳ��
void drawpage4();   //��ӡ��������˵��ҳ��
void drawpage5();   //��ӡ������ʾҳ��

