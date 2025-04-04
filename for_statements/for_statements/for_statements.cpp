#include <iostream>

/*
for (init-statement; condition; end-expression)
	statement;
*/


void printIntegersTo(int count)
{
	for (int i = 0; i <= count;++i)
	{
		std::cout << i << "\n";
	}
}

void countDownFrom(int start)
{
	for (int i = start;i > 0;--i)
	{
		std::cout << i << '\n';
	}
}

void nestedForLoop(int inner, int outer)
{
	for (int i = outer; i > 0; --i) 
	{
		std::cout << "Outer: " << i << '\n';
		for (int j = 0; j < outer; ++j)
		{
			std::cout << "Inner: " << j << '\n';
		}
	}
}

int main()
{
	//printIntegersTo(100);
	//countDownFrom(100);
	nestedForLoop(10, 10);

	return 0;
}