cat > CMakeLists.txt <<'EOF'
cmake_minimum_required(VERSION 3.10)
project(RPGGame)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED True)

enable_testing()

add_executable(rpg_game
    src/main.cpp
    src/Game.cpp
)
EOF