#include "stdio.h"

int main(void)
{
	int a,b,c,d,e,f,g,h,i,j,k,l,m,n,o,p;
	int r1,r2,r3,r4,c1,c2,c3,c4,d1,d2;

	scanf("%d %d %d %d %d %d %d %d %d %d %d %d %d %d %d %d ",
		  &a,&b,&c,&d,&e,&f,&g,&h,&i,&j,&k,&l,&m,&n,&o,&p);
	printf("%d\t%d\t%d\t%d\t\n", a,b,c,d);
	printf("%d\t%d\t%d\t%d\t\n", e,f,g,h);
	printf("%d\t%d\t%d\t%d\t\n", i,j,k,l);
	printf("%d\t%d\t%d\t%d\t\n", m,n,o,p);
    r1 = a + b + c + d;
    r2 = e + f + g + h;
    r3 = i + j + k + l;
    r4 = m + n + o + p;
    c1 = a + e + i + m;
    c2 = b + f + j + n;
    c3 = c + g + k + o;
    c4 = d + h + l + p;
    d1 = a + f + k + p;
    d2 = d + g + j + m;
    printf("\n");
    printf("%d\t%d\t%d\t%d\t\n", r1,r2,r3,r4);
	printf("%d\t%d\t%d\t%d\t\n", c1,c2,c3,c4);
	printf("%d\t%d\t\n", d1,d2);

	return 0;
}