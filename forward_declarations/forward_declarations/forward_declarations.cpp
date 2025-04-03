#include <iostream>

 //Function add is being forward declared, and then properly implemented AFTER main(), notice theres no {} for function body
int add(int a, int b);

int main() 
{
	std::cout<<add(1, 2);
	return 0;
}

int add(int a, int b)
{
	return a + b;
}