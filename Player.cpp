//
// Created by nicki on 05.05.2024.
//

#include "Player.h"
#include "Window.h"

Player::Player() : speed(5) {
    if(!texture.loadFromFile("textures\\player.png")){
        return;
    }
    sprite.setTexture(texture);
    sprite.setPosition(Window::getWindowWidth()/2,Window::getWindowHeight()/2);
}

void Player::movePlayer() {
    if(sf::Keyboard::isKeyPressed(sf::Keyboard::Key::Left)){
        sprite.move(-1*speed,0);
    }
    if(sf::Keyboard::isKeyPressed(sf::Keyboard::Key::Right)){
        sprite.move(1*speed,0);
    }
}

void Player::jumpPlayer() {

}

void Player::draw(sf::RenderWindow &window) {
    window.draw(sprite);
}
