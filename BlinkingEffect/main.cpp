#include <iostream>
#include "SFML/Graphics.hpp"
#include "Cursor.h"

int main(int, char**) {
	// Window setup
	sf::RenderWindow win(sf::VideoMode(1500, 1500), "BOUNCING BALL");
	win.setPosition(sf::Vector2i(500, 200));

	Cursor cursor1;

	while (win.isOpen()) {
		sf::Event event;
		while (win.pollEvent(event)) {
			if (event.type == sf::Event::Closed || sf::Keyboard::isKeyPressed(sf::Keyboard::Escape)) {
				win.close();
			}
			cursor1.addEventHandler(win, event);
		}

		win.clear();
		cursor1.update();
		win.draw(cursor1);
		win.display();
	}
	
	return 0;
}
