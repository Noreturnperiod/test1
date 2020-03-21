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
//	printf("9的个数为：%d\n",count);
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
//	printf("请输入10个整数:\n");
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
//	printf("10个整数中最大的是：%d\n",arr[0]);
//	return 0;
//}
int main()
{
	int i, j;
	for (j = 1; j <= 9; j++)
	{
		for (i = 1; i <= j; i++)
		{
			printf("%d*%d=%d\t", i, j, i*j);
		}
		printf("\n");
	}
	return 0;
}