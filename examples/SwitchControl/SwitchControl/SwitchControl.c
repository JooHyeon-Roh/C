#include <stdio.h>

int main(void)
{
	int iInput;

	printf("숫자를 입력해주세요 : ");
	scanf_s("%d", &iInput);

	switch (iInput)
	{
	case 1:
		printf("숫자 1을 입력하였습니다\n");
		break;
	case 2:
		printf("숫자 1을 입력하였습니다\n");
		break;
	default:
		printf("1과 2가 아닌 다른 숫자를 입력하였습니다.\n");
		break;
	}

	return 0;
}