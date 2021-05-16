#include "SFML/Graphics.hpp"
#include <iostream>
#include "Item.h"
#include "DropDownMenu.h"

int main() {
	// Create the window
	sf::RenderWindow win(sf::VideoMode(2500, 1500), "Menu Bar");
	// Set window position
	win.setPosition(sf::Vector2i(180, 100));

	// Create a string vector
	std::vector<std::string> v{"Test1", "Test2", "Test3"};

	// Test
	// Item item;
	DropDownMenu menu(v);

	// While window is open
	while (win.isOpen()) {
		sf::Event event;
		while (win.pollEvent(event)) {
			if (event.type == sf::Event::Closed ||
												sf::Keyboard::isKeyPressed(sf::Keyboard::Escape)) {
					win.close();								
			}

			
			// std::cout << sf::Mouse::getPosition().x << " " << sf::Mouse::getPosition().y << std::endl;

			// item.addEventHandler(win, event);		// work

			// item work, itemList work, inputBox work
			menu.addEventHandler(win, event);				
		}
		// item.update();
		// win.clear();
		// win.draw(item);
		// win.display();

		menu.update();
		win.clear();
		win.draw(menu);
		win.display();
	}

	return 0;
}
