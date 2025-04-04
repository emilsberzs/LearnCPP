#include <iostream>

namespace constants
{
	constexpr int minRiddeHeightCM{ 140 };
	constexpr int minDrinkingAge{ 18 };
}
void goToBar() 
{
	std::cout << "Welcome to bar.\n";
}
void checkHeight()
{
	std::cout << "Enter Your height in centimeters: \n";
	int x{};
	std::cin >> x;

	if (x >= constants::minRiddeHeightCM)
		std::cout << "You are tall enough.\n";
	else
	{
		std::cout << "You are too short.\n";
		std::cout << "What a shame.\n";
	}
}

//we need to put stuff in block if there is more than one thing to execute conditionally
void checkAgeInline(int age)
{
	if (age >= constants::minDrinkingAge) goToBar();
	else std::cout << "Too young for that.\n";
}
int  main()
{
	//checkHeight();
	//checkAgeInline(19);

	return 0;
}