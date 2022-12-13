#ifndef STRENGTHPOTION_H
#define STRENGTHPOTION_H

#include <potion.h>

class StrengthPotion : public Potion
{
public:
    StrengthPotion(std::string color = "Orange");
    virtual~StrengthPotion();

    int drinkPotion(int ATK);
private:

};

#endif // STRENGTHPOTION_H
