#pragma once
#include<stdio.h>
#include<malloc.h>
#include<stdlib.h>
typedef int SLDataType;
typedef struct SeqList
{
	SLDataType* array;   //��̬������
	int size;            //Ԫ�ظ���
	int capacity;        //����������С
}SeqList;

//��ʼ��
void SeqListInit(SeqList* head);

//����
void SeqListDestory(SeqList* head);
//��ӡ
void SeqListPrint(SeqList* head);
//β��
void SeqListPushBack(SeqList* head, SLDataType x);
//βɾ
void SeqListPopBack(SeqList* head);
//ͷ��
void SeqListPushFront(SeqList* head, SLDataType x);
//ͷɾ
void SeqListPopFront(SeqList* head);
//����
int SeqListFind(SeqList* head, SLDataType x);
//posλ�ò�
void SeqListInsert(SeqList* head,int pos, SLDataType x);

//posλ��ɾ
void SeqListErase(SeqList* head, int pos);





