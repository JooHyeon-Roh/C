#include <stdio.h>

int main(void)
{
	int iInput;

	printf("임의의 숫자를 맞춰주세요\n");
	printf("숫자를 입력해주세요 : ");
	scanf_s("%d", &iInput);

	if (iInput == 7)
	{
		printf("정답입니다!\n");
	}
	else if (iInput < 7)
	{
		printf("땡!!! \n입력하신 숫자는 임의의 값보다 작습니다.\n");
	}
	else
	{
		printf("땡!!! \n입력하신 숫자는 임의의 값보다 큽니다.\n");
	}

	return 0;
}