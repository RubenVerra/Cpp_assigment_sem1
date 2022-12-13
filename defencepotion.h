#ifndef DEFENCEPOTION_H
#define DEFENCEPOTION_H

#include "potion.h"

class DefencePotion : public Potion
{
public:
    DefencePotion(std::string color = "Blue");
    ~DefencePotion();

    int drinkPotion(int DEF);
private:

};

#endif // DEFENCEPOTION_H
