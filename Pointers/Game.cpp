#include "Game.h"
#include <iostream>
#include <fstream>

void Game::createCharacter()
{
	char name;
	std::cout << "Name? : " << std::endl;
	std::cin >> name;
	char* m_name = &name;
	m_player1 = new Character(100, 15, m_player1->getName());
    m_enemy = new Character(1000, 5, 'T');
}

void Game::startBattle()
{
    int j = 0;
    std::cout << "FIGHT TILL ONE DIES!!!!!!" << std::endl;
    for (int i = 0; i < 4; i++)
    {
        std::cout << (i + 1) + ". " << std::endl;
    }
    std::cout << "Go!" << std::endl;

    while (m_player1->getIsAlive() && m_enemy->getIsAlive())
    {
        std::fstream file;

        file.open("save.txt", std::ios::out);

        if (!file.is_open())
        {
            return;
        }

        //prints player one and two's stat
        std::cout << m_player1->getName() << std::endl;

        std::cout << "Attack" << std::endl;
        std::cout << "Run" << std::endl;
        std::cout << "Save" << std::endl;

        //Player One

        char input;
        std::cin >> input;


        if (input == '1')
        {
            m_enemy->attack(m_player1);
        }
        else if (input == '2')
        {
            std::cout << "You fool! You Coward! You ranaway!" << std::endl;
            j = 1;
            break;
        }
        else if (input == '3')
        {
            file << m_player1->getHealth();
            file << m_player1->getDamage();
            std::cout << "Saved!" << std::endl;
        }
        else
        {
            std::cout << "Error" << std::endl;
        }

        std::cout << "Enimies Turn!" << std::endl;

        file.close();
    }




    if (m_player1->getIsAlive() && !m_enemy->getIsAlive())
    {
        std::cout << "WINNER! PLAYER ONE!!!!!!!!!!!" << std::endl;
    }
    else if (!m_player1->getIsAlive() && m_enemy->getIsAlive())
    {
        std::cout << "Y O U  D I E D";
    }
    else
    {
        std::cout << "End." << std::endl;
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
    startBattle();
}

void Game::draw()
{
	
}

void Game::end()
{
	delete m_player1;
    delete m_enemy;
}