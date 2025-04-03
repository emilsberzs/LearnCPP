#include <iostream>
#include "multiply.h" //include multiply header file

int add(int a, int b);//Declare the add() function so main knoiws that its somewhere

int main()
{
	std::cout << add(2, 2) << '\n';
	std::cout << multiply(3, 3) << '\n';
	return 0;
}