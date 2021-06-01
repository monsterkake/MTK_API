#include "textures.h"

Textures textures;

void loadTextures() 
{
	textures.rect.setSize(sf::Vector2f(50, 50));
	textures.rect.setOutlineColor(sf::Color::Red);
}