#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d,%d",&a,&b);
//	if (a < b)
//	{
//		printf("%d<%d\n",a,b);
//	}
//	else if (a == b)
//	{
//		printf("ПаµИ\n");
//	}
//	else
//	{
//		printf("%d>%d\n",a,b);
//	}
//	return 0;
}
#include <stdio.h>
int max(int x, int y)
{
	int z;
	if (x > y)z = x;
	else z = y;
	getchar();
	return(z);
}
int main()
{

	int max(int x, int y);
	int a, b, c;
	scanf("%d,%d", &a, &b);
	c = max(a, b);
	printf("max=%d\n", c);
	getchar();
	return 0;
}
