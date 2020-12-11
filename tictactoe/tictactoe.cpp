#include <iostream>

//Cailey B
//Forgive for I have sinned for I did the unthinkable. . .I pulled a Yandere Dev



int main()
{
	std::cout << "Welcome to Tic Tac Toe!" << std::endl;
	std::cout << "Player one you are X!" << std::endl;
	std::cout << "Player two you are O!" << std::endl;

	system("pause");
	system("cls");

	bool gameOver = false;
	char grid[3][3];

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

	while (gameOver == false)
	{
		int player1 = 0;
		int player2 = 0;

		//player 1
		std::cout << "Player one: " << std::endl;
		std::cin >> player1;

		//this will get player 1's choice and implement X in the place they chose
		if (player1 == 1 && a == 0)
		{
			grid[0][0] = xCoin;
			a++;
			a1++;
		}
		else if (player1 == 2 && b == 0)
		{
			grid[0][1] = xCoin;
			b++;
			b1++;
		}
		else if (player1 == 3 && c == 0)
		{
			grid[0][2] = xCoin;
			c++;
			c1++;
		}
		else if (player1 == 4 && d == 0)
		{
			grid[1][0] = xCoin;
			d++;
			d1++;
		}
		else if (player1 == 5 && e == 0)
		{
			grid[1][1] = xCoin;
			e++;
			e1++;
		}
		else if (player1 == 6 && f == 0)
		{
			grid[1][2] = xCoin;
			g++;
			g1++;
		}
		else if (player1 == 7 && g == 0)
		{
			grid[2][0] = xCoin;
			g++;
			g1++;
		}
		else if (player1 == 8 && h == 0)
		{
			grid[2][1] = xCoin;
			h++;
			h1++;
		}
		else if (player1 == 9 && j == 0)
		{
			grid[2][2] = xCoin;
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
			gameOver == true;
			break;
		}
		if (d1 == 1 && e1 == 1 && f1 == 1)
		{
			std::cout << "Player One! Winner!" << std::endl;
			gameOver == true;
			break;
		}
		if (g1 == 1 && h1 == 1 && j1 == 1)
		{
			std::cout << "Player One! Winner!" << std::endl;
			gameOver == true;
			break;
		}
		if (a1 == 1 && d1 == 1 && g1 == 1)
		{
			std::cout << "Player One! Winner!" << std::endl;
			gameOver == true;
			break;
		}
		if (b1 == 1 && e1 == 1 && h1 == 1)
		{
			std::cout << "Player One! Winner!" << std::endl;
			gameOver == true;
			break;
		}
		if (c1 == 1 && f1 == 1 && j1 == 1)
		{
			std::cout << "Player One! Winner!" << std::endl;
			gameOver == true;
			break;
		}
		if (a1 == 1 && e1 == 1 && j1 == 1)
		{
			std::cout << "Player One! Winner!" << std::endl;
			gameOver == true;
			break;
		}
		if (c1 == 1 && e1 == 1 && g1 == 1)
		{
			std::cout << "Player One! Winner!" << std::endl;
			gameOver == true;
			break;
		}

		std::cout << grid[0][0] << "|" << grid[0][1] << "|" << grid[0][2] << std::endl;
		std::cout << "__" << "_" << "___" << "_" << "__" << std::endl;
		std::cout << grid[1][0] << "|" << grid[1][1] << "|" << grid[1][2] << std::endl;
		std::cout << "__" << "_" << "___" << "_" << "__" << std::endl;
		std::cout << grid[2][0] << "|" << grid[2][1] << "|" << grid[2][2] << std::endl;

		system("pause");
		system("cls");

		//player 2
		std::cout << "Player two: " << std::endl;
		std::cin >> player2;

		//this will get player 2's choice and implement O in the place they chose
		if (player2 = 1 && a == 0)
		{
			grid[0][0] = yCoin;
			a++;
			a2++;
		}
		else if (player2 == 2 && b == 0)
		{
			grid[0][1] = yCoin;
			b++;
			b2++;
		}
		else if (player2 == 3 && c == 0)
		{
			grid[0][2] = yCoin;
			c++;
			c2++;
		}
		else if (player2 == 4 && d == 0)
		{
			grid[1][0] = yCoin;
			d++;
			d2++;
		}
		else if (player2 == 5 && e == 0)
		{
			grid[1][1] = yCoin;
			e++;
			e2++;
		}
		else if (player2 == 6 && f == 0)
		{
			grid[1][2] = yCoin;
			f++;
			f2++;
		}
		else if (player2 == 7 && g == 0)
		{
			grid[2][0] = yCoin;
			g++;
			g2++;
		}
		else if (player2 == 8 && h == 0)
		{
			grid[2][1] = yCoin;
			h++;
			h2++;
		}
		else if (player2 == 9 && j == 0)
		{
			grid[2][2] = yCoin;
			j++;
			j2++;
		}
		else
		{
			std::cout << "Error. Turn Skipped" << std::endl;
		}

		std::cout << grid[0][0] << "|" << grid[0][1] << "|" << grid[0][2] << std::endl;
		std::cout << "__" << "_" << "___" << "_" << "__" << std::endl;
		std::cout << grid[1][0] << "|" << grid[1][1] << "|" << grid[1][2] << std::endl;
		std::cout << "__" << "_" << "___" << "_" << "__" << std::endl;
		std::cout << grid[2][0] << "|" << grid[2][1] << "|" << grid[2][2] << std::endl;

		//this checks if any of players coins are in a row
		if (a2 == 1 && b2 == 1 && c2 == 1)
		{
			std::cout << "Player Two! Winner!" << std::endl;
			gameOver == true;
			break;
		}
		if (d2 == 1 && e2 == 1 && f2 == 1)
		{
			std::cout << "Player Two! Winner!" << std::endl;
			gameOver == true;
			break;
		}
		if (g2 == 1 && h2 == 1 && j2 == 1)
		{
			std::cout << "Player Two! Winner!" << std::endl;
			gameOver == true;
			break;
		}
		if (a2 == 1 && d2 == 1 && g2 == 1)
		{
			std::cout << "Player Two! Winner!" << std::endl;
			gameOver == true;
			break;
		}
		if (b2 == 1 && e2 == 1 && h2 == 1)
		{
			std::cout << "Player Two! Winner!" << std::endl;
			gameOver == true;
			break;
		}
		if (c2 == 1 && f2 == 1 && j2 == 1)
		{
			std::cout << "Player Two! Winner!" << std::endl;
			gameOver == true;
			break;
		}
		if (a2 == 1 && e2 == 1 && j2 == 1)
		{
			std::cout << "Player Two! Winner!" << std::endl;
			gameOver == true;
			break;
		}
		if (c2 == 1 && e2 == 1 && g2 == 1)
		{
			std::cout << "Player Two! Winner!" << std::endl;
			gameOver == true;
			break;
		}


		system("pause");
		system("cls");
	}

	system("pause");
	system("cls");
}