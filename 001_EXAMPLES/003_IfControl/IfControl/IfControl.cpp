#include <stdio.h>

int main(void)
{
	int iInput;

	printf("������ ���ڸ� �����ּ���\n");
	printf("���ڸ� �Է����ּ��� : ");
	scanf_s("%d", &iInput);

	if (iInput == 7)
	{
		printf("�����Դϴ�!\n");
	}
	else if (iInput < 7)
	{
		printf("��!!! \n�Է��Ͻ� ���ڴ� ������ ������ �۽��ϴ�.\n");
	}
	else
	{
		printf("��!!! \n�Է��Ͻ� ���ڴ� ������ ������ Ů�ϴ�.\n");
	}

	return 0;
}