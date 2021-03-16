#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

int my_strlen(char* a)
{
	char* start = a;
	char* end = a;
	while (*end != '\0')
		a++;
	return end - start;
}
int main()
{
	char arr[] = "cpdd";
	int str = my_strlen(arr);
	printf("%d\n", str);
	return 0;
}
//int main()
//{
//	int i = 0;
//	int arr[10] = { 0 };
//	char* p = arr;
//	for (i = 0; i < 10; i++)
//	{
//		*(p + i) = 1;
//		printf("%d", arr[i]);
//	}
//	return 0;
//}
//int main()
//{
//	char a;
//	a = '1';
//	printf("%d", sizeof(a));
//	return 0;
//}
//int main()
//{
//	int a = 0;
//	int count = 0;
//	int i = 0;
//	scanf("%d", &a);
//	for (i = 0; i < 32; i++)
//	{
//		if ((a>>i) & 1 == 1)
//			count++;
//	}
//	printf("%d", count);
//	return 0;
//}
//int main()
//{
//int a= 5, b = 3;
//a = a^b;
//b = a^b;
//a = a^b;
//printf("%d %d", a, b);
//return 0;
//}
//void bubble(int arr[],int sz)
//{
//	int a = 0;
//	int b = 0;
//	for (b=0;b<sz;b++)
//	{
//		int flag = 0;
//		for (a=0;a<sz-b;a++)
//		{
//			if (arr[a]>arr[a + 1])
//			{
//				int tmp = arr[a];
//				arr[a] = arr[a + 1];
//				arr[a + 1] = tmp;
//				flag = 1;
//			}
//		}
//		if (flag == 0)
//			break;
//	}
//}
//
//int main()
//{
//	int i = 0;
//	int arr[] = { 4,3,5,6,7,8,9 };
//	int sz =( sizeof(arr) / sizeof(arr[0]) - 1);
//	bubble(arr, sz);//9
//	for (i; i <= sz; i++)
//	{
//		printf("%d   ", arr[i]);
//	}
//	return 0;
//}
//int main()
//{
//	char arr[6] = "abcdef";
//	printf("%c\n", arr[10]);
//	return 0;
//}
//int Fib(int n)
//{
//	int a = 1;
//	int b = 1;
//	int c = 0;
//	while (n > 2)
//	{
//		c = a + b;
//		b = c;
//		a = b;
//		n--;
//	}
//	return c;
//}
//
//int main()
//{
//	int n = 0;
//	int ret = 1;
//	scanf("%d",&n);
//	ret = Fib(n);
//	printf("%d\n", ret);
//	return 0;
//}