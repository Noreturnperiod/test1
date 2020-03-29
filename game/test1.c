#define _CRT_SECURE_NO_WARNINGS 1
#include"game.h"
//void init(int arr[], int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		arr[i] = i;
//	}
//}
//void print(int* arr, int sz)
//{
//	for (int i = 0; i < sz; i++)
//	{
//		printf("%d ",arr[i]);
//	}
//}
//void reverse(int* arr, int sz)
//{
//	int i = 0;
//	int tem = 0;
//	int left = 0;
//	int right = sz - 1;
//	while (left<=right)
//	{
//		tem = arr[left];
//		arr[left] = arr[right];
//		arr[right] = tem;
//		left++;
//		right--;
//	}
//	return arr;
//}
//int main()
//{
//	int i = 0;
//	int arr[10] = { 0 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	init(arr, sz);
//	print(arr, sz);
//	printf("\n");
//	reverse(arr, sz);
//	print(arr, sz);
//	return 0;
//}
void menu()
{
	printf("******************************\n");
	printf("*****       1.play       *****\n");
	printf("*****       0.exit       *****\n");
	printf("******************************\n");
}

void game()
{
	char mine[ROWS][COLS] = { 0 };//存放布置好雷的信息
	char show[ROWS][COLS] = { 0 };//存放排查出雷的信息
	InitBoard(mine, ROWS, COLS, '0');//'0' - 不是雷
	InitBoard(show, ROWS, COLS, '*');//'*' - 神秘 - 未排查
	SetMine(mine, ROW, COL);
	DisplayBoard(show, ROW, COL);
	FindMine(mine, show, ROW, COL);
}

void test()
{
	int input = 0;
	srand((unsigned int)time(NULL));
	do
	{
		menu();
		printf("请选择:>");
		scanf("%d",&input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 2:
			printf("退出游戏\n");
			break;
		default:
			printf("选择错误\n");
			break;
		}
	} while (input);
}

int main()
{
	test();
	return 0;
}