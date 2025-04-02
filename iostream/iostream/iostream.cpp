#include <iostream>



int main()
{
	int x{}, y{}, area{};

	std::cout <<"Five - " << 5 << '\n'; //character-out, '\n' doesn't flush the buffer. single quotes
	std::cout <<"Five - " << 5 << std::endl; //inserts newline, and flushes the buffer
	std::cout << '\n' << '\n' << '\n';
	std::cout << "Enter width: \n";
	std::cin >> x; //character input. >>stores in x
	std::cout << "Enter Height: \n ";
	std::cin >> y;
	area = x * y;
	std::cout << "Area is: " << area << '\n';
	return 0;
}