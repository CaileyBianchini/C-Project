#include <iostream>

void FizzBuzz(int number, int j)
{
	while (j < (number  + 1))
	{
		if (j % 5 == false && j % 3 == false)
		{
		std::cout << j << ". FizzBuzz" << std::endl;
		}
		else if (j % 5 == false)
		{
			std::cout << j << ". Buzz" << std::endl;
		}
		else if (j % 3 == false)
		{
			std::cout << j << ". Fizz" << std::endl;
		}
		j++;
	}
}

void Guess()
{


}

int main()
{
	int j = 0;
	int number = 0;

	//Similar to: Console.Write();
	std::cout << "please type random number!: ";

	//gets player input as a value
	std::cin >> number;

	FizzBuzz(number, j);

	//waitd for player input
	system("pause");
	//clears screen
	system("cls");

	int numbers[10];
	int min = 0;
	int max = numbers.Length - 1;

	Guess();

	system("pause");
	system("cls");

	return 1;
}