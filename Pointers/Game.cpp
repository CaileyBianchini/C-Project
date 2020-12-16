#include "Game.h"
#include <iostream>

void Game::createCharacter()
{
	char name;
	std::cout << "Name? : " << std::endl;
	std::cin >> name;
	char* m_name = &name;
	m_player1 = new Character(10, 10, m_player1->getName());
    m_enemy = new Character(10, 10, 'T');
}

void startBattle()
{
    std::cout << "FIGHT TILL ONE DIES!!!!!!" << std::endl;
    for (int i = 0; i < 4; i++)
    {
        std::cout << (i + 1) + ". " << std::endl;
    }
    std::cout << "Go!" << std::endl;

    while (m_player1.getIsAlive() && m_enemy.getIsAlive())
    {
        //prints player one and two's stat
        Console.WriteLine("Player one");

        char input;

        //Player One
        //get input

        if (input == '1')
        {
            
        }
        if (input == '2')
        {
           

        }
        else
        {

        }

        
    }




    if (m_player1.getIsAlive())
    {
        std::cout << "WINNER! PLAYER ONE!!!!!!!!!!!" << std::endl;
    }
    else
    {
        std::cout << "Y O U  D I E D";
    }
    m_gameOver == true;
}

void Game::run()
{
	start();

	while (!getGameOver())
	{
		update();
		draw();

		system("pause");
	}

	end();
}

void Game::start()
{
	createCharacter();
}

void Game::update()
{
	
}

void Game::draw()
{
	
}

void Game::end()
{
	delete m_player1;
}