#include <iostream>

//Cailey B
//Forgive for I have sinned for I did the unthinkable. . .I pulled a Yandere Dev


void TicTacGrid(char arr[])
{
	std::cout << arr[0] << "|" << arr[1] << "|" << arr[2] << std::endl;
	std::cout << "__" << "_" << "___" << "_" << "__" << std::endl;
	std::cout << arr[3] << "|" << arr[4] << "|" << arr[5] << std::endl;
	std::cout << "__" << "_" << "___" << "_" << "__" << std::endl;
	std::cout << arr[6] << "|" << arr[7] << "|" << arr[8] << std::endl;
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

	std::cout << "1 " << "|" <<" 2 " << "|" << " 3" << std::endl;
	std::cout << "__" << "_" << "___" << "_" << "__" << std::endl;
	std::cout << "4 " << "|" << " 5 " << "|" << " 6" << std::endl;
	std::cout << "__" << "_" << "___" << "_" << "__" << std::endl;
	std::cout << "7 " << "|" << " 8 " << "|" << " 9" << std::endl;

	system("pause");
	system("cls");

	while (gameOver == false)
	{
		int player1 = 0;
		int player2 = 0;

		//sorry for this, this is to help prevemt player in replacing placement
		int a = 0;
		int b = 0;
		int c = 0;
		int d = 0;
		int e = 0;
		int f = 0;
		int g = 0;
		int h = 0;
		int j = 0;


		//this is to check if player 1 won!
		int a1 = 0;
		int b1 = 0;
		int c1 = 0;
		int d1 = 0;
		int e1 = 0;
		int f1 = 0;
		int g1 = 0;
		int h1 = 0;
		int j1 = 0;

		int a2 = 0;
		int b2 = 0;
		int c2 = 0;
		int d2 = 0;
		int e2 = 0;
		int f2 = 0;
		int g2 = 0;
		int h2 = 0;
		int j2 = 0;

		//player 1
		std::cout << "Player one: " << std::endl;
		std::cin >> player1;

		//this will get player 1's choice and implement X in the place they chose
		if (player1 = 1 && a == 0)
		{
			grid[0] = xCoin;
			a++;
			a1++;
		}
		else if (player1 = 2 && b == 0)
		{
			grid[1] = xCoin;
			b++;
			b1++;
		}
		else if (player1 = 3 && c == 0)
		{
			grid[2] = xCoin;
			c++;
			c1++;
		}
		else if (player1 = 4 && d == 0)
		{
			grid[3] = xCoin;
			d++;
			d1++;
		}
		else if (player1 = 5 && e == 0)
		{
			grid[4] = xCoin;
			e++;
			e1++;
		}
		else if (player1 = 6 && f == 0)
		{
			grid[5] = xCoin;
			g++;
			g1++;
		}
		else if (player1 = 7 && g == 0)
		{
			grid[6] = xCoin;
			g++;
			g1++;
		}
		else if (player1 = 8 && h == 0)
		{
			grid[7] = xCoin;
			h++;
			h1++;
		}
		else if (player1 = 9 && j == 0)
		{
			grid[8] = xCoin;
			j++;
			j1++;
		}
		else
		{
			std::cout << "Error. Turn Skipped" << std::endl;
		}

		//this checks if any of players coins are in a row
		if (a1 == 1 && b1 == 1 && c1 == 1)
		{
			std::cout << "Player One! Winner!" << std::endl;
			break;
		}
		if (d1 == 1 && e1 == 1 && f1 == 1)
		{
			std::cout << "Player One! Winner!" << std::endl;
			break;
		}
		if (g1 == 1 && h1 == 1 && j1 == 1)
		{
			std::cout << "Player One! Winner!" << std::endl;
			break;
		}
		if (a1 == 1 && d1 == 1 && g1 == 1)
		{
			std::cout << "Player One! Winner!" << std::endl;
			break;
		}
		if (b1 == 1 && e1 == 1 && h1 == 1)
		{
			std::cout << "Player One! Winner!" << std::endl;
			break;
		}
		if (c1 == 1 && f1 == 1 && j1 == 1)
		{
			std::cout << "Player One! Winner!" << std::endl;
			break;
		}
		if (a1 == 1 && e1 == 1 && j1 == 1)
		{
			std::cout << "Player One! Winner!" << std::endl;
			break;
		}
		if (c1 == 1 && e1 == 1 && g1 == 1)
		{
			std::cout << "Player One! Winner!" << std::endl;
			break;
		}

		TicTacGrid(grid);

		system("pause");
		system("cls");

		//player 2
		std::cout << "Player two: " << std::endl;
		std::cin >> player2;

		//this will get player 2's choice and implement O in the place they chose
		if (player2 = 1 && a == 0)
		{
			grid[0] = yCoin;
			a++;
			a2++;
		}
		else if (player2 = 2 && b == 0)
		{
			grid[1] = yCoin;
			b++;
			b2++;
		}
		else if (player2 = 3 && c == 0)
		{
			grid[2] = yCoin;
			c++;
			c2++;
		}
		else if (player2 = 4 && d == 0)
		{
			grid[3] = yCoin;
			d++;
			d2++;
		}
		else if (player2 = 5 && e == 0)
		{
			grid[4] = yCoin;
			e++;
			e2++;
		}
		else if (player2 = 6 && f == 0)
		{
			grid[5] = yCoin;
			f++;
			f2++;
		}
		else if (player2 = 7 && g == 0)
		{
			grid[6] = yCoin;
			g++;
			g2++;
		}
		else if (player2 = 8 && h == 0)
		{
			grid[7] = yCoin;
			h++;
			h2++;
		}
		else if (player2 = 9 && j == 0)
		{
			grid[8] = yCoin;
			j++;
			j2++;
		}
		else
		{
			std::cout << "Error. Turn Skipped" << std::endl;
		}

		TicTacGrid(grid);

		//this checks if any of players coins are in a row
		if (a2 == 1 && b2 == 1 && c2 == 1)
		{
			std::cout << "Player Two! Winner!" << std::endl;
			break;
		}
		if (d2 == 1 && e2 == 1 && f2 == 1)
		{
			std::cout << "Player Two! Winner!" << std::endl;
			break;
		}
		if (g2 == 1 && h2 == 1 && j2 == 1)
		{
			std::cout << "Player Two! Winner!" << std::endl;
			break;
		}
		if (a2 == 1 && d2 == 1 && g2 == 1)
		{
			std::cout << "Player Two! Winner!" << std::endl;
			break;
		}
		if (b2 == 1 && e2 == 1 && h2 == 1)
		{
			std::cout << "Player Two! Winner!" << std::endl;
			break;
		}
		if (c2 == 1 && f2 == 1 && j2 == 1)
		{
			std::cout << "Player Two! Winner!" << std::endl;
			break;
		}
		if (a2 == 1 && e2 == 1 && j2 == 1)
		{
			std::cout << "Player Two! Winner!" << std::endl;
			break;
		}
		if (c2 == 1 && e2 == 1 && g2 == 1)
		{
			std::cout << "Player Two! Winner!" << std::endl;
			break;
		}


		system("pause");
		system("cls");
	}

	system("pause");
	system("cls");
}