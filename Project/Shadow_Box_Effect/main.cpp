/**
 * Create a Shadow Box Effect
 *
 * Copyright (c) [2021], Zhao Liu.
 */

#include <SFML/Graphics.hpp>
#include <cstdlib>

int main() {
  // Create a window
  sf::RenderWindow win;
  win.create(sf::VideoMode(1000, 500), "Shadow Box Effect", sf::Style::Default);
  win.setPosition(sf::Vector2i(1000, 500));   // Set the window position

  // Load the font
  sf::Font font;
  font.loadFromFile("OpenSans-Bold.ttf");
  if (!font.loadFromFile("OpenSans-Bold.ttf")) {
    printf("Load font fail.");
  }

  // Create the text
  sf::Text txt;
  txt.setString("Less HW Please.");   // Set txt content
  txt.setFont(font);                  // txt font: OpenSans-Bold
  txt.setCharacterSize(100);          // txt size: 100 points
  txt.setFillColor(sf::Color::White); // txt color: white
  txt.setStyle(sf::Text::Bold);       // txt is bold
  txt.setPosition(100, 200);          // Set txt position in the window

  // Create the text mirror
  sf::Text txt_mirror = txt;
  // Change opacity of white
  sf::Color white = sf::Color::White;
  white.a = 50;
  txt_mirror.setFillColor(white);     // txt_mirror color: white w/ 50 ocpacity
  txt_mirror.setPosition(100, 355);   // Set txt_mirror position in the window
  txt_mirror.setScale(1, -0.5);       // txt_mirror flipped and shrinked

  while (win.isOpen()) {
    // Set close event
    sf::Event event;
    while (win.pollEvent(event)) {
      if (event.type == sf::Event::Closed) {
        win.close();
      }

      // clear the window with black color
      win.clear(sf::Color::Black);

      // draw txt
      win.draw(txt);
      // draw txt_mirror
      win.draw(txt_mirror);

      // end the current frame
      win.display();
    }
  }

  return 0;
}