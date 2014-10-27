#include "stdio.h"
int main(void)
{
	float loan,rate, month_payment;
	float first_month, second_month, third_month;
	float mon_rate;

	printf("Enter amount of loan:");
	scanf("%f", &loan);
	printf("Enter interest rate:");
	scanf("%f", &rate);
	printf("Enter monthly payment:");
	scanf("%f", &month_payment);

	mon_rate = rate / 100 / 12;
	first_month = loan - month_payment + (loan * mon_rate);
	second_month = first_month - month_payment + (first_month * mon_rate);
	third_month = second_month - month_payment + (second_month * mon_rate);

	printf("Balance remaining after first payment: %.2f\n", first_month);
	printf("Balance remaining after second payment: %.2f\n", second_month);
	printf("Balance remaining after third payment: %.2f\n", third_month);

	return 0;
}