#pragma once
#include<stdio.h>
#include<stdlib.h>
typedef int  SLTDataType;
typedef struct SListnode
{
	SLTDataType data;
	struct SListnode* next;
}SListnode;

//打印
void SListPrint(SListnode* plist);

//尾插
void SListPushBack(SListnode** pplist, SLTDataType x);

//尾删
void SListPopBack(SListnode** pplist);

//头插
void SListPushFront(SListnode** pplist, SLTDataType x);

//头删
void SListPopFront(SListnode** pplist);


//pos位置的后面插入一个元素
void SListInsertAfter( SListnode* pos, SLTDataType x);


//在pos位置后面删除一个元素
void SListEraseAfter(SListnode* pos);


//查找
SListnode* SListFind(SListnode* plist, SLTDataType x);