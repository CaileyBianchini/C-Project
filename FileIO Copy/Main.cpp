#include <iostream>
#include <fstream>
#include "Character.h";

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
	std::cout << "Name: " << player->getName() << std::endl;
	std::cout << "Health: " << player->getHealth() << std::endl;
	std::cout << "Damage: " << player->getDamage() << std::endl;

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
	std::cout << "Name: " << player.getName() << std::endl;
	std::cout << "Health: " << player.getHealth() << std::endl;
	std::cout << "Damage: " << player.getDamage() << std::endl;

	return 0;

}

int main()
{
	int number = 0;
	char blank = ' ';
	std::cout << "1 = Create new player?, 2 = Load player?" << std::endl;
	std::cin >> number;

	if (number == '2')
	{
		loadCharacter();
	}
	else
	{
		createCharacter();
	}

	std::cout << "Press and button then [Enter] to continue";
	std::cin >> blank;

	return 0;
}