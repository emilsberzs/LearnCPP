//condition ? expression1 : expression2
#include <iostream>

int getValue()
{
	std::cout << "Enter an integer: \n";
	int x{};
	std::cin >> x;
	return x;
}

int getMax(int x, int y)
{
	int max = ((x > y) ? x : y);//ternary operator
	return max;
}


int main()
{
	int x{ getValue() };
	int y{ getValue() };
	std::cout << "Out of integers " << x << " and " << y << ", " << getMax(x, y) << " is the largest.\n";
	return 0;
}