#include <stdio.h>

int main(void)
{
	float x, x2, x3, x4, x5, v;

	scanf("%f", &x);

	x2 = x * x;
	x3 = x2 * x;
	x4 = x3 * x;
	x5 = x4 * x;
	v = (3 * x5) + (2 * x4) - (5 * x3) - x2 + (7 * x) - 6 ;
	
	printf("%f\n", x);
	printf("%f\n", x2);
	printf("%f\n", x3);
	printf("%f\n", x4);
	printf("%f\n", x4);
	printf("%f\n", v);

	return 0;
}