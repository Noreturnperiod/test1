#ifndef _SEQLIST_H_
#define _SEQLIST_H_

#include"common.h"

#define _SEQLIST_H_DEFAULT_SIZE 8
typedef struct SeqList
{
	ElemType *base;
	size_t capacity;
	size_t size;
}SeqList;

#endif /*_SEQLIST_H_*/

///////////���������ӿ�
static bool _Inc(SeqList *pst);

void SeqListInit(SeqList *pst);
bool IsFull(SeqList *pst);
bool IsEmpty(SeqList *pst);
void SeqListPushBack(SeqList *pst,ElemType x);
void SeqListPushFront(SeqList *pst,ElemType x);
void SeqListPopBack(SeqList *pst);
void SeqListPopFront(SeqList *pst);

void SeqListInsertByPos(SeqList *pst, int pos, ElemType x);
void SeqListInsertByVal(SeqList *pst, ElemType x);
void SeqListDeleteByPos(SeqList *pst, int pos);
void SeqListDeleteByVal(SeqList *pst, ElemType key);
void SeqListRemoveAll(SeqList *pst, ElemType key);
void SeqListSort(SeqList *pst);
int SeqListFind(SeqList *pst, ElemType key); 
void SeqListReverse(SeqList *pst);

size_t SeqListLength(SeqList *pst);
size_t SeqListCapacity(SeqList *pst);
void SeqListClear(SeqList *pst);
void SeqListShow(SeqList *pst);
void SeqListDestroy(SeqList *pst);

////////////�����ӿ�ʵ��

static bool _Inc(SeqList *pst)
{
	ElemType *new_base = (ElemType *)realloc(pst->base,sizeof(ElemType)*pst->capacity * 2);
	if (new_base == NULL)
		return false;
	pst->base = new_base;
	pst->capacity *= 2;
	return true;
}

void SeqListInit(SeqList *pst)
{
	assert(pst != NULL);
	pst->base = (ElemType *)malloc(sizeof(ElemType)*_SEQLIST_H_DEFAULT_SIZE);
	assert(pst->base != NULL);
	memset(pst->base, 0, sizeof(ElemType)*_SEQLIST_H_DEFAULT_SIZE);
	pst->capacity = _SEQLIST_H_DEFAULT_SIZE;
	pst->size = 0;
}

bool IsFull(SeqList *pst)
{assert(pst != NULL); return pst->size >= pst->capacity;}
bool IsEmpty(SeqList *pst)
{assert(pst != NULL); return pst->size == 0;}

void SeqListPushBack(SeqList *pst, ElemType x)
{
	assert(pst != NULL);
	if (IsFull(pst) && !_Inc(pst))
	{
		//�ռ����˲����ݲ��ɹ�
		printf("˳���ռ�����,���ܲ������� %d\n", x);
		return;
	}
	pst->base[pst->size++] = x;
}

void SeqListPushFront(SeqList *pst, ElemType x)
{
	assert(pst != NULL);
	if (IsFull(pst) && !_Inc(pst))
	{
		printf("˳���ռ�����,���ܲ������� %d\n", x);
		return;
	}
	for (size_t pos = pst->size; pos > 0; --pos)
		pst->base[pos] = pst->base[pos - 1];
	pst->base[0] = x;
	pst->size++;
}

void SeqListPopBack(SeqList *pst)
{
	assert(pst != NULL);
	if (IsEmpty(pst))
	{
		printf("˳���Ϊ�գ�����ɾ��β��Ԫ�ء�\n");
		return;
	}
	pst->size--;
}

void SeqListPopFront(SeqList *pst)
{
	assert(pst != NULL);
	if (IsEmpty(pst))
	{
		printf("˳���Ϊ�գ�����ɾ��ͷ��Ԫ�ء�\n");
		return;
	}
	for (int i = 0; i < pst->size; ++i)
		pst->base[i] = pst->base[i + 1];
	pst->size--;
}

