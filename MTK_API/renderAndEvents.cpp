#include "renderAndEvents.h"
//#include "Window.h"
#include <thread>
#include <chrono>
#include <mutex>
#include <iostream>
#include "SFML\Graphics.hpp"
#include "SFML\Window.hpp"
#include <SFML\OpenGL.hpp>
#include "textures.h"

sf::RenderWindow window;
extern Textures textures;

void manageEvents()
{
	sf::Event event;
	while (window.pollEvent(event))
	{
		switch (event.type)
		{
		case sf::Event::Closed:
			window.close();
			break;

		case sf::Event::MouseButtonPressed:
			if (sf::Mouse::isButtonPressed(sf::Mouse::Left))
			{
				
			}
			break;

		case sf::Event::KeyPressed:
			if (event.key.code == sf::Keyboard::Q)
				window.close();
			break;

		default: break;
		}
	}
}

std::mutex mutex;

void render()
{
	
	window.draw(textures.rect);
	window.display();
}