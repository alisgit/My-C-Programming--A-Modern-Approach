#include "stdio.h"

int main(void)
{
	int item, month, day, year;
	float unit_price;

	printf("Enter intem number: ");
	scanf("%d", &item);
	printf("Enter unit price: ");
	scanf("%f", &unit_price);
	printf("Enter purchase date (mm/dd/yyyy): ");
	scanf("%d/%d/%d", &month, &day, &year);

	printf("Item\tUnit Price\tPurchase Date\t\n");
	printf("%-4d\t$%7.2f\t%d/%d/%d\t\n", item,unit_price, month,day,year);

	return 0;
}