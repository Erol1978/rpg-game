# Console RPG

A simple console-based RPG game where the player explores a map, fights enemies, and collects items.

## Features
- Move player using WASD
- Fight enemies with a simple combat system
- Collect items such as potions and weapons
- Track player health and attack power
- Win or lose based on game conditions

## Building

```bash
cmake -S . -B build
cmake --build build
```

## Running

```bash
./build/rpg_game
```

## Running Tests

```bash
ctest --test-dir build --verbose
```

## Author
Ebubekir Erol  
Berkeley City College - CIS 25  
GitHub: https://github.com/Erol1978