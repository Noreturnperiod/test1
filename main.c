#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//int main()
//{
//	int a = 0, b = 0;
//	for (a = 1, b = 1; a <= 100; a++)
//	{
//		if (b >= 20) break;
//		if (b % 3 == 1)
//		{
//			b = b + 3;
//			continue;
//		}
//		b = b - 5;
//	}
//	printf("%d\n", a);
//	return 0;
//}
//int main()
//{
//	int i = 0;
//	int count = 0;
//	for (i = 1; i <= 100; i++)
//	{
//		if (i % 10 == 9)
//		{
//			count++;
//		}
//		if (i / 10 == 9)
//		{
//			count++;
//		}
//	}
//	printf("9�ĸ���Ϊ��%d\n",count);
//	return 0;
//}
//int main()
//{
//	int i = 0;
//	int j = 1;
//	float sum = 0.0;
//	for (i = 1; i <= 100; i++)
//	{
//		sum = sum + j*(1.0 / i);
//			j = -j;
//	}
//	printf("sum is:%f\n",sum);
//	return 0;
//}
//int main()
//{
//	int i, temp;
//	int arr[10];
//	printf("������10������:\n");
//	for (i = 0; i < 10; i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//	for (i = 0; i < 10; i++)
//	{
//		if (arr[0] < arr[i + 1])
//		{
//			temp = arr[i + 1];
//			arr[i + 1] = arr[0];
//			arr[0] = temp;
//		}
//	}
//	printf("10�������������ǣ�%d\n",arr[0]);
//	return 0;
//}
//int main()
//{
//	int i, j;
//	for (j = 1; j <= 9; j++)
//	{
//		for (i = 1; i <= j; i++)
//		{
//			printf("%d*%d=%d\t", i, j, i*j);
//		}
//		printf("\n");
//	}
//	return 0;
//}
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10};
//	int left = 0;
//	int right = sizeof(arr) / sizeof(arr[0]) - 1;
//	int key = 7;
//	int mid = 0;
//	while (left <= right)
//	{
//		mid = (left + right) / 2;
//		if (arr[mid] > key)
//		{
//			right = mid - 1;
//		}
//		else if (arr[mid] < key)
//		{
//			left = mid + 1;
//		}
//		else
//			break;
//	}
//	if (left <= right)
//		printf("�ҵ��ˣ��±�Ϊ��%d\n", mid);
//	else
//		printf("�Ҳ���\n");
//	return 0;
//}
//int main()
//{
//	int n = 0;
//	int i = 1;
//	int ret = 1;
//	int sum = 0;
//	for (n = 1; n <= 7; n++)
//	{
//		ret = 1;
//		for (i = 1; i <= n; i++)
//		{
//			ret = ret*i;
//		}
//		sum = sum + ret;
//	}
//	printf("%d\n",sum);
//	return 0;
//}
//int main()
//{
//	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	int k = 7;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		if (arr[i] == k)
//		{
//			printf("�ҵ��ˣ��±��ǣ�\n", i);
//			break;
//		}
//	}
//	if (i == sz)
//	{
//		printf("�Ҳ�����\n");
//	}
//	return 0;
//}
//#include <stdlib.h>
//#include <time.h>
//void menu()
//{
//	printf("***************************\n");
//	printf("****  1.play   0.exit  ****\n");
//	printf("***************************\n");
//}
//void game()
//{
//	int guess = 0;
//	int ret = rand() % 100 + 1;
//	while (1)
//	{
//		printf("������Ҫ�µ�����<:");
//		scanf("%d",&guess);
//		if (guess > ret)
//		{
//			printf("�´���\n");
//		}
//		else if (guess < ret)
//		{
//			printf("��С��\n");
//		}
//		else
//		{
//			printf("��ϲ�㣬�¶��ˣ�\n");
//			break;
//		}
//	}
//}
//int main()
//{
//	int input = 0;
//    srand((unsigned int)time(NULL));
//	do
//	{
//		menu();
//		printf("��ѡ��<\n");
//		scanf("%d",&input);
//		switch (input)
//		{
//		case 1:
//			game();
//			break;
//		case 0:
//			break;
//		default:
//			printf("ѡ�����������ѡ��\n");
//			break;
//		}
//	} while (input);
//	return 0;
//}
int is_leap_year(int n)
{
	if ((n % 400 == 0) || (n % 4 == 0 && n % 100 != 0))
	{
		return 1;
	}
	return 0;
}