#include"SList.h"
void SListPrint(SListnode* plist)
{
	if (plist == NULL)
		return;
	SListnode* cur = plist;
	while (cur)
	{
		printf("%d->",cur->data);
		cur = cur->next;
	}
	printf("NULL\n");
}

void SListPushBack(SListnode** pplist, SLTDataType x)
{
	SListnode* newnode = (SListnode*)malloc(sizeof(SListnode));
	if (newnode == NULL)
		printf("ÉêÇëÊ§°Ü");
	else
	{
		newnode->data = x;
		if (*pplist == NULL)
		{
			*pplist = newnode;
		}
		else
		{
			SListnode* cur = *pplist;

			while (cur->next)
			{
				cur = cur->next;
			}
			cur->next = newnode;

		}

		newnode->next = NULL;

	}

	

}

void SListPopBack(SListnode** pplist)
{
	if (*pplist == NULL)
		return;
	else
	{
		SListnode* cur = *pplist;
		SListnode* prev = cur;
		while (cur->next)
		{
			prev = cur;
			cur = cur->next;
		}
		free(cur);
		prev->next = NULL;

	}
}

void SListPushFront(SListnode** pplist, SLTDataType x)
{
	SListnode* newnode = (SListnode*)malloc(sizeof(SListnode));
	if (newnode == NULL)
	{
		printf("ÉêÇëÊ§°Ü");
		exit(-1);
	}
	
	newnode->data = x;
	if (*pplist == NULL)
	{
		newnode->next = *pplist;
	}
	SListnode* cur = *pplist;
	newnode->next = cur;
	*pplist = newnode;
	
}


void SListPopFront(SListnode** pplist)
{
	if (*pplist == NULL)
		return;
	SListnode* cur = *pplist;
	*pplist = cur->next;
	free(cur);
}


void SListInsertAfter(SListnode* pos, SLTDataType x)
{
	SListnode* newnode = (SListnode*)malloc(sizeof(SListnode));
	if (newnode == NULL)
	{
		printf("ÉêÇëÊ§°Ü");
		exit(-1);
	}
	newnode->data = x;
	SListnode* next = pos->next;
	pos->next = newnode;
	newnode->next = next;
}


void SListEraseAfter(SListnode* pos)
{
	SListnode* next = pos->next;
	SListnode* nextnext = next->next;
	free(next);
	pos->next = nextnext;
}


SListnode* SListFind(SListnode* plist, SLTDataType x)
{
	if (plist == NULL)
		return NULL;
	SListnode* cur = plist;
	while (cur)
	{
		if (cur->data == x)
			return cur;
		else
			cur = cur->next;
	}
	return NULL;
}