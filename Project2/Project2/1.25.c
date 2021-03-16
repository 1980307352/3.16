#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

int Fibonacci_sequence(int a)
{
	if (n <= 2)
		return 1;
	else
		return ret(n - 1) + ret(n - 2);
}

int main()
{
	int n = 0;
	int ret = 1;
	scanf("%d", n);
	ret = Fibonacci_sequence(n);
	printf("%d\n",ret);
	return 0;
}
//int my_strlen(char* str)
//{
//	if (*str != '\0')
//		return 1 + my_strlen(str+1);
//	else
//		return 0;
//}
//int main()
//{
//	int len = 0;
//	char str[10];
//	scanf("%s", str);
//	len=my_strlen(str);
//	printf("%d", len);
//}