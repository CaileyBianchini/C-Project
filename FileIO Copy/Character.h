#pragma once

class Character
{
private:
    char m_name;
    int m_health;
    int m_damage;
public:
    Character();
    void attack();
    void takeDamage();
};