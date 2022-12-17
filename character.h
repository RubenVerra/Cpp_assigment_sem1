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
    int GetHealth();
    int GetDamage();
    int GetHealing();
    virtual int GetBlock();




    bool hit(int damage);
    int heal(int hitpoints);
    int BlockAttack(int block, int damage);
    int MissBlock (int block);

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
    bool alive = 1;
};

#endif // CHARACTER_H
