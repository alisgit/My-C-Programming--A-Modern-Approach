#include "stdio.h"

int main(void)
{
	int x, a, b, c, d, e;

	printf("Enter a number between 0 and 32767: ");
	scanf("%d", &x);

	a = x % 8;
	b = x / 8 % 8;
	c = x / 8 / 8 % 8;
	d = x / 8 / 8 / 8;
	e = x / 8 / 8 / 8 / 8;

	printf("In octal, your number is: %d%d%d%d%d", e, d, c, b, a);

	return 0;
}