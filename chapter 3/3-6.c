#include "stdio.h"

int main(void)
{
	int a1, b1, a2, b2, m, n;
	scanf("%d/%d+%d/%d", &a1, &b1, &a2, &b2);

	m = a1 * b2 + a2 * b1;
	n = b1 * b2;

	printf("The sum is %d/%d\n", m, n);

	return 0;
}