#include "SFML/Graphics.hpp"
#include "InputBox.h"
#include "Item.h"
#include "ItemList.h"
#include "DropDownMenu.h"
#include "States.h"
#include <iostream>
#include <vector>
#include <string>

int main() {
	// Create the window
	sf::RenderWindow win(sf::VideoMode(2500, 1500), "Drop Down Menu");
	// Set window position
	win.setPosition(sf::Vector2i(180, 100));

	std::vector<std::string> vec{"Option1", "Option2", "Option3", "Option4", "Option5"};
	DropDownMenu menu(vec);

	// Test itemList
	// ItemList itemList(vec);
	// InputBox inputBox;
	// Item item;

	// While window is open
	while(win.isOpen()) {
		sf::Event event;
		while(win.pollEvent(event)) {
			if(event.type == sf::Event::Closed || sf::Keyboard::isKeyPressed(sf::Keyboard::Escape)) {
				win.close();
			}
			menu.addEventHandler(win, event);
			// itemList.addEventHandler(win, event);		// work
			// inputBox.addEventHandler(win, event);		// may work
			// item.addEventHandler(win, event);
		}	

		menu.update();
		win.clear();
		win.draw(menu);
		win.display();

		// itemList.update();			// work
		// win.clear();
		// win.draw(itemList);			
		// win.display();

		// inputBox.update();			// may work
		// win.clear();
		// win.draw(inputBox);
		// win.display();

		// item.update();
		// win.clear();
		// win.draw(item);
		// win.display();
	}

	return 0;
}
