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

bool Character::heal(int hitpoints)
{
   Gethp += hitpoints;
   return Gethp > 0;
}

bool Character::BlockAttack(int block, int damage)
{
    if(block > 0)
    {
      Gethp += damage;
      GetBLck = GetBLck - 1;

      return Gethp > 0;
    }
    else
    {
      std::cout << "No blocks left: damage has been done." << name << std::endl;
    }
      return 0;
}






std::string Character::setName(const std::string &newName)
{
    return(newName);
}
