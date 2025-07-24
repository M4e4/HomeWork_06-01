#include <iostream>
#include "Math.h"

int main()
{
	double a{};
	double b{};
	int num{};
	double (*operation[])(double, double) = { addition, subtraction, multiplication, division, power };

	std::cout << "Enter first number:";
	std::cin >> a;

	std::cout << "Enter second number:";
	std::cin >> b;

	std::cout << "Select operation (1 - addition, 2 - subtraction, 3 - multiplication, 4 - division, 5 - power)";
	std::cin >> num;

	std::cout << operation[num - 1](a, b);

	return EXIT_SUCCESS;
}