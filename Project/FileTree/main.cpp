#include <iostream>
#include "SFML/Graphics.hpp"
#include "Item.h"

int main() {
	sf::RenderWindow window(sf::VideoMode(2500, 1200), "Drop Down Menu");
	window.setPosition(sf::Vector2i(100, 100));

	// Test
	std::vector<std::string> v{"Test1", "Test2", "Test3"};
	Item item;

	while (window.isOpen()) {
		sf::Event event;
		while (window.pollEvent(event)) {
			if (event.type == sf::Event::Closed || sf::Keyboard::isKeyPressed(sf::Keyboard::Escape)) {
				window.close();
			}

			// std::cout << sf::Mouse::getPosition(window).x << " " << sf::Mouse::getPosition(window).y << std::endl;
		}

		window.clear();
		// window.draw();
		window.display();
	}
	
	
	return 0;
}
