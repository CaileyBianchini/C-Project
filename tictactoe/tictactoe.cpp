#include <iostream>




void TicTacGrid(char arr[])
{
	std::cout << arr[0] << arr[1] << arr[2] << std::endl;
	std::cout << arr[3] << arr[4] << arr[5] << std::endl;
	std::cout << arr[6] << arr[7] << arr[8] << std::endl;
}

int main()
{
	std::cout << "Welcome to Tic Tac Toe!" << std::endl;
	std::cout << "Player one you are X!" << std::endl;
	std::cout << "Player two you are O!" << std::endl;

	system("pause");
	system("cls");

	bool gameOver = false;
	char grid[9];

	char xCoin = 'X';
	char yCoin = 'O';

	std::cout << "Press the numbers corisponding to the placements!" << std::endl;

	std::cout << "1" << " 2 " << "3" << std::endl;
	std::cout << "4" << " 5 " << "6" << std::endl;
	std::cout << "7" << " 8 " << "9" << std::endl;

	system("pause");
	system("cls");

	while (gameOver == false)
	{
		int player1 = 0;
		int player2 = 0;

		//player 1
		std::cin >> player1;

		//this will get player 1's choice and implement X in the place they chose
		if (player1 = 1)
		{
			grid[0] = xCoin;
		}
		else if (player1 = 2)
		{
			grid[1] = xCoin;
		}
		else if (player1 = 3)
		{
			grid[2] = xCoin;
		}
		else if (player1 = 4)
		{
			grid[3] = xCoin;
		}
		else if (player1 = 5)
		{
			grid[4] = xCoin;
		}
		else if (player1 = 6)
		{
			grid[5] = xCoin;
		}
		else if (player1 = 7)
		{
			grid[6] = xCoin;
		}
		else if (player1 = 8)
		{
			grid[7] = xCoin;
		}
		else if (player1 = 9)
		{
			grid[8] = xCoin;
		}
		else
		{
			std::cout << "Error. Turn Skipped" << std::endl;
		}

		TicTacGrid(grid);

		system("pause");
		system("cls");

		//player 2
		std::cin >> player2;

		//this will get player 2's choice and implement O in the place they chose
		if (player2 = 1)
		{
			grid[0] = yCoin;
		}
		else if (player2 = 2)
		{
			grid[1] = yCoin;
		}
		else if (player2 = 3)
		{
			grid[2] = yCoin;
		}
		else if (player2 = 4)
		{
			grid[3] = yCoin;
		}
		else if (player2 = 5)
		{
			grid[4] = yCoin;
		}
		else if (player2 = 6)
		{
			grid[5] = yCoin;
		}
		else if (player2 = 7)
		{
			grid[6] = yCoin;
		}
		else if (player2 = 8)
		{
			grid[7] = yCoin;
		}
		else if (player2 = 9)
		{
			grid[8] = yCoin;
		}
		else
		{
			std::cout << "Error. Turn Skipped" << std::endl;
		}

		TicTacGrid(grid);

		system("pause");
		system("cls");
	}

	system("pause");
	system("cls");
}