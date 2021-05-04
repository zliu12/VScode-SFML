#include "SFML/Graphics.hpp"
#include "InputBox.h"
#include "Item.h"
#include "ItemList.h"
#include "DropDownMenu.h"
#include <iostream>
#include <vector>
#include <string>

int main(int, char**) {
	// Create the window
	sf::RenderWindow win(sf::VideoMode(2500, 1500), "Drop Down Menu");
	// Set window position
	win.setPosition(sf::Vector2i(180, 100));

	DropDownMenu menu;

	// Test itemList
	std::vector<std::string> vec{"Option1", "Option2", "Option3"};
	ItemList itemList(vec);
	ItemList itemList2;

	// While window is open
	while(win.isOpen()) {
		sf::Event event;
		while(win.pollEvent(event)) {
			if(event.type == sf::Event::Closed || sf::Keyboard::isKeyPressed(sf::Keyboard::Escape)) {
				win.close();
			}
			menu.addEventHandler(win, event);
		}

		menu.update();
		win.clear();
		win.draw(menu);
		// win.draw(itemList);
		// win.draw(itemList2);
		win.display();
	}

	return 0;
}
