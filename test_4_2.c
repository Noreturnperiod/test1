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
//	printf("������������֣�\n");
//	scanf("%d",&a);
//	int n = 0;
//	printf("����������\n");
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
	* ������̨��:
	* 1.һֻ����һ�ο�������1��̨�ף�Ҳ��������2����
	* �����������һ��n����̨���ܹ��ж���������?�����͵�쳲���Щ���У�
	* 2.һֻ����һ�ο�������1��̨�ף�Ҳ��������2��������Ҳ��������n����
	* �����������һ��n����̨���ܹ��ж���������?
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
//	printf("%dԪ���Ժ���ˮ%dƿ\n", money, bottle);
//	return 0;
//}
