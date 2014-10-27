#include "stdio.h"

int main(void)
{
	int x, a, b, c;

	printf("Enter a three-digit number: ");
	scanf("%d", &x);

	a = x / 100;
	b = (x % 100) / 10;
	c = (x % 100) % 10;

	printf("The reversal is: %d%d%d\n", c, b, a);

	return 0;
}