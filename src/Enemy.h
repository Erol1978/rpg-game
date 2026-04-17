#ifndef ENEMY_H
#define ENEMY_H

#include <string>

/**
 * Enemy class represents enemies in the game.
 */
class Enemy {
private:
    std::string name;
    int health;
    int attackPower;

public:
    Enemy();
    Enemy(const std::string& name, int health, int attack);

    int getHealth() const;
    int getAttackPower() const;

    void takeDamage(int damage);
};

#endif