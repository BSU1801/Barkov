#include <stdio.h>

#include <math.h>

double f(double x);

void main(void)

{

	double x = 9;


	printf("x = %.4lf\n", x);

	printf("f = %.4lf\n\n", f(x));

	printf("x = ");

	scanf("%lf", &x);


	printf("f = %.4lf", f(x));

}

double f(double x)

{

	double f;

	f = sqrt(pow(x * 3 + 2, 2) - 24 * x) / (3 * sqrt(x) - (2 / sqrt(x)));

	return(f);

}