#include <iostream>

void printArray(int j)
{
	int numbers[1000];

	for (int i = 0; i < j; i++)
	{
		std::cout << numbers[i] << std::endl;
	}
}

void choicePrintArray(int arr[], int length)
{
	for (int i = 0; i < length; i++)
		std::cout << arr[i] << std::endl;

	system("pause");

}

int main()
{
	int j = 0;

	std::cout << "what number do you wish for the program to count to? :";
	std::cin >> j;

	printArray(j);

	system("pause");
	system("cls");

	int ii = 0;
	int numbers[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40 };

	std::cout << "what number do you wish for the program to count to? :";
	std::cin >> ii;

	choicePrintArray(numbers, ii);

	system("pause");
	system("cls");
}