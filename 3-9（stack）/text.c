#include"stack.h"

void Text()
{
	stack ps;
	stackInit(&ps);


	stackPush(&ps, 1);
	stackPush(&ps, 2);
	stackPush(&ps, 3);


	stackPop(&ps);


	STDataType ret0=stackTop(&ps);


	int ret = stackSize(&ps);



	int ret1 = stackEmpty(&ps);


	stackDestory(&ps);





}
int main()
{
	Text();
	return 0;
}