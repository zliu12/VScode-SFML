//
// Created by QiChang Liu on 6/6/21.
//

#ifndef LOGOMAKER1_POPWINDOW_H
#define LOGOMAKER1_POPWINDOW_H
#include <iostream>
#include "SFML/Graphics.hpp"
#include "GuiComponent.h"
#include "Item.h"
#include "FileTree.h"
#include "ModuleLabel.h"
#include "ModuleLabel.h"

class PopWindow : public GuiComponent {
private:
    sf::RenderWindow popWin;
    sf::Color popWinColor = sf::Color(50, 50, 50);
    sf::Color buttonColor = sf::Color(150, 150, 150);
    bool windowOpen = false;
    FileTree tree;
    ModuleBox cancelButton;
    ModuleBox openButton;
    ModuleLabel cancel;
    ModuleLabel open;
    sf::Text text;

public:
    // Default constructor
    PopWindow();

    // While pop is Open
    void winOpen();

    // Close popWin
    void closePopWin();

    // Set moduleLabel in the center of moduleBox
    void centerModuleLabel(const ModuleBox& box, ModuleLabel& label);

    // From sf::Drawable class
    void draw(sf::RenderTarget& window, sf::RenderStates states) const override;

    // From EventHandler
    void addEventHandler(sf::RenderWindow& window, sf::Event event) override;
    void update() override;
};


#endif //LOGOMAKER1_POPWINDOW_H
