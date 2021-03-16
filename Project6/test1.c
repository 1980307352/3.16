#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>   //头文件
#include <windows.h>

//函数功能：改变显示颜色
int color(int c)
{
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), c);        //更改文字颜色
	return 0;
}

//主程序
void colors()
{
	unsigned char c; //标记颜色变化的变量 
	int i;  //循环计数变量	

	for (i = 0; i < 100; i++)
	{
		color(i);  //改变显示颜色  
		//printf("color = %d\n", i);	 //打印对应颜色数值 
	}
	Sleep(1000);  //等待1s 
	return 0;
}