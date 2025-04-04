#include <iostream>
#include <string>
#include <string_view> //C++17 and up only

//Doesnt work with whitespaces
std::string getName()
{
	std::cout << "Enter Your name: \n";
	std::string name{};
	std::cin >> name;

	return name;
}
//use getline() to work with whitespaces
std::string getFullName()
{
	std::cout << "Enter Your full name: \n";
	std::string name{};
	std::getline(std::cin >> std::ws, name);
	return name;
}

void greet(std::string name)
{
	std::cout << "Good day to You, " << name << ".\n";
}

int getLength(std::string input)
{
	std::string value = input;
	int length = input.length();
	return length;

}

int main()
{
	//greet(getFullName());
	std::cout << getLength(getName());
	return 0;
}