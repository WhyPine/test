#pragma once
#include <SFML/Graphics.hpp>
#include "Gun.h"

class Player : public sf::CircleShape, sf::Sprite
{
private:
	int health;
	double speed;
	double damageP;
	sf::Sprite sprite; 
	Gun* gun; 
	sf::Texture* texture = new sf::Texture;
public:
	Player(int health, double speed, double damageP, sf::Vector2u size);
	void checkMove(sf::RenderWindow& window);
	sf::Sprite getSprite();
	sf::Vector2f getPosition();
	sf::Sprite getGunSprite();
	Gun* getGun();
};

