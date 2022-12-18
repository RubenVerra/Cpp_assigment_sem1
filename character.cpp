#include "character.h"



Character::Character(std::string name): name(name)
{

}

Character::~Character()
{
   // std::cout << "destruct Character" << name << std::endl;
}

int Character::hit(int damage)
{
    hp -= damage;
    return hp > 0;
}

int Character::heal(int hitpoints)
{
   hp += hitpoints;
   return hp > 0;
}

int Character::BlockAttack(int block, int damage)
{
    if(block > 0)
    {
      hp += damage;
      GetBLck = GetBlock() - 1;

      return GetBLck;
      return hp > 0;
    }
    else
    {
      std::cout << "No blocks left: damage has been done." << std::endl;
    }
    return 0;
}

int Character::MissBlock(int block)
{
    if(block > 0)
    {
        GetBLck = GetBlock() - 1;
        return GetBLck;
    }
    else
    {
      std::cout << "No blocks left: damage has been done." << std::endl;
    }
    return 0;
}

std::string Character::setName(const std::string &newName)
{
    return(newName);
}

bool Character::IsAlive(int hp)
{
    if(hp > 0)
    {
        return 1;
    }else
    {
        return 0;
    }
}

