#include "wizard.h"

ruben::Wizard::Wizard(std::string name) :Character(name)
{
    std::cout << "create Wizard: " << name << std::endl;
    this->SetHealth(0);
    this->SetDamage(0);
    this->Sethealing(0);
    this->SetBlock(0);
    this->toverstok.length = 10;

}

void ruben::Wizard::biograph(int age, int length, std::string origin, bool gender)
{
    age = 76;
    length = 170;
    origin = " Italy";
    gender = 1;

    std::cout << " age: " << age <<std::endl;
    std::cout << " length: " << length <<std::endl;
    std::cout << " origin: " << origin <<std::endl;

    if(gender)
    {
        std::cout << " gender: " << "male" <<std::endl;
    }
    else
    {
        std::cout << " gender: " << "female" <<std::endl;

    }
    std::cout << " ------------------------------------ " << std::endl;

}

void ruben::Wizard::SetHealth(int hitpoints)
{
    hitpoints = rand() % 300;
    if(hitpoints < 125)
    {
      hitpoints += 75;
    }
     hp = hitpoints;

}

void ruben::Wizard::SetDamage(int damage)
{
    damage = rand() % 75;
    if(damage < 35)
    {
        damage += 30;
    }
    dmg = damage;

}

void ruben::Wizard::Sethealing(int heal)
{
    heal = 0;
    GetHeal = heal;
}

 void ruben::Wizard::SetBlock(int Block)
{
     Block = rand() % 4;
     GetBLck = Block;
}

ruben::Wizard::~Wizard()
{
    //std::cout << "destruct Knight" << name << std::endl;
}
