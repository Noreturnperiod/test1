#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<assert.h>
//int my_strlen(const char* str)
//{
//	int count = 0;
//	assert(str != NULL);
//	while (*str != '\0')
//	{
//		count++;
//		str++;
//	}
//	return count;
//}
//int main()
//{
//	char arr[] = "abcdefj";
//	int len = my_strlen(arr);
//	printf("%d\n",len);
//	return 0;
//}
//char* my_strcpy(char* dest, const char* str)
//{
//	char *ret = dest;
//	assert(dest != NULL);
//	assert(str != NULL);
//	while (*dest++ = *str++)
//	{
//		;
//	}
//	return ret;
//}
//int main()
//{
//	char arr1[] = "##########";
//	char arr2[] = "abcdef";
//	printf("%s\n",my_strcpy(arr1,arr2));
//	return 0;
//}
//int main()
//{
//
//	return 0;
//}
//int swap(int arr[], int sz)
//{
//	int left = 0;
//	int right = sz - 1;
//	int temp = 0;
//	while (left < right)
//	{
//		while (arr[left] % 2 == 1)
//		{
//			left++;
//		}
//		while (arr[right] % 2 == 0)
//		{
//			right--;
//		}
//		if (left < right)
//		{
//			temp = arr[left];
//			arr[left] = arr[right];
//			arr[right] = temp;
//		}
//	}
//	return 0;
//}
//int print(int arr[], int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ",arr[i]);
//	}
//	return 0;
//}
//int main()
//{
//	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	swap(arr, sz);
//	print(arr, sz);
//	return 0;
//}
//#include<stdio.h>
//#define N 10
//void SetTriangle(int(*a)[N])
//{
//	for (int row = 0; row < N; row++)
//	{
//		for (int col = 0; col <= row; col++)
//		{
//			a[row][0] = 1;
//			if (row >= 1 && col >= 1)
//			{
//				a[row][col] = a[row - 1][col - 1] + a[row - 1][col];
//			}
//		}
//	}
//}
//
//void PrintTriangle(int(*a)[N])
//{
//	for (int row = 0; row < N; row++)
//	{
//		for (int col = 0; col <= row; col++)
//		{
//			printf("%4d ", a[row][col]);
//		}
//		printf("\n");
//	}
//}
//int main()
//{
//	int arr[N][N] = { 0 };
//	SetTriangle(arr);
//	PrintTriangle(arr);
//	return 0;
//}
//#include <stdio.h>  
//int main()
//{
//	int murder;
//	for (murder = 'A'; murder <= 'D'; murder++)
//	{
//		if (((murder != 'A') + (murder == 'C') + (murder == 'D') + (murder != 'D')) == 3)
//		{
//			printf("murder is %c\n", murder);
//		}
//	}
//	return 0;
//}
//#include <stdio.h>
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	int d = 0;
//	int e = 0;
//	for (a = 1; a <= 5; a++)
//	for (b = 1; b <= 5; b++)
//	for (c = 1; c <= 5; c++)
//	for (d = 1; d <= 5; d++)
//	for (e = 1; e <= 5; e++)
//	{
//		if (((b == 2) + (a == 3) == 1) &&
//			((b == 2) + (e == 4) == 1) &&
//			((c == 1) + (d == 2) == 1) &&
//			((c == 5) + (d == 3) == 1) &&
//			((e == 4) + (a == 1) == 1) == 1)
//		{
//			if (((a != b) && (a != c) && (a != d) && (a != e))
//				&& ((b != c) && (b != d) && (b != e))
//				&& ((c != d) && (c != e))
//				&& ((d != e)))
//			{
//				printf("a=%d b=%d c=%d d=%d e=%d \n", a, b, c, d, e);
//			}
//		}
//	}
//	return 0;
//}
