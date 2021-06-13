#include <iostream>
#include "SFML/Graphics.hpp"
#include "Cursor.h"

int main(int, char**) {
	// Window setup
	sf::RenderWindow win(sf::VideoMode(1500, 1500), "TEXT INPUT");
	win.setPosition(sf::Vector2i(500, 200));
    
    Cursor cursor;
    cursor.setCursorPosition(100, 50);
    cursor.setCursorSize(5, 50);


	while (win.isOpen()) {
		sf::Event event;
		while (win.pollEvent(event)) {
			if (event.type == sf::Event::Closed || sf::Keyboard::isKeyPressed(sf::Keyboard::Escape)) {
				win.close();
			}
		}

		win.clear();
        win.draw(cursor);   
		win.display();
	}
	
	return 0;
}
