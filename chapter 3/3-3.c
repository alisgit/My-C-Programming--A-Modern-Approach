#include "stdio.h"

int main(void)
{
	int one, two, three, four, five;

	printf("Enter ISBN: ");
	scanf("%d-%d-%d-%d-%d", &one, &two, &three, &four, &five);
	
	printf("GSI prefix: %d\n", one);
	printf("Group identifier: %d\n", two);
	printf("Publisher code: %d\n", three);
	printf("Item number: %d\n", four);
	printf("Check digit: %d\n", five);
	
	return 0;
}