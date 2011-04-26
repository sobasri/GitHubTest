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
		return 0;
	double temp;
	if( a <= 1 )
		return 1;
	temp = a*factorial(a-1);
	return temp;
}

int cube(int a)
{
	if (a<0 || a>31)
	{
		return 0;
	}
	return a*a*a;
}

