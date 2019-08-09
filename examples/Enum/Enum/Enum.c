#include <stdio.h>

enum WEEK
{
	MON,
	TUE,
	WED,
	THUR,
	FRI,
	SAT,
	SUN
};

enum WEEK2
{
	MON2 = 1,
	TUE2,
	WED2,
	THUR2,
	FRI2,
	SAT2,
	SUN2
};

enum _WEEK3
{
	MON3 = 10,
	TUE3,
	WED3,
	THUR3,
	FRI3,
	SAT3,
	SUN3
}WEEK3;

int main(void)
{
	enum WEEK today;

	today = FRI;

	printf("%d\n\n", today);

	enum WEEK2 today2;

	today2 = FRI2;

	printf("%d\n\n", today2);

	WEEK3 = FRI3;
	
	printf("%d\n\n", WEEK3);

	return 0;
}