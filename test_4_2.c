#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//int main()
//{
//	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	int* p = (int*)arr;
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ",*(p+i));
//	}
//	return 0;
//}
//#include<math.h>
//int main()
//{
//	int i = 1;
//	double b, c = 0, sum = 0;
//	int a = 0;
//	printf("请输入基础数字：\n");
//	scanf("%d",&a);
//	int n = 0;
//	printf("请输入结束项：\n");
//	scanf("%d", &n);
//	while (i <= n)
//	{
//		b = pow(10, i - 1);
//		c = c + a*b;
//		sum = sum + c;
//		i++;
//	}
//	printf("sum=%f", sum);
//	return 0;
//}
//#include<math.h>
//int main()
//{
//	int i = 0;
//	for (i = 0; i <= 100000; i++)
//	{
//		int n = 1;
//		int sum=0;
//		int tmp = i;
//		while (tmp / 10)
//		{
//			n++;
//			tmp /= 10;
//		}
//		tmp = i;
//		while (tmp)
//		{
//			sum += pow(tmp % 10, n);
//			tmp /= 10;
//		}
//		if (sum == i)
//		{
//			printf("%d ", i);
//		}
//	}
//	return 0;
//}
//int main()
//{
//	char str[] = "             ";
//	int i = 0, j = 0;
//	for (i = (strlen(str) / 2), j = (strlen(str) / 2); i >= 0 && j <= strlen(str); i--, j++)
//	{
//		str[i] = '*';
//		str[j] = '*';
//		printf("%s\n", str);
//	}
//	for (i = 0, j = (strlen(str) - 1); i < (strlen(str) / 2) && j >= (strlen(str) / 2); i++, j--)
//	{
//		str[i] = ' ';
//		str[j] = ' ';
//		printf("%s\n", str);
//	}
//}
/*
	* 青蛙跳台阶:
	* 1.一只青蛙一次可以跳上1级台阶，也可以跳上2级。
	* 求该青蛙跳上一个n级的台阶总共有多少种跳法?（典型的斐波那些数列）
	* 2.一只青蛙一次可以跳上1级台阶，也可以跳上2级……它也可以跳上n级。
	* 求该青蛙跳上一个n级的台阶总共有多少种跳法?
*/
//int Drink_sum(int money, int price)
//{
//	int sum = 0;
//	int temp = 0;
//	int ret = 0;
//	sum = money / price;
//	ret = sum;
//	while (ret / 2 != 0)
//	{
//		temp = ret / 2;
//		sum += temp;
//		ret = ret % 2 + ret / 2;
//	}
//	return sum;
//}
//int main()
//{
//	int money = 20;
//	int price = 1;
//	int bottle = Drink_sum(money, price);
//	printf("%d元可以喝汽水%d瓶\n", money, bottle);
//	return 0;
//}
