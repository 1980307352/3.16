#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

int main()
{

	return 0;
}
//int main()
//{
//	int a = 0;
//	int tmp = 0;
//	scanf("%d", &a);
//	while (a>0)
//	{
//		tmp = a % 10 +tmp;
//		a = a/10;
//	}
//	printf("%d", tmp);
//	return 0;
//}
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	scanf("%d", &a);
//	for (b = 1; b <= a; b++)
//	{
//		for (c = 1; c <= b; c++)
//			printf("%d*%d=%-2d    ", c, b, b*c);
//		printf("\n");
//	}
//	return 0;
//}
//int main()
//{
//	int i = 0;
//	int arr[] = { 5, 6, 7, 8, 9, 10 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int* p = &arr[0];
//	for (i = 0; i < sz; i++)
//	{
//		printf("  %d  ", *(p+i));
//	}
//	return 0;
//}
//int difference(int a,int b)
//{
//	int count = 0;
//	for (int i = 0; i < 32; i++)
//	{
//		if (a^b == 1)
//			count++;
//		a > i;
//		b > i;
//	}
//	return count;
//}
//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d", &a);
//	scanf("%d", &b);
//	int count = difference(a, b);
//	printf("%d", count);
//	return 0;
//}
//int count(unsigned int a)
//{
//	int count = 0;
//	while (a)
//	{
//		a = a&(a - 1);
//		count++;
//	}
//	return count;
//}
//int main()
//{
//	int a = 0;
//	scanf("%d", &a);
//	int tmp = count(a);
//	printf("%d", tmp);
//	return 0;
//}
//int main()
//{
//	int a = 0;
//	int b = (++a)+(++a);
//	printf("%d", b);
//	return 0;
//}
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int i = 0;
//	int arr1[] = { 0, 1, 2, 3, 4 };
//	int arr2[] = { 10, 11, 12, 13, 14 };
//	int tmp = 0;
//	int sz = sizeof(arr1) / sizeof(arr1[0]);
//	for (i = 0; i < sz; i++)
//	{
//		tmp = arr1[i];
//		arr1[i] = arr2[i];
//		arr2[i] = tmp;
//	}
//	for (a = 0; a<sz; a++)
//	{
//		printf("%d ", arr1[a]);
//	}
//	printf("\n");
//	for (b = 0; b<sz; b++)
//	{
//		printf("%d ", arr2[b]);
//	}
//	printf("\n");
//	return 0;
//}
//print(int arr[], int sz)
//{
//	int i = 0;
//	for (i; i < sz; i++)
//	{
//		printf("  %d  ", arr[i]);
//	}
//	printf("\n");
//}
//reverse(int arr[], int sz)
//{
//	int tmp = 0;
//	int left = 0;
//	int right = sz - 1;
//	while (right>left)
//	{
//		tmp = arr[right];
//		arr[right] = arr[left];
//		arr[left] = tmp;
//		right--;
//		left++;
//	}
//}
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	print(arr, sz);
//	reverse(arr, sz);
//	print(arr, sz);
//	return 0;
//}

//int my_strlen(char* a)
//{
//	char* start = a;
//	char* end = a;
//	while (*end != '\0')
//		end++;
//	return end - start;
//}
//int main()
//{
//	char arr[] = "cpdd";
//	int str = my_strlen(arr);
//	printf("%d\n", str);
//	return 0;
//}
