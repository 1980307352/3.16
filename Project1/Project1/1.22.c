#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include<math.h>
#include"add.h"

int main()
{
	int a = 20, b = 10;
	int sum = 0;
	sum = add(a, b);
	printf("%d", sum);
	return 0;
}

//int main()
//{
//	printf("%d", (printf("%d", (printf("%d", 43)))));
//	printf("%d\n", 56);
//	return 0;
//}

//int binary_search(int arr1[], int k,int j)
//{
//	int left = 0;
//	int right = j;
//	while (left <= right)
//	{
//		int mid = (left + right) / 2;
//		if (k > arr1[mid])
//			left = mid + 1;
//		else if (k < arr1[mid]) 
//			right = mid - 1;
//		else
//			return mid;
//	}
//	return -1;
//}
//int main()
//{
//	int sz = 0;
//	int a = 0;
//	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	sz=(sizeof(arr) / sizeof(arr[0])) - 1;
//	scanf("%d", &a);
//	int ret=binary_search(arr,a,sz);
//	if (ret == -1)
//		printf("�Ҳ���ָ������.\n");
//	else
//		printf("�ҵ��ˣ��±��ǣ�%d\n", ret);
//	return 0;
//}
//int year = 0;
//int main()
//{
//	int year;
//	scanf("%d", &year);
//	if (year % 4 == 0 && year % 100 != 0 || year % 400 == 0)
//		printf("��һ��������\n");
//	else
//		printf("��һ�겻������\n");
//	return 0;
//
//int is_prime(int n)
//{
//	int i = 0;
//	for (i = 2; i <= sqrt(n); i++)
//	{
//		if (n%i == 0)
//			return 0;
//	}
//	return 1;
//}
//int main()
//{
//	int j = 0;
//	scanf("%d", &j);
//	if (is_prime(j) == 0)
//		printf("�������������\n");
//	else
//		printf("�����������\n");
//}
//int aaa(int x)
//{
//	int j = 0;
//	for (j = 2; j<=x; j++)
//	{
//		if (x==j)
//		{
//			return 1; break;
//		}
//		else if (x%j==0)
//		{
//			return 0; break;
//		}
//	}
//}
//int main()
//{
//	int i = 0;
//	for (i = 100; i<= 200; i++)
//	{
//		if (aaa(i) == 1)
//			printf("%5d\n", i);
//	}
//	return 0;
//}
//int main()
//{
//	printf("%d", RAND_MAX);
//	return 0;
//}
//void menu()
//{
//	printf("****************************\n");
//	printf("***** 1.play  0.exit *****\n");
//	printf("****************************\n");
//}
//void game()
//{
//	int ret = 0;
//	int guess = 0;
//	ret= rand()%100+1;
//	while (1)
//	{
//		printf("�������\n");
//		scanf("%d", &guess);
//		if (guess > ret)
//			printf("�´���\n"); 
//		else if (guess < ret)
//			printf("��С��\n");
//		else
//		{
//			printf("��ϲ�㣬�¶���\n");
//			break;
//		}
//	}
//}
//int main()
//{
//	int input = 0;
//	srand((unsigned int)time(NULL));
//	do
//	{
//		menu();
//		printf("��ѡ��");
//		scanf("%d", &input);
//		switch (input)
//		{
//		case 1:game();
//			break;
//		case 0:printf("�˳���Ϸ\n");
//			break;
//		default:printf("�����������������\n");
//			break;
//		}
//	} while (input);
//	return 0;
//}



//int main()
//{
//	int i = 0;
//	for (i = 1; i <= 9; i++)
//	{
//		int j = 0;
//		for (j = 1; j <= i; j++)
//			printf("%d*%d=%-2d ", i, j, i*j);
//		printf("\n");
//	}
//	return 0;
//}