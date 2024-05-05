//
// Created by nicki on 05.05.2024.
//

#include "Window.h"


Window::Window() :
        window(sf::VideoMode(windowWidth,windowHeight),"PlatFormer") {
    update();
}

void Window::update() {
    const int targetFPS = 60;
    const sf::Time timePerFrame = sf::seconds(1.0f / targetFPS);

    sf::Clock clock;
    sf::Time timeSinceLastUpdate = sf::Time::Zero;

    while (window.isOpen()){
        sf::Time elapsedTime = clock.restart();
        timeSinceLastUpdate += elapsedTime;

        while (window.pollEvent(event)){
            if(event.type == sf::Event::Closed){
                window.close();
            }
            player.movePlayer();
        }


        while (timeSinceLastUpdate > timePerFrame){
            timeSinceLastUpdate -= timePerFrame;
            //actions
        }

        window.clear(sf::Color::White);
        //draw
        player.draw(window);
        window.display();
    }
}

int Window::getWindowWidth() {
    return windowWidth;
}

int Window::getWindowHeight() {
    return windowHeight;
}
