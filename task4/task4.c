#include <stdio.h>

#include <math.h>

void f(void);

double x, y;

void main(void)

{

	x = 9;

	f();

	printf("x = %.4lf\n", x);

	printf("f = %.4lf\n\n", y);

	printf("x =");

	scanf("%lf", &x);

	f();

	printf("f = %.4lf", y);

}

void f(void)

{

	y = sqrt(pow(x * 3 + 2, 2) - 24 * x) / (3 * sqrt(x) - (2 / sqrt(x)));

}