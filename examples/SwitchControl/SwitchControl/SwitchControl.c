#include <stdio.h>

int main(void)
{
	int iInput;

	printf("���ڸ� �Է����ּ��� : ");
	scanf_s("%d", &iInput);

	switch (iInput)
	{
	case 1:
		printf("���� 1�� �Է��Ͽ����ϴ�\n");
		break;
	case 2:
		printf("���� 1�� �Է��Ͽ����ϴ�\n");
		break;
	default:
		printf("1�� 2�� �ƴ� �ٸ� ���ڸ� �Է��Ͽ����ϴ�.\n");
		break;
	}

	return 0;
}