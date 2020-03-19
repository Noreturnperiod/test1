#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//int main()
//{
//	int a, b;
//	while (scanf("%d %d", &a, &b) != EOF)
//	{
//		if (a + b == 0)exit();
//		printf("%d\n", a + b);
//	}
//	return 0;
//}
//int main()
//{
//	int i=1;
//	while (i <= 100)
//	{
//		if (i % 2 == 1)
//			printf("%d\n", i);
//
//		i++;
//	}
//	return 0;
//}
//int main()
//{
//	int i = 0;
//	for (i = 0; i<10; i++)
//	{
//		if (i = 5)
//			printf("%d ", i);
//	}
//	return 0;
//}
//int main()
//{
//	int a, b, c, i;
//	printf("输入你想比较的三个数\n");
//	printf("a=");
//	scanf("%d",&a);
//	printf("b=");
//	scanf("%d",&b);
//	printf("c=");
//	scanf("%d",&c);
//	if (a < b)
//	{
//		i = b;
//		b = a;
//		a = i;
//	}
//	if (a < c)
//	{
//		i = c;
//		c = a;
//		a = i;
//	}
//	if (b < c)
//	{
//		i = c;
//		c = b;
//		b = i;
//	}
//	printf("%d %d %d",a,b,c);
//	return 0;
//}
//int main()
//{
//	int i = 1;
//	for (i = 1; i <= 100; i++)
//	{
//		if (i % 3 == 0)
//			printf("%d ", i);
//	}
//	return 0;
//}
//int main()
//{
//	int a, b, temp, i;
//	scanf("%d %d", &a, &b);
//	if (a < b)
//	{
//		temp = a;
//		a = b;
//		b = temp;
//	}
//	for (i = b; i>0; i--)
//	if (a%i == 0 && b%i == 0)
//	{
//		printf("%d和%d的最大公约数为：%d\n", a, b, i);
//		break;
//	}
//	return 0;
//}
//int main()
//{
//	int year;
//	for (year = 1000; year >= 1000 && year <= 2000; year++)
//	if (year % 400 == 0)
//		printf("%d", year);
//	else if (year % 4 == 0 && year % 100 != 0)
//		printf("%d ",year);
//	return 0;
//}
int main()
{
	int i,num;
	for (i = 100; i <= 200; i++)
	{
		for ( num = 2; num < i; num++)
		{
			if (i%num == 0) break;
		}
		if (num==i)
			printf("%d\t",i);
	}
}