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

	printf("1 ���� 50 ������  �� : %d\n", iSum);

	iNum = 1;
	iSum = 0;

	do
	{
		iSum = iSum + iNum;
		iNum = iNum + 1;
	} while (iNum <= 100);

	printf("1 ���� 100������ �� : %d\n", iSum);

	return 0;
}