#include <iostream>
#include "Math.h"

int main() // !нет обработки нуля!
{
	double a{};
	double b{};
	int c{};

	std::cout << "Enter first number:";
	std::cin >> a;

	std::cout << "Enter second number:";
	std::cin >> b;

	std::cout << "Select operation (1 - addition, 2 - subtraction, 3 - multiplication, 4 - division, 5 - power)";
	std::cin >> c;

	switch(c)
	{
	case 1:
		std::cout << addition(a, b);
		break;
	case 2:
		std::cout << subtraction(a, b);
		break;
	case 3:
		std::cout << multiplication(a, b);
		break;
	case 4:
		std::cout << division(a, b);
		break;
	case 5:
		std::cout << power(a, b);
		break;
	}

	return EXIT_SUCCESS;
}