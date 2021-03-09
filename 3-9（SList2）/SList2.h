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


//定义头节点,并返回头结点
SList* SListInit();

//打印
void SListPrint(SList*plist);

//尾插
void SListPushBack(SList* plist, SLTDataType x);

//尾删
void SListPopBack(SList* plist);

//头插
void SListPushFront(SList* plist, SLTDataType x);

//头删
void SListPopFront(SList* plist);

//查找并修改
SList* SListFind(SList* plist, SLTDataType x);


//pos位置前面插
void SListInsert(SList* pos, SLTDataType x);

//删除pos位置的节点
void SListErase(SList* pos);