#include <stdio.h>
#include <string.h>

int main(void)
{
	char cText;
	int iNum1;
	float fNum2;
	double dNum3 = 10;
	char cStr[20] = "\0";

	cText = 'a';
	iNum1 = 1;
	fNum2 = 2.111111;
	dNum3 = 19.148019820;
	cStr[0] = 's';
	strcpy_s(cStr, "string test");

	printf("cText = %c\n", cText);
	printf("cStr[20] = %s\n", cStr);
	printf("iNum1 = %d\n", iNum1);
	printf("fNum2 = %f\n", fNum2);
	printf("dNum3 = %Le\n", dNum3);

	return 0;
}