#include <iostream>

void printHello()
{
	std::cout << "Hello!\n";
}

void callPrint()
{
	std::cout << "Calling print...\n";
	printHello();

}

int returnFive()
{
	return 5;
}

int getValueFromUser()
{
	std::cout << "Enter an integer: \n";
	int input{};
	std::cin >> input;
	return input;
}

int addNumbers(int x, int y)
{
	int z = x + y;
	return z;
}

int multiplyNumbers(int x, int y)
{
	return x * y;
}
void printNumber(int value)
{
	std::cout << "Answer is: " << value << '\n';
}

int main()
{
	int x{ getValueFromUser() };
	int y{ getValueFromUser() };
	/*std::cout << "Product is: " << x * y << '\n' << "Sum is: " << x+y << '\n';*/
	//printNumber(addNumbers(x,y));
	std::cout << multiplyNumbers(x, y);



	return 0;
}