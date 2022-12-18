#include "wizard.h"

Wizard::Wizard(std::string name) :Character(name)
{
    std::cout << "create Wizard: " << name << std::endl;
    this->SetHealth(0);
    this->SetDamage(0);
    this->Sethealing(0);
    this->SetBlock(0);
    this->toverstok.length = 10;

}

void Wizard::SetHealth(int hitpoints)
{
    hitpoints = rand() % 300;
    if(hitpoints < 125)
    {
      hitpoints += 75;
    }
     hp = hitpoints;

}

void Wizard::SetDamage(int damage)
{
    damage = rand() % 75;
    if(damage < 35)
    {
        damage += 30;
    }
    dmg = damage;

}

void Wizard::Sethealing(int heal)
{
    heal = 0;
    GetHeal = heal;
}

 void Wizard::SetBlock(int Block)
{
     Block = rand() % 4;
     GetBLck = Block;
}

Wizard::~Wizard()
{
    //std::cout << "destruct Knight" << name << std::endl;
}
