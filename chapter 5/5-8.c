#include "stdio.h"

int main(void)
{
	int hour, minute, minute_total;

	printf("Enter a 24-hour time: ");
	scanf("%d:%d", &hour, &minute);

	minute_total = hour * 60 + minute;

	if (minute_total >= 172 && minute_total < 532) {
		printf("Closest departure time is 8:00 a.m., arriving at 10:16 a.m.\n");
	}
	if (minute_total >= 532 && minute_total < 631) {
		printf("Closest departure time is 9:43 a.m., arriving at 11:52 a.m.\n");
	}
	if (minute_total >= 631 && minute_total < 723) {
		printf("Closest departure time is 11:19 a.m., arriving at 1:31 p.m.\n");
	}
	if (minute_total >= 723 && minute_total < 804) {
		printf("Closest departure time is 12:47 p.m., arriving at 3:00 p.m.\n");
	}
	if (minute_total >= 804 && minute_total < 893) {
		printf("Closest departure time is 2:00 p.m., arriving at 4:08 p.m.\n");
	}
	if (minute_total >= 893 && minute_total < 983) {
		printf("Closest departure time is 3:45 p.m., arriving at 5:55 p.m.\n");
	}
	if (minute_total >= 983 && minute_total < 1162) {
		printf("Closest departure time is 7:00 p.m., arriving at 9:20 p.m.\n");
	}
	if (minute_total >= 1163 || minute_total < 172) {
		printf("Closest departure time is 9:45 p.m., arriving at 11:58 p.m.\n");
	}

	return 0;
}