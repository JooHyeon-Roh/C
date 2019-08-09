#include <stdio.h>

int main(void)
{
	int iNum1;
	
	printf("숫자를 입력해주세요 : ");
	scanf_s("%d", &iNum1);
	printf("입력한 숫자는 %d입니다\n", iNum1);

	printf("*\n");
	printf("**\n");
	printf("***\n");
	printf("****\n");
	printf("*****\n");

	printf("*****\n");
	printf("****\n");
	printf("***\n");
	printf("**\n");
	printf("*\n");

	return 0;
}