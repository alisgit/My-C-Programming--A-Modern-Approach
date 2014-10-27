#include "stdio.h"

int main()
{
	int a, day1, day2, month1, month2, year1, year2;

	printf("Enter first data (mm/dd/yy): ");
	scanf("%d/%d/%d", &month1, &day1, &year1);
	printf("Enter second data (mm/dd/yy): ");
	scanf("%d/%d/%d", &month2, &day2, &year2);

	if (year1 != year2) {
		a = year1 < year2 ? 1 : 2;
	} else if (month1 != month2) {
		a = month1 < month2 ? 1 : 2;
	} else {
		a = day1 < day2 ? 1 : 2;
	}
	if (a == 1) {
		printf("%d/%d/%.2d is earlier than %d/%d/%.2d", month1, day1, year1, month2, day2, year2);
	} else {
		printf("%d/%d/%.2d is earlier than %d/%d/%.2d", month2, day2, year2, month1, day1, year1);
	}

	return 0;
}