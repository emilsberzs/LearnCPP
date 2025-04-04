#include <iostream>

/*
while (condition)
	statement;
*/

void repeatSomeTimes(int x)
{
	std::cout << "Counting down from " << x << "\n";
	while (x > 0)
	{
		std::cout << x << "\n";
		--x;
	}
}

void gridBySize(int items, int columns)
{
	int count{1};
	while (count <=items)
	{
		//pad the single digits to keep it looking nice
		if (count < 10)
		{
			std::cout << '0';
		}
		std::cout << count<<' ';

		//if loop reaches number of columns, insert a new line
		if (count % columns == 0)
		{
			std::cout << '\n';
		}
		++count;
	}
}

void nestedLoopSteps(int height)
{
	int outer{ 1 };
	while (outer <= height)
	{
		int inner{ 1 };
		while (inner <= outer)
		{
			std::cout << inner << ' ';
			++inner;
		}
		//add newline at the end of eavh row
		std::cout << '\n';
		++outer;
	}
}

void selectAnOption()
{
	int selection{};
	do
	{
		std::cout << "Please make a selection: \n";
		std::cout << "1)Addition\n";
		std::cout << "2)Substraction\n";
		std::cout << "3)Multiplication\n";
		std::cout << "4)Division\n";
		std::cin >> selection;
	} while (selection < 1 || selection>4);
	std::cout<<"You selected option # " << selection;
}

int main() 
{
	//repeatSomeTimes(10);#
	//gridBySize(86, 7);
	//nestedLoopSteps(50);
	selectAnOption();
	return 0;
}