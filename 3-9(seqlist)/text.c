#include"SeqList.h"
Text1()
{
	SeqList head;
	SeqListInit(&head);

	SeqListPushBack(&head, 3);
	SeqListPushBack(&head, 2);
	SeqListPushBack(&head, 5);
	SeqListPrint(&head);

	SeqListPopBack(&head);
	SeqListPrint(&head);


	SeqListPushFront(&head, 0);
	SeqListPushFront(&head, 1);
	SeqListPrint(&head);



	SeqListPopFront(&head);
	SeqListPrint(&head);


	int ret = SeqListFind(&head, 3);
	if (ret >= 0)
		printf("�ҵ��ˣ��±�λ%d\n",ret);
	else
		printf("û�ҵ�");




	SeqListInsert(&head, 1, -1);
	SeqListPrint(&head);


	SeqListErase(&head, 2);
	SeqListPrint(&head);

	SeqListDestory(&head);
	SeqListPrint(&head);


}




int main()
{

	Text1();
	return 0;
}










