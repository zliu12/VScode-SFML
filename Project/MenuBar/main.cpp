#include "SFML/Graphics.hpp"
#include <iostream>
#include "Item.h"
#include "DropDownMenu.h"
#include "Menu.h"
#include "MenuBar.h"

int main() {
	// Create the window
	sf::RenderWindow win(sf::VideoMode(2500, 1000), "Menu Bar");
	// Set window position
	win.setPosition(sf::Vector2i(180, 100));

	// Create a string vector
	std::vector<std::string> menuVec{"Menu 1", "Menu 2", "Menu 3"};
	// std::vector<std::vector<std::string>> menuListVec{
		// {"Menu 1 Item 1", "Menu 1 Item 2", "Menu 1 Item 1"}, 
		// {"Menu 2 Item 1", "Menu 2 Item 2", "Menu 2 Item 2"},
		// {"Menu 3 Item 1", "Menu 3 Item 2", "Menu 3 Item 3"}
	// };

	// Test
	// Item item;
	// DropDownMenu menu(v);
	// Menu menu(menuVec);
	MenuBar menu(menuVec);

	// While window is open
	while (win.isOpen()) {
		sf::Event event;
		while (win.pollEvent(event)) {
			if (event.type == sf::Event::Closed ||
												sf::Keyboard::isKeyPressed(sf::Keyboard::Escape)) {
					win.close();								
			}

			
			// std::cout << sf::Mouse::getPosition(win).x << " " << sf::Mouse::getPosition(win).y << std::endl;

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
		// std::cout << "main draw" << std::endl;
		win.display();
	}

	return 0;
}
