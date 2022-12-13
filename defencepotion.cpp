#include "defencepotion.h"

DefencePotion::DefencePotion(std::string color) : Potion("Blue")
{
    //std::cout << "Create a " << color << " Defence potion" << std::endl;
}

DefencePotion::~DefencePotion()
{
    //std::cout << "Destruct a " << color << " Defence potion" << std::endl;
}

int DefencePotion::drinkPotion(int DEF)
{
    srand( time (NULL));
    DEF += (rand() % 5);
    return DEF;
}
