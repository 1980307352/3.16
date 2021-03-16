#define _CRT_SECURE_NO_WARNINGS 1
#include"game.h"
void menu()
{
	printf("***************************************\n");
	printf("***********1.play    0.exit ***********\n");
	printf("***************************************\n");
}
void game()
{
	char board[ROW][COL] = { 0 };
}
void test()
{
	int input = 0;
	do
	{
		menu();
		printf("请选择->：");
		scanf("%d",&input);
		switch (input)
		{
		case 1:printf("三子棋\n"); break;
		case 0:printf("退出游戏\n"); break;
		default:printf("输入错误，请重新输入\n"); break;
		}
	} while (input);
}
int main()
{
	test();
	return 0;
}