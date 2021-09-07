#include <iostream>
#include <conio.h> // This is for _getch()
#include <ctime> // this is for time
#include <cstdlib> // This is for rand()

void arrayExample();
void getchExample();
int randomZeroToMax(int maxNumber);
int randomBetweenNumbers(int minimum, int max);

int main()
{
	std::srand(std::time(nullptr)); // Seeding the rand function with time

	//const int row{ 3 };
	//const int column{ 3 };
	//int board[row][column]{ {0, 1, 2}, {3,4,5}, {6,7,8 } };
	////int oneDimensionalArray[3]{1,2,3}

	//for (int i{}; i < row; i++)
	//{
	//	for (int j{}; j < column; j++)
	//	{
	//		std::cout<< board[i][j] << " ";
	//	}
	//}

	//arrayExample();

	//getchExample();
	for (int i{}; i < 100; ++i)
	{
		//std::cout << randomZeroToMax(100) << '\n';
		std::cout << randomBetweenNumbers(90, 100) << '\n';

	}
	return 0;
}

void arrayExample()
{
	char foo[10][10]{}; // Creating a 2D array

	// Printing every value in the 2D array foo
	for (int i{}; i < 10; i++)
	{
		for (int j{}; j < 10; j++)
		{
			std::cout << foo[i][j] << " ";
		}
	}

	std::cout << '\n';

	// Setting each value in the 2D array foo to the value of J
	for (int i{}; i < 10; i++)
	{
		for (int j{}; j < 10; j++)
		{
			foo[i][j] = j;
		}
	}

	// Printing every value in the 2D array foo

	for (int i{}; i < 10; i++)
	{
		for (int j{}; j < 10; j++)
		{
			std::cout << foo[i][j] << " ";
		}
		std::cout << '\n'; // At the end of each inner loop, print a new line
	}
}

void getchExample()
{
	std::cout << "Press a key: ";
	char input = _getch();
	std::cout << '\n' << input << '\n';

	switch (input)
	{
	case 'd':
		std::cout << "You go right";
		break;
	case 'w':
		std::cout << "You go up";
		break;
	default:
		break;
	}
}

// Not including max in this case. So from 0 - (maxNumber-1)
int randomZeroToMax(int maxNumber)
{
	int random{};
	random = std::rand() % maxNumber;

	return random;
}

// Not including max in this case. So from minimum - (max-1)
int randomBetweenNumbers(int minimum, int max)
{

	int diff{ max- minimum };
	int random = std::rand() % diff;

	return random + minimum;
}
