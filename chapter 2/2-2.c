#include <stdio.h>

#define PI 3.1415926

int main(void)
{   
	float r, r3, v;

    scanf("%f", &r);
	
	r3 = r * r * r;
	v = (4.0f / 3.0f) * PI * r3;

	printf("%.7f\n", r3);
	printf("%.7f\n", 4.0f / 3.0f);
	printf("%.7f\n", PI);
	printf("%.7f\n", v);
	
	return 0;
}