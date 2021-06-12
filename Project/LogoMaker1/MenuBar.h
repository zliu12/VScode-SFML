//
// Created by QiChang Liu on 6/7/21.
//

#ifndef LOGOMAKER1_MENUBAR_H
#define LOGOMAKER1_MENUBAR_H
#include "GuiComponent.h"
#include "DropDownMenu.h"

class MenuBar : public GuiComponent{
private:
    sf::RectangleShape menuBar;
    sf::Color menuBarColor = sf::Color(50, 50, 50);
    std::vector<std::string> file{"New Project", "Open Project", "Close Project", "Save Project", "Quit"};
    std::vector<std::string> render{"Export Image"};
    std::vector<std::string> font{"Black-Jack", "OpenSans-Bold", "Quicksand-Regular", "DeveloperFont"};
    std::vector<std::string> viewMode{"Float Module ON", "Float Module OFF", "Reset Module         (Command+F1)"};
    DropDownMenu File = DropDownMenu("File", file, {0, 0});
    DropDownMenu Render = DropDownMenu("Render", render, {400, 0});
    DropDownMenu ViewMode = DropDownMenu("View Mode", viewMode, {800, 0});
    DropDownMenu Font = DropDownMenu("Font", font, {1200, 0});

public:
    // Default constructor
    MenuBar();

    // From sf::Drawable class
    void draw(sf::RenderTarget& window, sf::RenderStates states) const override;

    // From EventHandler
    void addEventHandler(sf::RenderWindow& window, sf::Event event) override;
    void update() override;
};


#endif //LOGOMAKER1_MENUBAR_H
