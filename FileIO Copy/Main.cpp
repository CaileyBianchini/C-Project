#include <iostream>
#include <fstream>
#include "Character.h";
//orders matter with everything including includes
//voids must always go before they are being used at

//this is where you'll be writing what you missed in class


//this is where I need to put 


int createCharacter()
{
	Character* player = new Character();
	player->m_health = 100;
	player->m_damage = 10;
	player->m_name = ' ';

	//example text files

	std::fstream file;

	file.open("save.txt", std::ios::out | std::ios::binary | std::ios::app);
	if (!file.is_open())
	{
			return 1;
	}

	//this writes the stats onto the save file
	file.write((char*)&player, sizeof(Character));

	//this closes the file
	file.close();

	//this will print what was created
	std::cout << "Name: " << player->m_name;
	std::cout << "Health: " << player->m_health;
	std::cout << "Damage: " << player->m_damage;

	return 0;
}

int loadCharacter()
{
	Character player = Character();
	player.m_health = 100;
	player.m_damage = 10;
	player.m_name = ' ';

	//example text files

	std::fstream file;
	file.open("save.txt", std::ios::out | std::ios::binary | std::ios::app);

	if (!file.is_open())
	{
		return 1;
	}

	//this writes the stats onto the save file
	file.read((char*)&player, sizeof(Character));

	//this closes the file
	file.close();


	//this will print it
	std::cout << "Name: " << player.m_name;
	std::cout << "Health: " << player.m_health;
	std::cout << "Damage: " << player.m_damage;

	return 0;

}

int main()
{
	int number = 0;
	std::cout << "1 = Create new player?, 2 = Load player?";
	std::cin >> number;

	if (number = 2)
	{
		loadCharacter();
	}
	else
	{
		createCharacter();
	}

	return 0;
}