#pragma once
#include "Gun.h"
class Sniper :
    public Gun
{
public:
    Sniper(sf::Vector2f pos, sf::Vector2u size, int newBulletHealth);
    void fire(sf::Vector2f go);
    int getReload();
    int getMaxReload();
    int getReloadTime();
};

