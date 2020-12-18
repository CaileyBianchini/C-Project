#include <iostream>
#include <fstream>
#include "Character.h";

int main()
{
	Character player = Character();
	player.health = 100;
	player.damage = 10;

	//example text files

	std::fstream file;

	file.open("save.txt", std::ios::out);

	if (!file.is_open())
	{
		return 1;
	}

	//this writes the stats onto the save file
	file << player.health << std::endl;
	file << player.damage << std::endl;

	//this closes the file
	file.close();

	//example pf loading from text file
	Character player2 = Character();

	file.open("save.txt", std::ios::in);
	file >> player2.health;
	file >> player2.damage;
	file.close();

	return 0;
}