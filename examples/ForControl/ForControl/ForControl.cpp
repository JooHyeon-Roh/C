#include <stdio.h>

int main(void)
{
	int iAuto, i, j;

	for (iAuto = 0; iAuto < 10; iAuto+=3)
	{
		printf("%d\n", iAuto);
	}
	printf("\n\n");

	printf("*\n");
	printf("**\n");
	printf("***\n");
	printf("****\n\n\n");

	for (i = 0; i < 4; ++i)
	{
		for (j = 0; j <= i; ++j)
		{
			printf("*");
		}
		printf("\n");
	}

	printf("****\n");
	printf("***\n");
	printf("**\n");
	printf("*\n");

	for (i = 0; i < 4; ++i)
	{
		for (j = 4 - i; j > 0; --j)
		{
			printf("*");
		}
		printf("\n");
	}

	return 0;
}