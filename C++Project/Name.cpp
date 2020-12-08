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
	int min = 1;
	int max = 10;
	int passed = 0;

	std::cout << "Welcome Players! This is the guessing game!" << std::endl;
	std::cout << "Pick a number between 1 and 10!" << std::endl;

	while (min <= max)
	{
		int a = 0;
		bool goal = false;
		int guess = (min + max) / 2;

		std::cout << guess << ": Is this your number?:" << std::endl;
		std::cout << "[1] Yes" << std::endl;
		std::cout << "[2] Lower" << std::endl;
		std::cout << "[3] Higher" << std::endl;
		std::cin >> a;

		if (a == 1)
		{
			std::cout << "Yes! I got it!" << std::endl;
			break;
		}
		else if (a == 3)
		{
			if (min == max)
			{
				std::cout << "You changed your number! Cheater!" << std::endl;
			}
			min = guess + 1;
		}
		else if (a == 2)
		{
			if (min == max)
			{
				std::cout << "You changed your number! Cheater!" << std::endl;
			}
			max = guess - 1;
		}
	}

	system("pause");
	system("cls");

	return 1;
}