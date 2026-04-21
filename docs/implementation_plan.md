# Implementation Plan

## Feature 1: Player Movement
**Trigger**: User selects movement controls during gameplay  
The player will move around the map using keyboard input. The game will
check whether the next space is valid before moving. This feature allows
the user to explore the map and interact with enemies and items.

## Feature 2: Combat System
**Trigger**: Player moves into an enemy location  
When the player reaches an enemy, combat will begin. The player and enemy
will exchange damage based on their attack values. If the enemy’s health
reaches zero, it will be removed from the game.

## Feature 3: Item Collection
**Trigger**: Player moves onto an item location  
If the player steps on an item, the item will be collected. Some items
will restore health, while others may increase attack power. This adds
progression and strategy to the game.

## Feature 4: Health Tracking
**Trigger**: Combat or item usage  
The player’s health will change during the game. Taking damage lowers
health, while potions restore it. The game will always track and display
the player’s current health.

## Feature 5: Win/Lose Conditions
**Trigger**: Game state update after actions  
The player wins when all enemies are defeated. The player loses if health
reaches zero. This feature determines how the game ends and gives the
program a clear goal.