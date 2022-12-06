#include "healer.h"

Healer::Healer(std::string name) : Character(name)
{
    std::cout << "create Healer: " << name << std::endl;
    this->SetHealth(0);
    this->SetDamage(0);
    this->Sethealing(0);

}

void Healer::SetHealth(int hp)
{
    hp = rand() % 200;
    if(hp < 50)
    {
        hp += 50;
    }
     Gethp = hp;
}

int Healer::GetHealth()
{
    return Gethp;
}


void Healer::SetDamage(int dmg)
{
    dmg = rand() % 20;
    if(dmg < 5)
    {
        dmg += 5;
    }
        Getdmg = dmg;
}

int Healer::GetDamage()
{
    return Getdmg;
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



int Healer::GetHealing()
{
    return GetHeal;
}


void Healer::SetBlock(int Block)
{
    Block = rand() % 100;

    if(Block <= 30)
    {
        GetBLck = true;
    }
    else
    {
        GetBLck = false;
    }

}

int Healer::GetBlock()
{
    return GetBLck;
}


Healer::~Healer()
{
    std::cout << "destruct Healer" << name << std::endl;
}


