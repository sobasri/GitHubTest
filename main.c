#include <stdio.h>
#include <stdarg.h>

int main (int argc, char const *argv[])
{
	int a;
	int b;
	a = 3;
	b = 5;
	printf("Square of %d is %d\n", a, square(a));
	printf("Cube of %d is %d\n", a, cube(a));
	return 0;
}