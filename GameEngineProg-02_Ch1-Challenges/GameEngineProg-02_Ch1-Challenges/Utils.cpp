#include "Utils.h"

int Utils::InputValidation_Int()
{
	int validInt = 0;

	do
	{
		std::cin >> validInt;

		if (std::cin.good())
		{
			return validInt;
		}
		else
		{
			std::cout << "Please provide a valid integer" << std::endl;
			std::cin.clear();
			std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
		}
	} while (true);
}
