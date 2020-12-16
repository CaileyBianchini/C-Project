#include "Character.h"

Character::Character()
{
	m_health = 100;
	m_damage = 10;
	m_name = 'bob';
}

Character::Character(float health, float damage, char name)
{
	m_health = health;
	m_damage = damage;
	m_name = name;
}

void Character::attack(Character* other)
{
	other->takeDamage(getDamage());
}

float Character::takeDamage(float damageAmount)
{
	m_health -= damageAmount;
	return damageAmount;
}

bool Character::getIsAlive()
{
	return m_health > 0;
}