/**
 * SFML - Text and Fonts
 *
 * Copyright (c) [2021], Zhao Liu.
 */

#include <SFML/Graphics.hpp>
#include <iostream>
#include <string>

int main() {
	// Create the window
	sf::RenderWindow window;
	window.create(sf::VideoMode(800, 800), "Text and Fonts", sf::Style::Default);

	// Load font
	sf::Font font;
	font.loadFromFile("OpenSans-Bold.ttf");
	// if (!font.loadFromFile("OpenSans-Bold.ttf")) {
	// 	std::cout << "Font load fail" << std::endl;
	// }

	// Create text
	sf::Text text;
	// Select the font
	text.setFont(font);		// font is a sf::font
	// Set the msg to display
	text.setString("Zot, Zot, Zot!");
	// Set the charcter size in pixel, not points
	text.setCharacterSize(100);
	// set the text color
	text.setFillColor(sf::Color::White);
	// set the text style
	text.setStyle(sf::Text::Bold);
	// set the text position
	text.setPosition(100, 350);

	// Create text_mirror
	sf::Text text_mirror = text;
	// set the text_mirror color and color opacity
	sf::Color white = sf::Color::White;
	white.a = 50;
	text_mirror.setFillColor(white);
	// set the text_mirror position
	text_mirror.setPosition(100, 505);
	// set the text_mirror scale
	text_mirror.setScale(1, -0.5);

	// Run the program ALA the window is open
	while (window.isOpen()) {
		// check all the window's events that were triggered since the last
		// iteration of the loop
		sf::Event event;
		while (window.pollEvent(event)) {
			// "close requested" event: we close the window
			if (event.type == sf::Event::Closed) {
				window.close();
			}

			// clear the window with black color
			window.clear(sf::Color::Black);

			// draw text
			window.draw(text);
			// draw text_mirror
			window.draw(text_mirror);

			// end the current frame
			window.display();
		}
	}

	return 0;
}
