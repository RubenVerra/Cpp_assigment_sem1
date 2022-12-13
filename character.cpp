#include "character.h"



Character::Character(std::string name): name(name)
{

}

Character::~Character()
{
    std::cout << "destruct Character" << name << std::endl;
}
std::string &Character::getName()
{
    return name;
}

bool Character::hit(int damage)
{
    Gethp -= damage;
    return Gethp > 0;
}

bool Character::getLive()
{
    return live;
}

void Character::setLive(bool newLive)
{
    live = newLive;
}

std::string Character::setName(const std::string &newName)
{
    return(newName);
}
