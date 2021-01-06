#pragma once

class Character
{
private:
    char m_name;
    int m_health;
    int m_damage;
public:
    Character();
    Character(float health, float damage, char name);

    void attack(Character* other);
    float takeDamage(float damageAmount);
    bool getIsAlive();

    float getDamage() { return m_damage; }
    float getHealth() { return m_health; }
    char getName() { return m_name; }

    void setDamage(float damageVal);
    void setHealth(float healthVal);
    void setName(char nameVal);
};