#ifndef PLAYER_H
#define PLAYER_H

#include <string>

/**
 * Player class represents the main character.
 */
class Player {
private:
    std::string name;
    int health;
    int attackPower;

public:
    Player();
    Player(const std::string& name, int health, int attack);

    int getHealth() const;
    int getAttackPower() const;
    std::string getName() const;

    void takeDamage(int damage);
    void heal(int amount);
};

#endif