//����ķ���ʵ��һ��ջ

#pragma once
#include<stdio.h>
#include<stdlib.h>
#include<assert.h>
typedef int STDataType;
typedef struct stack
{
	STDataType* a;
	int top;
	int capacity;
}stack;

//��ʼ��
void stackInit(stack* ps);

//��ջ
void stackPush(stack* ps, STDataType x);

//��ջ
void stackPop(stack* ps);


//��ȡջ��Ԫ��
STDataType stackTop(stack* ps);

//��ȡջ����ЧԪ�ظ���
int stackSize(stack* ps);


//���ջ�Ƿ�Ϊ��
int stackEmpty(stack* ps);


//����ջ
void stackDestory(stack* ps);