#ifndef HEALTHPOTION_H
#define HEALTHPOTION_H

#include <potion.h>

class HealthPotion : public Potion
{
public:
    HealthPotion(std::string color = "Red");
    ~HealthPotion();

    int drinkPotion(int HP);
private:
};

#endif // HEALTHPOTION_H
