#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include "Contact.h"
#include <string.h>

void ShowContact(pContact pc)//��ʾ��ϵ����Ϣ
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
void InitContact(pContact pc)//��ʼ��ͨѶ¼
{
	pc->sz = 0;
	memset(pc->data, 0, sizeof(pc->data));//�����ڴ�����
}
void AddContact(pContact pc)//������ϵ��
{
	if (pc->sz == MAX)
	{
		printf("ͨѶ¼�������޷������µ���ϵ��\n");
		return;
	}
	printf("����������:>");
	scanf("%s", pc->data[pc->sz].name);
	printf("����������:>");
	scanf("%d", &pc->data[pc->sz].age);
	printf("�������Ա�:>");
	scanf("%s", pc->data[pc->sz].sex);
	printf("������绰:>");
	scanf("%s", pc->data[pc->sz].tele);
	printf("�������ַ:>");
	scanf("%s", pc->data[pc->sz].addr);
	pc->sz++;
}
int Find(pContact pc, char name[])//����
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
void DelContact(pContact pc)//ɾ����ϵ��
{
	char name[NAME_MAX] = { 0 };
	int i = 0;
	int pos = 0;
	if (pc->sz == 0)
	{
		printf("ͨѶ¼Ϊ�գ��޷�ɾ��\n");
		return;
	}
	//1.�ҵ�Ҫɾ������
	printf("������Ҫɾ���˵�����:>");
	scanf("%s", name);
	pos = Find(pc, name);
	//2.ɾ��
	for (pos = i; pos < pc->sz - 1; pos++)
	{
		pc->data[pos] = pc->data[pos + 1];
	}
	pc->sz--;
}
int SearchContact(pContact pc)//����ָ������ϵ��
{
	int pos = 0;
	char name[NAME_MAX] = { 0 };
	printf("������Ҫ������ϵ�˵�����:>");
	scanf("%s", name);
	pos = Find(pc, name);
	if (pos == -1)
	{
		printf("���ҵ���ϵ�˲�����\n");
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
void ModdifyContact(pContact pc)//�޸���ϵ�˵���Ϣ
{
	int ret = SearchContact(pc);
	if (ret != -1)
	{
		printf("������Ҫ�޸���ϵ�˵���Ϣ:>");
		printf("�������޸ĵ�����:>");
		scanf("%s", &pc->data[ret].name);
		printf("�������޸ĵ�����:>");
		scanf("%d", &pc->data[ret].age);
		printf("�������޸ĵ��Ա�:>");
		scanf("%s", &pc->data[ret].sex);
		printf("�������޸ĵĵ绰:>");
		scanf("%s", &pc->data[ret].tele);
		printf("�������޸ĵĵ�ַ:>");
		scanf("%s", &pc->data[ret].addr);
	}
	else
	{
		printf("�޷��޸�\n");
	}
}
void sort_contact(pContact pc)//����������������ϵ�� 
{
	int i = 0;
	int j = 0;
	for (i = 0; i < pc->sz; i++)//ð�ݷ�����
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
void ClearContact(pContact pc)// ���������ϵ�� 
{
	pc->sz = 0;
	printf("�����ͨѶ¼\n");
}