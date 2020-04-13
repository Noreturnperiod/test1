#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//int int_cmp(const void * p1, const void * p2)
//{
//	return (*(int * )p1 - *(int * )p2);
//}
//void _swap(void * p1, void *p2, int size)
//{
//	int i = 0;
//	for (i = 0; i < size; ++i)
//	{
//		char temp = *((char*)p1 + i);
//		*((char*)p1 + i) = *((char*)p2 + i);
//		*((char*)p2 + i) = temp;
//	}
//}
//void bubble(void *arr, int count, int size, int(*cmp)(void*, void*))
//{
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < count; i++)
//	{
//		for (j = 0; j < count - i - 1; j++)
//		{
//			if (cmp((char*)arr + j * size, (char*)arr + (j + 1) * size) > 0)
//			{
//				_swap((char*)arr + j * size, (char*)arr + (j + 1) * size, size);
//			}
//		}
//	}
//}
//void print(int ar[], int n)
//{
//	for (int i = 0; i < n; ++i)
//	{
//		printf("%d ",ar[i]);
//	}
//	printf("\n");
//}
//int main()
//{
//	int ar[] = { 1, 23, 34, 2, 4, 6, 57, 31, 14, 56 };
//	int n = sizeof(ar) / sizeof(ar[0]);
//	print(ar,n);
//	bubble(ar, n, sizeof(int), int_cmp);
//	print(ar, n);
//	return 0;
//}
//#include<stdio.h>
//#include<stdlib.h>
//#include<string.h>
//#include<assert.h>
//
//int cmp(const void* p1, const void* p2)
//{
//	assert(p1 != NULL&&p2 != NULL);
//	return (*(int*)p1) - (*(int*)p2);
//}
//
//int cmp2(const void* p1, const void* p2)
//{
//	assert(p1 != NULL&&p2 != NULL);
//	return (*(char*)p1) - (*(char*)p2);
//}
//
//int cmp3(const void* p1, const void* p2)
//{
//	assert(p1 != NULL&&p2 != NULL);
//	return strcmp((*(char**)p1), (*(char**)p2));
//}
//
//int cmp4(const void* p1, const void* p2)
//{
//	assert(p1 != NULL&&p2 != NULL);
//	return *((double*)p1) - *((double*)p2);
//}
//
//int main()
//{
//	int arr1[] = { 0, 7, 4, 23, 44, 88 };
//	qsort(arr1, sizeof(arr1) / sizeof(arr1[0]), sizeof(arr1[0]), cmp);
//	for (int i = 0; i < sizeof(arr1) / sizeof(arr1[0]); i++)
//	{
//		printf("%d ", arr1[i]);
//	}
//	printf("\n");
//
//	char arr2[] = { 'a', 'b', 'y', 'o', 'D', 'w' };
//	qsort(arr2, sizeof(arr2) / sizeof(arr2[0]), sizeof(arr2[0]), cmp2);
//	for (int i = 0; i < sizeof(arr2) / sizeof(arr2[0]); i++)
//	{
//		printf("%c ", arr2[i]);
//	}
//	printf("\n");
//
//	char* arr3[] = { "Can", "I", "yours", "be" };
//	qsort(arr3, sizeof(arr3) / sizeof(arr3[0]), sizeof(arr3[0]), cmp3);
//	for (int i = 0; i < sizeof(arr3) / sizeof(arr3[0]); i++)
//	{
//		printf("%s ", arr3[i]);
//	}
//	printf("\n");
//
//	double arr4[] = { 0.0, 35.72, 14.5, 16.6, 50.9 };
//	qsort(arr4, sizeof(arr4) / sizeof(arr4[0]), sizeof(arr4[0]), cmp4);
//	for (int i = 0; i < sizeof(arr4) / sizeof(arr4[0]); i++)
//	{
//		printf("%f ", arr4[i]);
//	}
//	printf("\n");
//
//	return 0;
//}
//#include<stdio.h>
//#include<string.h>
//void left_move(char *str, int k)
//{
//	while (k != 0)
//	{
//		char *cur = str;
//		char tmp = *cur;
//		while ((*(cur + 1)) != '\0')
//		{
//			*cur = *(cur + 1);
//			cur++;
//		}
//		*cur = tmp;
//		k--;
//	}
//}
//int Judge_string(char *str, const char *p)
//{
//	if (strlen(str) != strlen(p))
//		return 0;
//	for (int i = 0; i < strlen(str); ++i)
//	{
//		left_move(str, 1);
//		if (strcmp(str, p) == 0)
//			return 1;
//	}
//	return 0;
//}
//int main()
//{
//	char arr[] = "abcdef";
//	char arr1[] = "cdefab";
//	int ret = Judge_string(arr, arr1);
//	if (ret == 0)
//		printf("arr1不是arr旋转得到的\n");
//	else
//		printf("arr1是arr旋转得到的\n");
//	return 0;
//}
//#include<stdio.h>
//#include<string.h>
//char* Left_move(char *str, int k)
//{
//	while (k != 0)
//	{
//		char *cur = str;
//		char tmp = *cur;
//		while ((*(cur + 1)) != '\0')
//		{
//			*cur = *(cur + 1);
//			cur++;
//		}
//		*cur = tmp;
//		k--;
//	}
//	return str;
//}
//int main()
//{
//	int k = 0;
//	char arr[] = "adbcjik";
//	printf("请输入要旋转几个字符:>");
//	scanf("%d",&k);
//	Left_move(arr,k);
//	printf("%s",arr);
//	return 0;
//}
//#include<stdio.h>
//#include<stdlib.h>
//#define ROW 3
//#define COL 3
//int Findnum(int arr[ROW][COL], int row, int col, int key)
//{
//	int left = 0;
//	int right = col - 1;
//	while (right >= 0 && left < col)
//	{
//		if (arr[left][right] < key)
//			left++;
//		if (arr[left][right] > key)
//			right--;
//		if (arr[left][right] == key)
//			return 1;
//	}
//	return 0;
//}
//int main()
//{
//	int arr[ROW][COL] = { 1, 2, 3, 4, 5, 6, 7, 8, 9 };
//	printf("请输入你想查找的数字:>");
//	int key = 0;
//	scanf("%d",&key);
//	int ret = Findnum(arr, ROW, COL, key);
//	if (ret == 1)
//		printf("找到了\n");
//	if (ret == 0)
//		printf("找不到\n");
//	return 0;
//}
#include<stdio.h>
#include<assert.h>
//char *my_strcat(char *dest,const char *str)
//{
//	assert(dest != NULL && str != NULL);
//	char *pDest = dest;
//	while (*pDest != '\0')
//		pDest++;
//	while (*str != '\0')
//		*pDest++ = *str++;
//	*pDest = '\0';
//	return dest;
//}
//int main()
//{
//	char arr[10] = "abcd";
//	char arr1[] = "efgh";
//	printf("%s\n",my_strcat(arr,arr1));
//	return 0;
//}
//int my_strcmp(const char *string1, const char *string2)
//{
//	assert(string1 != NULL && string2 != NULL);
//	int res = 0;
//	while (*string1 != '\0' || *string2 != '\0')
//	{
//		if ((res = *string1 - *string2) != 0)
//			break;
//		string1++;
//		string2++;
//	}
//	if (res > 0)
//		return 1;
//	else if (res < 0)
//		return -1;
//	return res;
//}
//int main()
//{
//	char arr[] = "Hello bit";
//	char arr1[] = "hello bit.";
//	printf("res = %d\n",my_strcmp(arr,arr1));
//	return 0;
//}
//char *my_strcpy(char *dest,const char *str)
//{
//	assert(dest != NULL && str != NULL);
//	char *pDest = dest;
//	while (*str != '\0')
//	{
//		*pDest++ = *str++;
//	}
//	*pDest = '\0';
//	return dest;
//}
//int main()
//{
//	char arr[32] = "Hello bit";
//	char arr1[] = "Linux";
//	printf("%s\n",my_strcpy(arr, arr1));
//	return 0;
//}
size_t my_strlen(const char *string)
{
	assert(string != NULL);
	if (*string == '\0')
		return 0;
	else
		return my_strlen(string + 1) + 1;
}
int main()
{
	char ar[] = "abcdefj";
	int res = my_strlen(ar);
	printf("res = %d\n",res);
	return 0;
}