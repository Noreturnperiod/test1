#define _CRT_SECURE_NO_WARNINGS 1
//int main()
//{
//	int m;
//	scanf("%d",&m);
//	int arr[32];
//	int i = 0;
//	for (i = 0; i < 32; i++)
//	{
//		arr[i] = m % 2;
//		m /= 2;
//	}
//	printf("偶数：\n");
//	for (i = 31; i >= 0; i -= 2)
//	{
//		printf("%d",arr[i]);
//	}
//	printf("\n");
//	printf("奇数：\n");
//	for (i = 30; i >= 0; i -= 2)
//	{
//		printf("%d",arr[i]);
//	}
//	return 0;
//}
//int main()
//{
//	int m = 5;
//	int n = 3;
//	m = m^n;
//	n = m^n;
//	m = m^n;
//	printf("m=%d  n=%d\n",m,n);
//	return 0;
//}
//#include <stdio.h>
//#include <string.h>
//void move(char x, char y);
//void hannuo(int n, char one, char two, char three)
//{
//	void move(char x, char y);
//	if (n == 1)move(one, three);
//	else
//	{
//		hannuo(n - 1, one, three, two);
//		move(one, three);
//		hannuo(n - 1, two, one, three);
//
//	}
//}
//void move(char x, char y)
//{
//	printf("%c--->%c\n", x, y);
//}
//
//int main()
//{
//	int n;
//	printf("input your number>:");
//	scanf("%d", &n);
//	hannuo(n, 'A', 'B', 'C');
//	return 0;
//
//}
#include<stdio.h>

//double power(int n, int k)
//
//{
//
//
//	if (k == 0)
//
//		return 1;
//
//	else if (k > 0)
//	{
//
//		return n*power(n, k - 1);
//
//	}
//
//	else
//	{
//
//		return 1.0 / power(n, -k);
//
//	}
//
//}
//
//int main()
//
//{
//
//	int n = 0;
//
//	int k = 0;
//
//	scanf("%d", &n);
//
//	scanf("%d", &k);
//
//	printf("n的k次方为：%lf\n", power(n, k));
//
//	return 0;
//
//}
//int NumberOf1(int n)
//{
//	int i = 0;
//	int count = 0;
//	for (i = 0; i < 32; i++)
//	{
//		if (((n >> i) & 1) == 1)
//			count++;
//	}
//	return count;
//}
//int main()
//{
//	int num = 0;
//	scanf("%d", &num);
//    int ret = NumberOf1(num);
//	printf("%d\n", ret);
//	return 0;
//}
//int main()
//{
//	int a;//局部变量-随机值
//	printf("%d\n", a);
//	a++;
//}
//int main()
//{
//	int a = 10;
//	int *p = NULL;//初始化
//	//使用p访问了a
//	//...
//	p = &a;
//	if (p != NULL)
//		*p = 20;
//	return 0;
//}