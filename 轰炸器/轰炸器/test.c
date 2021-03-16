#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<Windows.h>

int main()
{

	int i=0,a=1000;
	char name1[100];//使用之前复制要轰炸的内容
	printf("请输入你要轰炸的对象名称\n");
	scanf("%s", &name1);
	printf("输入你要轰炸的次数\n");
	scanf("%d", &i);
	HWND H = FindWindow(0, &name1);//找到对话窗口
	while (i-- > 0)
	{
		SendMessage(H, WM_PASTE, 0, 0);//粘贴内容
		SendMessage(H, WM_KEYDOWN, VK_RETURN, 0);//回车发送
	}
}