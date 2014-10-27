#include "stdio.h"

int main(void)
{
	int a, b, c, d, larger1, larger2, largest, smaller1, smaller2, smallest;

	printf("Enter four integers: ");
	scanf("%d %d %d %d", &a, &b, &c, &d);

	larger1 = a > b ? a : b;
	larger2 = c > d ? c : d;
	largest = larger1 > larger2 ? larger1 : larger2;
	smaller1 = a < b ? a : b;
	smaller2 = c < d ? c : d;
	smallest = smaller1 < smaller2 ? smaller1 : smaller2;

	if (a < b) {
		larger1 = b;
	} else {
		smaller1 = a;
	}

	if (c < d) {
		larger2 = d;
	} else {
		smaller2 = c;
	}

	largest = larger1 > larger2 ? larger1 : larger2;
	smallest = smaller1 < smaller2 ? smaller1 : smaller2;

	printf("Largest: %d\n", largest);
	printf("Smallest: %d\n", smallest);
	
	return 0;
}