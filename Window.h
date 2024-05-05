//
// Created by nicki on 05.05.2024.
//

#ifndef PLATFORMER2D_WINDOW_H
#define PLATFORMER2D_WINDOW_H
#include <SFML/Graphics.hpp>
#include "Player.h"
class Window {
public:
    Window();
    static int getWindowWidth();
    static int getWindowHeight();
private:
    sf::RenderWindow window;
    sf::Event event;

    Player player;

    static unsigned const int windowWidth = 800;
    static unsigned const int windowHeight = 500;

    void update();
};


#endif //PLATFORMER2D_WINDOW_H
