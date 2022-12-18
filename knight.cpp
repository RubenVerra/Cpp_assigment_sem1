#include "knight.h"

Knight::Knight(std::string name) :Character(name)
{
    std::cout << "create knight: " << name << std::endl;
    this->SetHealth(0);
    this->SetDamage(0);
    this->Sethealing(0);
    this->SetBlock(0);

}

void Knight::biograph(int age, int length, std::string origin, bool gender)
{
    age = 37;
    length = 192;
    origin = " germany";
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
        std::cout << " gender:" << "female" <<std::endl;

    }
     std::cout << " ------------------------------------ " << std::endl;

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

void Knight::SetDamage(int damage)
{
    damage = rand() % 4;
    if(damage < 20)
    {
        damage += 20;
    }
    dmg = damage;

}

void Knight:: Sethealing(int heal)
{
    heal = 0;
    GetHeal = heal;
}

void Knight::SetBlock(int Block)
{
    Block = rand() % 4;
    GetBLck = Block;
}

Knight::~Knight()
{
    //std::cout << "destruct Knight" << name << std::endl;
}
