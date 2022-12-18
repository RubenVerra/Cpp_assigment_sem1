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

void Wizard::biograph(int age, int length, std::string origin, bool gender)
{

    std::cout << "age: " << age <<std::endl;
    std::cout << "length: " << length <<std::endl;
    std::cout << "origin:" << origin <<std::endl;

    if(gender)
    {
        std::cout << "gender:" << "male" <<std::endl;
    }
    else
    {
        std::cout << "gender:" << "female" <<std::endl;

    }
    std::cout << " ------------------------------------ " << std::endl;

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
