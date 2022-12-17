
#include "healer.h"

Healer::Healer(std::string name) : Character(name)
{
    std::cout << "create Healer: " << name << std::endl;
    this->SetHealth(0);
    this->SetDamage(0);
    this->Sethealing(0);
    this->SetBlock(0);

}

void Healer::SetHealth(int hitpoints)
{
    hitpoints = rand() % 200;
    if(hitpoints < 50)
    {
        hitpoints += 50;
    }
     hp = hitpoints;
}

void Healer::SetDamage(int damage)
{
    damage = rand() % 20;
    if(damage < 5)
    {
        damage += 5;
    }
        dmg = damage;
}

void Healer::Sethealing(int heal)
{
    heal = rand() % 40;
    if(heal < 20)
    {
       heal += 20;
    }
    GetHeal = heal;
}

void Healer::SetBlock(int Block)
{
    Block = rand() % 5;
    GetBLck = Block;
}

Healer::~Healer()
{
    std::cout << "destruct Healer" << name << std::endl;
}


