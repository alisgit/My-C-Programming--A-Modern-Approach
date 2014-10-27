#include <stdio.h>

int main(void)
{
	int x;
	float y;

	printf("Enter an amount: ");
	scanf("%d", &x);
	
	y = x * 1.05f;

	printf("With tax added: $%.2f\n", y);

	return 0;
}