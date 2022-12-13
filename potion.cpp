#include "potion.h"

Potion::Potion(std::string color) : color(color)
{
    //std::cout << "create Potion" << color << std::endl;
}

Potion::~Potion()
{
    //std::cout << "destruct Potion" << color << std::endl;
}

std::string &Potion::getColor()
{
    return color;
}
