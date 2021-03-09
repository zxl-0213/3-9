#include"SList2.h"



SList* SListInit()
{
	SList* head = (SList*)malloc(sizeof(SList));
	if (head == NULL)
	{
		printf("ÉêÇëÊ§°Ü");
		exit(-1);
	}
	head->next = head;
	head->prev = head;
	head->data = 0;
	return head;
}



void SListPrint(SList* plist)
{
	SList* cur = plist->next;
	
	while (cur != plist)
	{
		printf("%d->",cur->data);
		cur = cur->next;
	}
	printf("NULL\n");
}


void SListPushBack(SList* plist, SLTDataType x)
{
	SList* newnode = (SList*)malloc(sizeof(SList));
	if (newnode == NULL)
	{
		printf("ÉêÇëÊ§°Ü");
		exit(-1);
	}	

	newnode->data = x;
	SList* cur = plist->prev;
	cur->next = newnode;
	newnode->prev = cur;
	plist->prev = newnode;
	newnode->next = plist;
}


void SListPopBack(SList* plist)
{
	SList* tail = plist->prev;
	plist->prev = tail->prev;
	tail->prev->next = plist;
	free(tail);
}

void SListPushFront(SList* plist, SLTDataType x)
{
	SList* newnode = (SList*)malloc(sizeof(SList));
	if (newnode == NULL)
	{
		printf("ÉêÇëÊ§°Ü");
		exit(-1);
	}
	newnode->data = x;
	newnode->next = plist->next;
	newnode->prev = plist;
	plist->next->prev = newnode;
	plist->next = newnode;
}



void SListPopFront(SList* plist)
{
	SList* cur = plist->next->next;
	plist->next = cur;
	cur->prev = plist;
}

SList* SListFind(SList* plist, SLTDataType x)
{
	SList* cur = plist->next;
	while (cur != plist)
	{
		if (cur->data == x)
			return cur;
		else
			cur = cur->next;
	}
	return NULL;
}


void SListInsert(SList* pos, SLTDataType x)
{
	SList* newnode = (SList*)malloc(sizeof(SList));
	if (newnode == NULL)
	{
		printf("ÉêÇëÊ§°Ü");
		exit(-1);
	}
	newnode->data = x;
	SList* cur = pos->prev;
	newnode->next = pos;
	newnode->prev = cur;
	cur->next = newnode;
	pos->prev = newnode;
	
}

void SListErase(SList* pos)
{
	SList* cur = pos->prev;
	cur->next = pos->next;
	pos->next->prev = cur;
	free(pos);

}