
#include "healer.h"

Duel::Healer::Healer(std::string name) : Character(name)
{
    std::cout << "create Healer: " << name << std::endl;
    this->SetHealth(0);
    this->SetDamage(0);
    this->Sethealing(0);
    this->SetBlock(0);

}

void Duel::Healer::biograph(int age, int length, std::string origin, bool gender)
{
    age = 22;
    length = 180;
    origin = "netherlands";
    gender = 0;


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

void Duel::Healer::SetHealth(int hitpoints)
{
    hitpoints = rand() % 200;
    if(hitpoints < 50)
    {
        hitpoints += 50;
    }
     hp = hitpoints;

}

void Duel::Healer::SetDamage(int damage)
{
    damage = rand() % 20;
    if(damage < 5)
    {
        damage += 5;
    }
        dmg = damage;
}

void Duel::Healer::Sethealing(int heal)
{
    heal = rand() % 40;
    if(heal < 20)
    {
       heal += 20;
    }
    GetHeal = heal;
}

void Duel::Healer::SetBlock(int Block)
{
    Block = rand() % 5;
    GetBLck = Block;
}

Duel::Healer::~Healer()
{
   // std::cout << "destruct Healer" << name << std::endl;
}


