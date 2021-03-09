#include"stack.h"

void stackInit(stack* ps)
{
	ps->a = (STDataType*)malloc(sizeof(STDataType)*4);
	ps->top = 0;
	ps->capacity = 4;
}

void stackPush(stack* ps, STDataType x)
{
	ps->a[ps->top] = x;
	ps->top++;
}

void stackPop(stack* ps)
{
	assert(ps && ps->top > 0);
	ps->top--;
}

STDataType stackTop(stack* ps)
{
	return ps->a[ps->top - 1 ];
}

int stackSize(stack* ps)
{
	assert(ps);
	return ps->top;
}


int stackEmpty(stack* ps)
{
	return ps->top == 0 ? 1 : 0;
}


void stackDestory(stack* ps)
{
	assert(ps);
	free(ps->a);
	ps->a = NULL;
	ps->top = ps->capacity= 0;
}


