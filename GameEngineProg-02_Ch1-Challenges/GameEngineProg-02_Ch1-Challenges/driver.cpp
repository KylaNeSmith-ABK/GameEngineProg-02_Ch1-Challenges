#include <iostream>

#include "Utils.h"

void PointerTest();

int main()
{
	PointerTest();
}

void PointerTest()
{
	std::cout << "Please provide an integer: ";
	int a = Utils::InputValidation_Int();

	std::cout << std::endl;

	std::cout << "Please provide another integer: ";
	int b = Utils::InputValidation_Int();

	int* aPtr = &a;
	int* bPtr = &b;

	std::cout << "aPtr: " << aPtr << " value of a is " << *aPtr << std::endl;
	std::cout << "baPtr: " << bPtr << " value of b is " << *bPtr << std::endl;

	aPtr = nullptr;
	bPtr = nullptr;
}