void SeqListInsertByPos(SeqList *pst, int pos, ElemType x)
{
	assert(pst != NULL);
	if (pos<0 || pos>pst->size)
	{
		printf("Ҫ�����λ�÷Ƿ���%d ���ܲ��롣\n",x);
		return;
	}
	if (IsFull(pst) && !_Inc(pst))
	{
		printf("˳���ռ�����,���ܰ�λ�ò������� %d\n", x);
		return;
	}
	for (int i = pst->size; i > pos; --i)
		pst->base[i] = pst->base[i - 1];
	pst->base[pos] = x;
	pst->size++;
}

void SeqListDeleteByPos(SeqList *pst, int pos)
{
	assert(pst != NULL);
	if (pos<0 || pos>pst->size)
	{
		printf("Ҫɾ�����ݵ�λ�÷Ƿ������ܰ�λ��ɾ�����ݡ�\n");
		return;
	}
	if (IsEmpty(pst))
	{
		printf("˳����ѿ�,���ܰ�λ��ɾ��Ԫ�ء�\n");
		return;
	}
	for (int i = pos; i < pst->size; ++i)
		pst->base[i] = pst->base[i + 1];
	pst->size--;
}

void SeqListDeleteByVal(SeqList *pst, ElemType key)
{
	assert(pst != NULL);
	if (IsEmpty(pst))
	{
		printf("˳����ѿ�,���ܰ�ֵɾ��Ԫ�ء�\n");
		return;
	}
	int pos = SeqListFind(pst, key);
	if (pos == -1)
	{
		printf("Ҫɾ�������ݲ�����,����ɾ��.\n");
		return;
	}
	SeqListDeleteByPos(pst, pos);
}

void SeqListInsertByVal(SeqList *pst, ElemType x)
{
	assert(pst != NULL);
	if (IsFull(pst) && !_Inc(pst))
	{
		printf("˳���ռ�����,���ܰ�ֵ�������� %d\n");
		return;
	}

	int end = pst->size;
	while (end>0 && x<pst->base[end - 1])
	{
		pst->base[end] = pst->base[end - 1];
		end--;
	}
	pst->base[end] = x;
	pst->size++;
}

void SeqListSort(SeqList *pst)
{
	assert(pst != NULL);
	if (pst->size <= 1)
		return;
	for (int i = 0; i < pst->size - 1; ++i)
	{
		for (int j = 0; j < pst->size - i - 1; ++j)
		{
			if (pst->base[j] > pst->base[j+1])
			{
				ElemType tmp = pst->base[j];
				pst->base[j] = pst->base[j + 1];
				pst->base[j + 1] = tmp;
			}
		}
	}
}

int SeqListFind(SeqList *pst, ElemType key)
{
	assert(pst != NULL);
	for (int i = 0; i < pst->size; ++i)
	{
		if (key == pst->base[i]);
		return i;
	}
	return -1;
}

void SeqListReverse(SeqList *pst)
{
	assert(pst != NULL);
	if (pst->size < 2)
		return;
	int left = 0;
	int right = pst->size - 1;
	while (left < right)
	{
		Swap(&pst->base[left], &pst->base[right]);
		left++;
		right--;
	}
}

size_t SeqListLength(SeqList *pst)
{
	assert(pst != NULL);
	return pst->size;
}

size_t SeqListCapacity(SeqList *pst)
{
	assert(pst != NULL);
	return pst->capacity;
}

void SeqListClear(SeqList *pst)
{
	assert(pst != NULL);
	pst->size = 0;
}

void SeqListShow(SeqList *pst)
{
	assert(pst != NULL);
	for (size_t i = 0; i<pst->size; ++i)
		printf("%d ", pst->base[i]);
	printf("\n");
}

void SeqListDestroy(SeqList *pst)
{
	assert(pst != NULL);
	if (pst->base)
		free(pst->base);
	pst->base = NULL;
	pst->capacity = pst->size = 0;
}

void SeqListRemoveAll(SeqList *pst, ElemType key)
{
	int gap = 0;
	for (int i = 0; i < pst->size; ++i)
	{
		if (pst->base[i] == key)
			gap++;
		else
			pst->base[i - gap] = pst->base[i];
	}
	pst->size -= gap;
}
