#include <iostream>
#include <fstream>
#include "Character.h";
//orders matter with everything including includes
//voids must always go before they are being used at

//this is where you'll be writing what you missed in class


//this is where I need to put 


int loadProject()
{
	int number = 0;
	char name = ' ';

	//Similar to: Console.Write();
	std::cout << "Do you wish to create a player? 1 = yes, 2 = no";

	//gets player input as a value
	std::cin >> number;



}

int main()
{
	Character* player = new Character();
	player->m_health = 100;
	player->m_damage = 10;

	//example text files

	std::fstream file;

	file.open("save.txt", std::ios::out);

	if (!file.is_open())
	{
		return 1;
	}

	//this writes the stats onto the save file
	file << (*player).m_health << std::endl;
	file << (*player).m_damage << std::endl;

	//this closes the file
	file.close();

	//example pf loading from text file
	Character* player2 = new Character();

	file.open("save.txt", std::ios::in);
	file >> (*player2).m_health;
	file >> (*player2).m_damage;
	file.close();

	return 0;
}