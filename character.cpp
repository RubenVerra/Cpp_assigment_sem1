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

<<<<<<< Updated upstream
=======
bool Character::heal(int hitpoints)
{
   Gethp += hitpoints;
   return Gethp > 0;
}



void Character::setLive(bool newLive)
{
    live = newLive;
}

>>>>>>> Stashed changes
std::string Character::setName(const std::string &newName)
{
    return(newName);
}
