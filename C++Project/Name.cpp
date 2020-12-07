#include <iostream>

//void FizzBuzz(int number, int j)
//{
//	while (j < (number  + 1))
//	{
//		if (j % 5 == false && j % 3 == false)
//		{
//		std::cout << j << ". FizzBuzz" << std::endl;
//		}
//		else if (j % 5 == false)
//		{
//			std::cout << j << ". Buzz" << std::endl;
//		}
//		else if (j % 3 == false)
//		{
//			std::cout << j << ". Fizz" << std::endl;
//		}
//		j++;
//	}
//}

void Guess(int numbers[10], int min, int max, int passed)
{
	while (min <= max)
	{
		int a = 0;
		bool goal = false;
		int guess = (min + max) / 2;
		guess = numbers[guess];
		
		std::cin >> guess >> ": Is this your number?[higher/lower/yes]:";

		if (goal = true)
		{
			std::cout << "Yes I got it!!" << std::endl;
			a = 1;
			break;
		}


		if (numbers[guess] == goal)
		{
			goal = true;
		}
		else if (numbers[guess]  < goal)
		{
			min = guess + 1;
		}
		else if (numbers[guess] > goal)
		{
			max = guess - 1;
		}
	}
	passed = a;
	return;
}

int main()
{
	int j = 0;
	int number = 0;

	//Similar to: Console.Write();
	/*std::cout << "please type random number!: ";*/

	//gets player input as a value
	/*std::cin >> number;

	FizzBuzz(number, j);*/

	//waitd for player input
	system("pause");
	//clears screen
	system("cls");

	int numbers[10];
	int min = 0;
	int max = 10;
	int passed = 0;

	std::cout << "Welcome Players! This is the guessing game!" << std::endl;
	std::cout << j << ". Fizz" << std::endl;

	Guess(numbers, max, min, passed);

	system("pause");
	system("cls");

	return 1;
}