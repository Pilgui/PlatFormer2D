//
// Created by nicki on 05.05.2024.
//

#ifndef PLATFORMER2D_PLAYER_H
#define PLATFORMER2D_PLAYER_H
#include <SFML/Graphics.hpp>

class Player {
public:
    Player();
    void movePlayer();
    void jumpPlayer();
    void draw(sf::RenderWindow &window);
private:
    sf::Sprite sprite;
    sf::Texture texture;

    float speed;
    float speedJump;

    int health;
};


#endif //PLATFORMER2D_PLAYER_H
