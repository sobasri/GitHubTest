#include "util.h"

int square(int a)
{
	if (a<0 || a>180)
	{
		return 0;
	}
	return a*a;
}

double factorial(double a)
{
	if (a <= 0 || a > 10)
	{
		return 0;
	}
}

int cube(int a)
{
	if (a<0 || a>31)
	{
		return 0;
	}
	return a*a*a;
}

