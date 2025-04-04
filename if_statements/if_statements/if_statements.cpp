#include <iostream>
int getInteger()
{
	std::cout << "Enter an integer: \n";
	int x{};
	std::cin >> x;
	return x;
}

void checkZero() {
	std::cout << "Enter an integer: \n";
	int x{};
	std::cin >> x;
	

	if (x == 0)
		std::cout << "The value is zero.\n";
	if (x != 0)
		std::cout << "The value is not zero.\n";

}

void checkZeroBool()
{
	std::cout << "Enter an integer: \n";
	int x{};
	std::cin >> x;

	bool zero{ (x == 0) };
	if (zero)
		std::cout << "Character not zero.\n";
	if (!zero)
		std::cout << "Character not zero.\n";

}

void ifElseZero()
{
	std::cout << "Enter an integer: \n";
	int x{};
	std::cin >> x;

	if (x == 0)
		std::cout << "Character is zero.\n";
	else
		std::cout << "Character not zero.\n";
}

void ifElseifElse()
{
	std::cout << "Enter single an integer.\n";
	int x{};
	std::cin >> x;

	if (x < 0)
		std::cout << "Integer is negative.\n";
	else if (x == 0)
		std::cout << "Integer is zero.\n";
	else
		std::cout << "Integer is positive.\n";
}

bool isEqual(int x, int y)
{
	return x == y;
}

int absoluteValue(int x)
{
	if (x < 0)
		return -x;
	return x;
}
int main() 
{

	//checkZero();
	//checkZeroBool();
	//ifElseZero();
	//ifElseifElse();
	//std::cout << absoluteValue(getInteger());
	
	return 0;
}