#include <math.h>

#include "func.h"

double x, y;

void f(void)

{

	y =  sqrt(pow(x * 3 + 2, 2) - 24 * x) / (3 * sqrt(x) - (2 / sqrt(x)));

}