#pragma once
#include<stdio.h>
#include<malloc.h>
#include<stdlib.h>
typedef int SLDataType;
typedef struct SeqList
{
	SLDataType* array;   //动态数组名
	int size;            //元素个数
	int capacity;        //数组容量大小
}SeqList;

//初始化
void SeqListInit(SeqList* head);

//销毁
void SeqListDestory(SeqList* head);
//打印
void SeqListPrint(SeqList* head);
//尾插
void SeqListPushBack(SeqList* head, SLDataType x);
//尾删
void SeqListPopBack(SeqList* head);
//头插
void SeqListPushFront(SeqList* head, SLDataType x);
//头删
void SeqListPopFront(SeqList* head);
//查找
int SeqListFind(SeqList* head, SLDataType x);
//pos位置插
void SeqListInsert(SeqList* head,int pos, SLDataType x);

//pos位置删
void SeqListErase(SeqList* head, int pos);





