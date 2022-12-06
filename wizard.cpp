#include "wizard.h"

Wizard::Wizard(std::string name) :Character(name)
{
    std::cout << "create Wizard: " << name << std::endl;
    this->SetHealth(0);
    this->SetDamage(0);
    this->Sethealing(0);
    this->toverstok.length = 10;

}

void Wizard::SetHealth(int hp)
{
    hp = rand() % 300;
    if(hp < 125)
    {
      hp += 75;
    }
     Gethp = hp;

}

int Wizard::GetHealth()
{
    return Gethp;
}


void Wizard::SetDamage(int dmg)
{
    dmg = rand() % 75;
    if(dmg < 35)
    {
        dmg += 30;
    }
    Getdmg = dmg;

}

int Wizard::GetDamage()
{
    return Getdmg;
}



void Wizard::Sethealing(int heal)
{
    heal = 0;
    GetHeal = heal;
}


int Wizard::GetHealing()
{
    return GetHeal;
}

 void Wizard::SetBlock(int Block)
{
     Block = rand() % 100;

     if(Block <= 45)
     {
         GetBLck = true;
     }
     else
     {
         GetBLck = false;
     }

}

 int Wizard::GetBlock()
 {
     return GetBLck;
 }


Wizard::~Wizard()
{
    std::cout << "destruct Knight" << name << std::endl;
}
