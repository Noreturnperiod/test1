#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include "Contact.h"
#include <string.h>

void ShowContact(pContact pc)//显示联系人信息
{
	int i = 0;
	printf("%10s\t%5s\t%5s\t%12s\t%12s\t\n", "name", "age", "sex", "tele", "addr");
	for (i = 0; i < pc->sz; i++)
	{
		printf("%10s\t%5d\t%5s\t%12s\t%12s\t\n", pc->data[i].name,
			pc->data[i].age,
			pc->data[i].sex,
			pc->data[i].tele,
			pc->data[i].addr);
	}

}
void InitContact(pContact pc)//初始化通讯录
{
	pc->sz = 0;
	memset(pc->data, 0, sizeof(pc->data));//设置内存内容
}
void AddContact(pContact pc)//增加联系人
{
	if (pc->sz == MAX)
	{
		printf("通讯录已满，无法增加新的联系人\n");
		return;
	}
	printf("请输入名字:>");
	scanf("%s", pc->data[pc->sz].name);
	printf("请输入年龄:>");
	scanf("%d", &pc->data[pc->sz].age);
	printf("请输入性别:>");
	scanf("%s", pc->data[pc->sz].sex);
	printf("请输入电话:>");
	scanf("%s", pc->data[pc->sz].tele);
	printf("请输入地址:>");
	scanf("%s", pc->data[pc->sz].addr);
	pc->sz++;
}
int Find(pContact pc, char name[])//查找
{
	int i = 0;
	for (i = 0; i < pc->sz; i++)
	{
		if (strcmp(pc->data[i].name, name) == 0)
		{
			return i;
		}
	}
	return -1;
}
void DelContact(pContact pc)//删除联系人
{
	char name[NAME_MAX] = { 0 };
	int i = 0;
	int pos = 0;
	if (pc->sz == 0)
	{
		printf("通讯录为空，无法删除\n");
		return;
	}
	//1.找到要删除的人
	printf("请输入要删除人的名字:>");
	scanf("%s", name);
	pos = Find(pc, name);
	//2.删除
	for (pos = i; pos < pc->sz - 1; pos++)
	{
		pc->data[pos] = pc->data[pos + 1];
	}
	pc->sz--;
}
int SearchContact(pContact pc)//查找指定的联系人
{
	int pos = 0;
	char name[NAME_MAX] = { 0 };
	printf("请输入要查找联系人的名字:>");
	scanf("%s", name);
	pos = Find(pc, name);
	if (pos == -1)
	{
		printf("查找的联系人不存在\n");
		return -1;
	}
	else
	{
		printf("%10s\t%5d\t%5s\t%12s\t%12s\t\n", pc->data[pos].name,
			pc->data[pos].age,
			pc->data[pos].sex,
			pc->data[pos].tele,
			pc->data[pos].addr);
		return pos;
	}
}
void ModdifyContact(pContact pc)//修改联系人的信息
{
	int ret = SearchContact(pc);
	if (ret != -1)
	{
		printf("请输入要修改联系人的信息:>");
		printf("请输入修改的名字:>");
		scanf("%s", &pc->data[ret].name);
		printf("请输入修改的年龄:>");
		scanf("%d", &pc->data[ret].age);
		printf("请输入修改的性别:>");
		scanf("%s", &pc->data[ret].sex);
		printf("请输入修改的电话:>");
		scanf("%s", &pc->data[ret].tele);
		printf("请输入修改的地址:>");
		scanf("%s", &pc->data[ret].addr);
	}
	else
	{
		printf("无法修改\n");
	}
}
void sort_contact(pContact pc)//以名字排序所有联系人 
{
	int i = 0;
	int j = 0;
	for (i = 0; i < pc->sz; i++)//冒泡法排序
	{
		for (j = 0; j < pc->sz - 1 - i; j++)
		{
			if (strcmp(pc->data[j].name, pc->data[j + 1].name)>0)
			{
				PeoInfo tmp = pc->data[j];
				pc->data[j] = pc->data[j + 1];
				pc->data[j + 1] = tmp;
			}
		}

	}
}
void ClearContact(pContact pc)// 清空所有联系人 
{
	pc->sz = 0;
	printf("已清空通讯录\n");
}