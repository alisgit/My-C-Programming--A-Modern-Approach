#include "stdio.h"

int main(void)
{
	int hour, minute;

	printf("Enter a 24-hour time: ");
	scanf("%d:%d", &hour, &minute);

	if (hour >= 0 && hour < 12) {
		printf("Equivalent 12-hour time: %d:%.2d AM\n", hour, minute);
	} else if (hour == 12 && minute == 00) {
		printf("Equivalent 12-hour time: 12:00 AM\n");
	} else {
		printf("Equivalent 12-hour time: %d:%.2d PM\n", hour-12, minute);
	}
	
	return 0;
}