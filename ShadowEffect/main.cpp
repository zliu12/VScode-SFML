#include <iostream>
#include "SFML/Graphics.hpp"
#include "ShadowEffect.h"

int main(int, char**) {
	sf::RenderWindow win(sf::VideoMode(1500, 1000), "Shadow Effect");
  win.setPosition(sf::Vector2i(200, 200));

	ShadowEffect shadowEffect1("Shadow Effect");
	ShadowEffect shadowEffect2("SFML");
	shadowEffect1.setTxtPos(0, 0);
	shadowEffect2.setTxtPos(1000, 0);

	while (win.isOpen()) {
		sf::Event event;
		while (win.pollEvent(event)) {
			if (event.type == sf::Event::Closed || sf::Keyboard::isKeyPressed(sf::Keyboard::Escape)) {
				win.close();
			}
		}

		win.clear();
		win.draw(shadowEffect1);
		win.draw(shadowEffect2);
		win.display();
	}

	return 0;
}
