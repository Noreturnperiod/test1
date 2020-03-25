#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//#include<math.h>
//int is_prime(int n)
//{
//	int i = 0;
//	for (i = 2; i <= sqrt(n); i++)
//	{
//		if (n%i == 0)
//			return 0;
//	}
//	return 1;
//}
//int main()
//{
//	int i = 0;
//	int count = 0;
//	for (i = 101; i <= 200; i = i + 2)
//	{
//		if (is_prime(i) == 1)
//		{
//			count++;
//			printf("%d ",i);
//		}
//	}
//	printf("\ncount:%d\n",count);
//	return 0;
//}
//int is_leap_year(int y)
//{
//	return ((y % 4 == 0 && y % 100 != 0) || y % 400 == 0);
//}
//int main()
//{
//	int year = 0;
//	int count = 0;
//	for (year = 1000; year <= 2000; year++)
//	{
//		if (is_leap_year(year) == 1)
//		{
//			count++;
//			printf("%d ",year);
//		}
//	}
//	printf("\ncount:%d\n",count);
//	return 0;
//}
//void swap(int* pa,int* pb)
//{
//	int temp;
//	temp = *pa;
//	*pa = *pb;
//	*pb = temp;
//}
//int main()
//{
//	int a, b;
//	scanf("%d %d",&a,&b);
//	swap(&a, &b);
//	printf("a=%d b=%d\n",a,b);
//	return 0;
//}
//int mul(n)
//{
//	int i,j;
//	for (i= 1; i <= n; i++)
//	{
//		for (j = 1; j <= i; j++)
//		{
//			printf("%d*%d=%-2d  ",i,j,i*j);
//		}
//		printf("\n");
//	}
//}
//int main()
//{
//	int n = 0;
//	printf("请输入选择的行数<:\n");
//	scanf("%d",&n);
//	mul(n);
//	return 0;
//}
//int main()
//{
//	int i;
//	int n,a,sum = 0;
//	while (scanf("%d", &n)!=EOF)
//	{
//		sum = 0;
//		while (n--)
//		{
//			scanf("%d",&a);
//			sum+=a;
//		}
//		printf("%d\n",sum);
//	}
//	return 0;
//}
