#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>   //头文件
#include <windows.h>

////函数功能：改变显示颜色
//int color(int c)
//{
//	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), c);        //更改文字颜色
//	return 0;
//}
//
////主程序
//int main()
//{
//	unsigned char c; //标记颜色变化的变量 
//	int i;  //循环计数变量	
//
//	for (i = 0; i < 100; i++)
//	{
//		color(i);  //改变显示颜色  
//		printf("color = %d\n", i);	 //打印对应颜色数值 
//	}
//
//	Sleep(1000);  //等待1s 
//
//	return 0;
//}

void print_total()
{
	color(1);
	printf("\n     趣  味  俄  罗  斯  方  块\n");
}
void print_t()
{
	color   (9);  //蓝色
	printf("■\n");
	printf("■■\n");
	printf("■\n");
}
void print_l()
{
	color(12);  //红色
	printf("■\n");
	printf("■\n");
	printf("■■\n");
}
void print_o()
{
	color(2);  //蓝色
	printf("■■\n");
	printf("■■\n");
}
void print_z()
{
	color(14);  //黄色
	printf("■■■\n");
	printf("  ■\n");
	printf("■■■\n");
}
void print_i()
{
	color(13);  //紫色
	printf("  ■\n");
	printf("  ■\n");
	printf("  ■\n");
}

int main()
{
	colors();
	print_total();
	print_t();
	print_l();
	print_o();
	print_z();
	print_i();
	return 0;
}




















//void test1(int* p[5])
//{
//	
//}
//int main()
//{
//	int arr[3][5] = { 0 };
//	test1(arr);
//	//int i = 0;
//	//for(i;i<5;i++)
//	//printf("%d", &arr[1][i]);
//	return 0;
//}
//int main()
//{
//	int i = 0;
//	int arr[] = { 1,2,3,4,5,6 };
//	int* p = arr;
//	for (i; i < 6; i++)
//	{
//		printf("%d  ", *(p + i));
//		printf("%d  ", *(arr + i));
//	}
//	return 0;
//}
//void print2(int (*p)[5], int x, int y)
//{
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < x; i++)
//	{
//		for (j = 0; j < y; j++)
//		{
//			printf("%d   ", *(*(p+i)+j));
//			printf("%d   ", (*(p + i))[j]);
//		}
//		printf("\n");
//	}
//}
//void print1(int (*p)[5],int x,int y)
//{
//	int i = 0;
//	for (i=0; i < x; i++);
//	{
//		int j = 0;
//		for (j = 0; j < y; j++)
//		{
//			printf("%d  ",*(*(p+i)+j));
//		}
//		printf("\n");
//	}
//}
//int main()
//{
//	int arr[3][5] = { {1,2,3,4,5},{10,11,12,13,14},{20,21,22,23,24} };
//	print2(arr,3,5);
//	return 0;
//}
//int main()
//{
//	int i;
//	int arr[6] = { 1,2,3,4,5,6 };
//	int(*p)[6] = &arr;
//	p=*p + 1;
//  	for (i = 0; i <6; i++)
//	{
//		printf("%d\n", *(*p+i));//*p=&arr   *(*p+i)=
//		
//	}
//	return 0;
//}
//int main()
//{
//	int i = 0;
//	int j = 0;
//	int arr1[] = { 1,2,3,4,5 };
//	int arr2[] = { 10,11,12,13,14 };
//	int* arrp[] = { &arr1,&arr2 };
//	for (i = 0; i <= 1; i++)
//	{
//		for (j = 0; j <= 4; j++)
//		{
//			printf("%d   ",*(arrp[i]+j));
//		}
//		printf("\n");
//	}
//	return 0;
//}
//int main()
//{
//	char arr[] = "qwer";
//	char* p = arr;
//	printf("%c\n",*p);//
//	printf("%s\n",p);//字符串的首地址
//	return 0;
//}