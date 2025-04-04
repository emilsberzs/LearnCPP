#include <iostream>
#include <string>

void printDigitName(int x) 
{
	std::string name{};

	switch (x)
	{
	case 1:
		name = "One";
		break;//breaks out of the switch and proceeds to printing out the name for number
	case 2:
		name = "Two";
		break;
	case 3:
		name = "Three";
		break;;
	default://serves as a base case in case none of the cases match.
		name = "Unknown";
		break;
	}
	std::cout << "The number was " << name;
}

int main()
{
	printDigitName(4);

	return 0;

}