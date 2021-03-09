#include"SList2.h"

Text()
{
	SList* plist = SListInit();


	SListPushBack(plist, 1);
	SListPushBack(plist, 2);
	SListPushBack(plist, 3);
	SListPrint(plist);


	SListPopBack(plist);
	SListPrint(plist);



	SListPushFront(plist, -1);
	SListPushFront(plist, -2);
	SListPrint(plist);

	SListPopFront(plist);
	SListPrint(plist);

	SList* ret = SListFind(plist, 2);
	if (ret != NULL)
	{
		ret->data = 9;
		printf("找到了");
		SListPrint(plist);

	}
	else
	{
		printf("没找到");
	}

	SListInsert(plist->next->next, 5);
	SListPrint(plist);


	SListErase(plist->next->next);
	SListPrint(plist);

}
int main()
{
	Text();
	return 0;
}