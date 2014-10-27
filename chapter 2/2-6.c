#include "stdio.h"

int main(void)
{
	float x, v;

	scanf("%f", &x);

	v = ((((3 * x + 2) * x - 5) * x - 1) * x + 7) * x - 6;
	
	printf("%f\n", v);
	
	return 0;
}