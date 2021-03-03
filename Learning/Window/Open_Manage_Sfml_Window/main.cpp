#include <SFML/Window.hpp>
#include <iostream>

int main() {
  // sf::Window window(sf::VideoMode(600, 800), "My window", sf::Style::Default);
	sf::Window window;
	window.create(sf::VideoMode(600, 800), "My window", sf::Style::Default);

	// Main/game loop: run the program as long as the window is open
	while (window.isOpen()) {
		// Check all the window's events that were triggered since the last
		// iteration of the loop
		sf::Event event;
		while (window.pollEvent(event)) {
			// "close requested" event: we close the window
			if (event.type == sf::Event::Closed) {
				window.close();
			}
		}
	}

	return 0;
}