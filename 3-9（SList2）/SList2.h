#pragma once
#include<stdio.h>
#include<stdlib.h>
#include<assert.h>
typedef int SLTDataType;
typedef struct SList
{
	SLTDataType data;
	struct SList* next;
	struct SList* prev;
}SList;


//����ͷ�ڵ�,������ͷ���
SList* SListInit();

//��ӡ
void SListPrint(SList*plist);

//β��
void SListPushBack(SList* plist, SLTDataType x);

//βɾ
void SListPopBack(SList* plist);

//ͷ��
void SListPushFront(SList* plist, SLTDataType x);

//ͷɾ
void SListPopFront(SList* plist);

//���Ҳ��޸�
SList* SListFind(SList* plist, SLTDataType x);


//posλ��ǰ���
void SListInsert(SList* pos, SLTDataType x);

//ɾ��posλ�õĽڵ�
void SListErase(SList* pos);