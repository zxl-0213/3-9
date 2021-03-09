//数组的方法实现一个栈

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

//初始化
void stackInit(stack* ps);

//入栈
void stackPush(stack* ps, STDataType x);

//出栈
void stackPop(stack* ps);


//获取栈顶元素
STDataType stackTop(stack* ps);

//获取栈中有效元素个数
int stackSize(stack* ps);


//检测栈是否为空
int stackEmpty(stack* ps);


//销毁栈
void stackDestory(stack* ps);