#include <SFML/Window.hpp>
#include <iostream>

int main() {
	sf::Window window1(sf::VideoMode(600, 800), "My window1", sf::Style::Default);
	sf::Window window2;
	window2.create(sf::VideoMode(600, 800), "My window2", sf::Style::Default);

	// Change the position of the window (relatively to the desktop)
	window1.setPosition(sf::Vector2i(1150, 500));	// Screen center
	window2.setPosition(sf::Vector2i(0, 1000));		// Screen left bottom corner

	// Change the titile of the window
	window1.setTitle("This is Window 1");
	window2.setTitle("This is window 2");

	// Change the size of the window
	window1.setSize(sf::Vector2u(50, 50));		// 300 x 300
	window2.setSize(sf::Vector2u(300, 300));	// 1000 x 1000

	// Main/game loop: run the program as long as the window is open
	while (window1.isOpen()) {
		// Check all the window's events that were triggered since the last
		// iteration of the loop
		sf::Event event1;
		while (window1.pollEvent(event1)) {
			// "close requested" event: we close the window
			if (event1.type == sf::Event::Closed) {
				window1.close();
			}
		}
	}
	while (window2.isOpen()) {
		sf::Event event2;
		while (window2.pollEvent(event2)) {
			if (event2.type == sf::Event::Closed) {
				window2.close();
			}
		}

	}

	return 0;
}