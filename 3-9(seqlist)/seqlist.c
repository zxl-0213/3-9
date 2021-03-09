#include"SeqList.h"
void SeqListInit(SeqList* head)
{
	
	head->array = (SLDataType*)malloc(sizeof(SLDataType)*4);
	if (head->array == NULL)
	{
		printf("ÉêÇëÄÚ´æÊ§°Ü");
		exit(-1);
	}
	head->size = 0;
	head->capacity = 4;
}
void SeqListPrint(SeqList* head)
{
	for(int i=0;i<head->size;i++)
	{
		printf("%d", head->array[i]);	
	}
	printf("\n");
}

void SeqListPushBack(SeqList* head, SLDataType x)
{
	if (head->size >= head->capacity)
	{
		head->capacity *= 2;
		head->array=(SLDataType*)realloc(head->array,sizeof(SLDataType)*(head->capacity));
	}
	head->array[head->size] = x;
	head->size++;
}
void SeqListPopBack(SeqList* head)
{
	//head->array[head->size - 1] = 0;
	head->size--;
}

void SeqListPushFront(SeqList* head, SLDataType x)
{
	for(int i=head->size;i>0;i--)
	{
		head->array[i] = head->array[i-1];
		
	}
	head->array[0] = x;
	head->size++;
}

void SeqListPopFront(SeqList* head)
{
	for (int i=0;i<head->size-1;i++)
	{
		head->array[i] = head->array[i+1];
	}
	head->size--;
}


int SeqListFind(SeqList* head, SLDataType x)
{
	for (int i = 0; i < head->size; i++)
	{
		if (head->array[i] == x)
			return i;
	}
	return -1;
}



void SeqListInsert(SeqList* head, int pos, SLDataType x)
{
	for (int i = head->size; i >pos ; i--)
	{
		head->array[i] = head->array[i-1];
	}
	head->array[pos] = x;
	head->size++;
}


void SeqListErase(SeqList* head, int pos)
{
	for (int i = pos; i < head->size-1; i++)
	{
		head->array[i] = head->array[i+1];
	}
	head->size--;
}

void SeqListDestory(SeqList* head)
{
	head->size = 0;
	head->array = NULL;
	head->capacity = 0;
	free(head->array);
}










