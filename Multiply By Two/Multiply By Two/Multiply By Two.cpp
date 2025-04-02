#include <iostream>;

int main()
{
	int x{}, y{};
	std::cout << "Enter an integer: \n";
	std::cin >> x;
	std::cout << "Enter multiplier: \n";
	std::cin >> y;
	std::cout << "Answer: "<<x<< " * "<<y<< " = " << x * y<<'\n';
	return 0;
}