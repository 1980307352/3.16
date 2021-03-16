#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>   
#include <windows.h>

int main()
{
	framedata();  //填值子函数调用
	drawframe();  //打印

	Sleep(1000);
	return 0;
}
void gotoxy(int x, int y);  //将光标移动到（x,y）位置
int color(int c);  //更改显示文本或符号的颜色
void drawpage1();  //打印欢迎页
void drawpage2();   //打印主游戏页面
void drawpage3();   //打印规则说明页面
void drawpage4();   //打印按键功能说明页面
void drawpage5();   //打印结束提示页面

