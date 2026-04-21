#include "Player.h"

Player::Player() : name("Hero"), health(100), attackPower(10) {
}

Player::Player(const std::string& name, int health, int attack)
    : name(name), health(health), attackPower(attack) {
}

int Player::getHealth() const {
    return health;
}

int Player::getAttackPower() const {
    return attackPower;
}

std::string Player::getName() const {
    return name;
}

void Player::takeDamage(int damage) {
    health -= damage;
}

void Player::heal(int amount) {
    health += amount;
}
