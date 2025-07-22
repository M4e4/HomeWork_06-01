#include "Math.h"

double addition(double a, double b)
{
	return a + b;
}

double subtraction(double a, double b)
{
	return a - b;
}

double multiplication(double a, double b)
{
	return a * b;
}

double division(double a, double b)
{
	return a / b;
}

double power(double a, double b)
{
	double c{a};

	for (int i{1}; i < b; ++i)
	{
		a *= c;
	}
	return a;
}
