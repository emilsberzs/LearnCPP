#include <iostream>

int main() 
{
	int a;
	double b;
	double area;
	int c = 5, d = 8; //copy initialization
	int e(1), f(2); //direct initialization
	int g{ 3 }, h{ 4 }; //direct list initialization
	[[maybe_unused]] int i{}, j{}; //value initialization (initializes to 0)
	

	a = 5;
	b = 3.1417;
	area = a * b;
	std::cout <<area<<'\n'<< a << '\n' << b << '\n' << c << '\n' << d << '\n' << e << '\n' << f << '\n' << g << '\n' << h << '\n' << i << '\n' << j << '\n';

}