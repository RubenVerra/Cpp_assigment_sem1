#ifndef CHARACTER_H
#define CHARACTER_H
#include<string>
#include<iostream>
#include <time.h>
#include "wand.h"
class Character
{
public:
    Character(std::string name);
    //destructor
    virtual ~Character();

    //setter
    virtual std::string setName(const std::string &newName);
    virtual void SetHealth (int hp) = 0;
    virtual void SetDamage (int dmg) = 0;
    virtual void Sethealing (int heal) = 0;
    virtual void SetBlock(int Block) = 0;


    //getter
    virtual std::string &getName();
    virtual int GetHealth() = 0;
    virtual int GetDamage() = 0;
    virtual int GetHealing()= 0;
    virtual int GetBlock() = 0;




    bool hit(int damage);
    bool heal(int hitpoints);
    bool BlockAttack(int block, int damage);

protected:
    std::string name;

    //health
    int hp;
    //int Gethp;

    //damage
    int dmg;
    //int Getdmg;

    //healing
    //int heal;
    int GetHeal;

    //Block
    //int Block;
    int GetBLck;

    //bool alive
    bool live = 1;
};

#endif // CHARACTER_H
