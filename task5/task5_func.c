#include <stdio.h>

#include <math.h>

double f(double x)

{

	double f;

	return sqrt(pow(x * 3 + 2, 2) - 24 * x) / (3 * sqrt(x) - (2 / sqrt(x)));


}