#include"SList.h"
int main()
{
	SListnode* plist = NULL;


	SListPushBack(&plist, 1);
	SListPushBack(&plist, 2);
	SListPushBack(&plist, 3);
	SListPrint(plist);


	SListPopBack(&plist);
	SListPrint(plist);


	SListPushFront(&plist, -1);
	SListPushFront(&plist, -0);
	SListPrint(plist);



	SListPopFront(&plist);
	SListPrint(plist);

	SListInsertAfter(plist->next, 9);
	SListPrint(plist);

	SListEraseAfter(plist);
	SListPrint(plist);


	SListnode* find= SListFind(plist,9);
	if (find != NULL)
	{
		find->data = 1;
		SListPrint(plist);

		printf("找到了");
	}
	else
	{
		printf("找不到");
	}



	return 0;
}