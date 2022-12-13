#ifndef POTION_H
#define POTION_H

#include <string>
#include <iostream>
#include <time.h>

class Potion
{
public:
    Potion(std::string color);
    virtual~Potion();

    virtual std::string &getColor();

    virtual int drinkPotion(int value) = 0;

protected:
   std::string color;

};

#endif // POTION_H
