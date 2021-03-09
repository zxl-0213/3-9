#pragma once
#include<stdio.h>
#include<stdlib.h>
typedef int  SLTDataType;
typedef struct SListnode
{
	SLTDataType data;
	struct SListnode* next;
}SListnode;

//��ӡ
void SListPrint(SListnode* plist);

//β��
void SListPushBack(SListnode** pplist, SLTDataType x);

//βɾ
void SListPopBack(SListnode** pplist);

//ͷ��
void SListPushFront(SListnode** pplist, SLTDataType x);

//ͷɾ
void SListPopFront(SListnode** pplist);


//posλ�õĺ������һ��Ԫ��
void SListInsertAfter( SListnode* pos, SLTDataType x);


//��posλ�ú���ɾ��һ��Ԫ��
void SListEraseAfter(SListnode* pos);


//����
SListnode* SListFind(SListnode* plist, SLTDataType x);