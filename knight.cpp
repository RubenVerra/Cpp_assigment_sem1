#include "knight.h"

Knight::Knight(std::string name) :Character(name)
{
    std::cout << "create knight: " << name << std::endl;
    this->SetHealth(0);
    this->SetDamage(0);
    this->Sethealing(0);
    this->SetBlock(0);

}

void Knight::SetHealth(int hitpoints)
{
    hitpoints = rand() % 500;
    if(hitpoints < 200)
    {
       hitpoints += 200;
    }
    hp = hitpoints;
    //std::cout << name << "health van Knight: " << hp << std::endl;
}

int Knight::GetHealth()
{
    return hp;
}



void Knight::SetDamage(int damage)
{
    damage = rand() % 4;
    if(damage < 20)
    {
        damage += 20;
    }
    dmg = damage;

}

int Knight::GetDamage()
{
    return dmg;
}


void Knight:: Sethealing(int heal)
{
    heal = 0;
    GetHeal = heal;
}


int Knight::GetHealing()
{
    return GetHeal;
}

void Knight::SetBlock(int Block)
{
    Block = rand() % 4;
    GetBLck = Block;
}

int Knight::GetBlock()
{
    return GetBLck;
}

Knight::~Knight()
{
    std::cout << "destruct Knight" << name << std::endl;
}
