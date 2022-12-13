#include "healthpotion.h"


HealthPotion::HealthPotion(std::string color) : Potion("Red")
{
    //std::cout << "Create a " << color << " Health potion" << std::endl;
}

HealthPotion::~HealthPotion()
{
    //std::cout << "Destruct a " << color << " Health potion" << std::endl;
}

int HealthPotion::drinkPotion(int HP)
{
    srand( time (NULL));
    HP += (rand() % 15) + 5;
    return HP;
}

