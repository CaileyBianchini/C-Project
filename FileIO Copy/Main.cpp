#include <iostream>
#include <fstream>
#include "Character.h";
#include "Charactercpp.cpp";

//orders matter with everything including includes
//voids must always go before they are being used at

int createCharacter()
{
	Character* player = new Character();
	player->setHealth(100);
	player->setDamage(10);
	player->setName('bob');

	//example text files

	std::fstream file;

	file.open("savePlayer.txt", std::ios::out | std::ios::binary | std::ios::app);
	if (!file.is_open())
	{
			return 0;
	}

	//this writes the stats onto the save file
	file.write((char*)&player, sizeof(Character));

	//this closes the file
	file.close();

	//this will print what was created
	std::cout << "Name: " << player->getName();
	std::cout << "Health: " << player->getHealth();
	std::cout << "Damage: " << player->getDamage();

	return 1;
}

int loadCharacter()
{
	Character player = Character();
	player.setHealth(100);
	player.setDamage(10);
	player.setName('bob');

	//example text files

	std::fstream file;
	file.open("savePlayer.txt", std::ios::out | std::ios::binary | std::ios::app);

	if (!file.is_open())
	{
		return 1;
	}

	//this writes the stats onto the save file
	file.read((char*)&player, sizeof(Character));

	//this closes the file
	file.close();


	//this will print it
	std::cout << "Name: " << player.getName();
	std::cout << "Health: " << player.getHealth();
	std::cout << "Damage: " << player.getDamage();

	return 0;

}

int main()
{
	int number = 0;
	std::cout << "1 = Create new player?, 2 = Load player?";
	std::cin >> number;

	if (number == '2')
	{
		loadCharacter();
	}
	else
	{
		createCharacter();
	}

	std::cout << "Press [Enter] to continue";
	std::cin >> number;

	return 0;
}