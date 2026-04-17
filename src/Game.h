#ifndef GAME_H
#define GAME_H

#include "Player.h"
#include "Enemy.h"
#include "Item.h"
#include <vector>

/**
 * Game class controls the overall game flow,
 * including player actions, enemies, and items.
 */
class Game {
private:
    Player player;
    std::vector<Enemy> enemies;
    std::vector<Item> items;
    bool running;

public:
    Game();
    ~Game();

    void startGame();
    void processInput(char input);
    void update();
    void checkWinLose() const;

    Player getPlayer() const;
};

#endif