#include "knight.h"

Knight::Knight(std::string name) :Character(name)
{
    std::cout << "create knight: " << name << std::endl;
    this->SetHealth(0);
    this->SetDamage(0);
    this->Sethealing(0);

}

void Knight::SetHealth(int hp)
{
    hp = rand() % 500;
    if(hp < 200)
    {
       hp += 200;
    }
    Gethp = hp;
    //std::cout << name << "health van Knight: " << hp << std::endl;
}

int Knight::GetHealth()
{
    return Gethp;
}



void Knight::SetDamage(int dmg)
{
    dmg = rand() % 40;
    if(dmg < 20)
    {
        dmg += 20;
    }
    Getdmg = dmg;

}

int Knight::GetDamage()
{
    return Getdmg;
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
    Block = rand() % 100;

    if(Block <= 20)
    {
        GetBLck = true;
    }
    else
    {
        GetBLck = false;
    }

}

int Knight::GetBlock()
{
    return GetBLck;
}

Knight::~Knight()
{
    std::cout << "destruct Knight" << name << std::endl;
}
