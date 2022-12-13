#include "strengthpotion.h"

StrengthPotion::StrengthPotion(std::string color) : Potion("Orange")
{
    //std::cout << "Create a " << color << " Strength potion" << std::endl;
}

StrengthPotion::~StrengthPotion()
{
   // std::cout << "Destruct a " << color << " Strength potion" << std::endl;
}

int StrengthPotion::drinkPotion(int ATK)
{
    srand( time (NULL));
    ATK += (rand() % 3);
    return ATK;
}
