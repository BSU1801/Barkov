#include <stdio.h>



double x, y;

void f(void);



void main(void)

{

	x = 9;

	f();

	printf("x = %.4lf\n", x);

	printf("f = %.4lf\n\n", y);

	printf("x = ");

	scanf("%lf", &x);

	f();

	printf("f = %.4lf", y);

}