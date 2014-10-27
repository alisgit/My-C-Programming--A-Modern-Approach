#include "stdio.h"

int main(void)
{
	float commission, value, sum, competitor;
	int number;
	
	printf("Enter number of stock: ");
	scanf("%d", &number);
	printf("Enter price per stock: ");
	scanf("%f", &value);

	sum = number * value;

	if (sum < 2500.00f)
		commission = 30.00f + .017f * sum;
	else if (sum < 6250.00f)
		commission = 56.00f + .0066f * sum;
	else if (sum < 20000.00f)
		commission = 76.00f + .0034f * sum;
	else if (sum < 50000.00f)
		commission = 100.00f + .0022f * sum;
	else if (sum < 500000.00f)
		commission = 155.00f + .0011f * sum;
	else
		commission = 255.00f + .0009f * sum;

	if (commission < 39.00f)
		commission = 39.00f;

	if (number < 2000)
		competitor = number * 33.03f;
	else
		competitor = number * 33.02f;

	printf("Commission: $%.2f\n", commission);
	printf("Competitor: $%.2f\n", competitor);
	
	return 0;
}