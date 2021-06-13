#include <iostream>
#include "SFML/Graphics.hpp"
#include "Cursor.h"

int main(int, char**) {
	// Window setup
	sf::RenderWindow win(sf::VideoMode(1500, 1500), "BLINKING EFFECT");
	win.setPosition(sf::Vector2i(500, 200));

	Cursor cursor1, cursor2;
	cursor1.setTextBoxPos(100, 100);
	cursor2.setTextBoxPos(900, 100);


	while (win.isOpen()) {
		sf::Event event;
		while (win.pollEvent(event)) {
			if (event.type == sf::Event::Closed || sf::Keyboard::isKeyPressed(sf::Keyboard::Escape)) {
				win.close();
			}
			cursor1.addEventHandler(win, event);
			cursor2.addEventHandler(win, event);
		}

		cursor1.update();
		cursor2.update();
		win.clear();
		win.draw(cursor1);
		win.draw(cursor2);
		win.display();
	}
	
	return 0;
}
