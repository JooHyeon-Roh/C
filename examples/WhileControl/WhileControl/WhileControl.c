#include <stdio.h>

int main(void)
{
	int iNum, iSum;

	iNum = 1;
	iSum = 0;

	while (iNum <= 50)
	{
		iSum = iSum + iNum;
		iNum = iNum + 1;
	}

	printf("1 부터 50 까지의  합 : %d\n", iSum);

	iNum = 1;
	iSum = 0;

	do
	{
		iSum = iSum + iNum;
		iNum = iNum + 1;
	} while (iNum <= 100);

	printf("1 부터 100까지의 합 : %d\n", iSum);

	return 0;
}