//
// Created by QiChang Liu on 6/6/21.
//

#include "PopWindow.h"

PopWindow::PopWindow() {
  windowOpen = false;

  /* cancelButton, cancel*/
  cancelButton.moduleBoxSetSize(200, 100);
  cancelButton.moduleBoxSetPos(560, 780);
  cancelButton.moduleBoxSetFillColor(buttonColor);
  cancel.moduleLabelSetStr("Cancel");
  cancel.moduleLabelSetCharSize(50);
  centerModuleLabel(cancelButton, cancel);

  /* openButton, open */
  openButton.moduleBoxSetPos(780, 780);
  openButton.moduleBoxSetSize(200, 100);
  openButton.moduleBoxSetFillColor(buttonColor);
  open.moduleLabelSetStr("Open");
  open.moduleLabelSetCharSize(50);
  centerModuleLabel(openButton, open);
}

void PopWindow::centerModuleLabel(const ModuleBox& box, ModuleLabel& label) {
  float x = box.getModuleBoxPos().x + box.getModuleBoxSize().x / 2 - label.getModuleLabelGlobalBounds().width / 2;
  float y = box.getModuleBoxPos().y + box.getModuleBoxSize().y / 2 - label.getModuleLabelGlobalBounds().height / 2 - 10;;
  label.moduleLabelSetPos(x, y);
}

void PopWindow::winOpen() {
  popWin.create(sf::VideoMode(1000, 900), "Open Project");
  tree.push("Files", "MyLogo.txt");
  if (windowOpen) {
    while (popWin.isOpen()) {
      sf::Event popWinEvent{};
      while (popWin.pollEvent(popWinEvent)) {
        if (popWinEvent.type == sf::Event::Closed || sf::Keyboard::isKeyPressed(sf::Keyboard::F3)) {
          popWin.close();
          std::cout << "PopWindow closed" << std::endl;
        }

        tree.addEventHandler(popWin, popWinEvent);
      }
      popWin.clear(popWinColor);
      popWin.draw(tree);
      popWin.draw(cancelButton);
      popWin.draw(openButton);
      popWin.draw(cancel);
      popWin.draw(open);
      popWin.display();
    }
  }
  else {
    popWin.close();
  }
}

void PopWindow::closePopWin() {
  popWin.close();
}

void PopWindow::draw(sf::RenderTarget &window, sf::RenderStates states) const {
  window.draw(tree);
}

void PopWindow::addEventHandler(sf::RenderWindow &window, sf::Event event) {
  if (event.type == sf::Event::Closed || sf::Keyboard::isKeyPressed(sf::Keyboard::F3)) {
    windowOpen = false;
  }
  if (sf::Keyboard::isKeyPressed(sf::Keyboard::F2)) {
    windowOpen = true;
  }
  if (Item::getStrClicked() == "Open Project") {
    windowOpen = true;
  }
  if ((MouseEvents<ModuleBox>::objClicked(cancelButton, popWin))) {
    windowOpen = false;
    popWin.close();
    winOpen();
  }
  tree.addEventHandler(window, event);
}

void PopWindow::update() {
  winOpen();
  tree.update();
}


