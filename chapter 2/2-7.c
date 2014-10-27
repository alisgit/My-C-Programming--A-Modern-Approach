#include "stdio.h"

int main(void)
{
	int x, x20, x10, x5, x1;

	printf("Enter a dollar amount: ");
	scanf("%d", &x);

	x20 = x / 20;
	x10 = (x % 20) / 10;
	x5 = ((x % 20) % 10) / 5;
	x1 = (((x % 20) % 10) % 5) / 1;
	
	printf("$20 bills: %d\n", x20);
	printf("$10 bills: %d\n", x10);
	printf(" $5 bills: %d\n", x5);
	printf(" $1 bills: %d\n", x1);

	return 0;
}