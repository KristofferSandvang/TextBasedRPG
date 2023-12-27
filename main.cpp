#include "Player/player.h"
#include <iostream>


#define MAX_NAME_LENGTH 20

int main() {
    char playerName[MAX_NAME_LENGTH];
    std::cout << "Enter your name:" << std::endl;
    std::cin.getline(playerName, MAX_NAME_LENGTH);
    Player myPlayer(playerName);

    std::cout << "Player Name: " << myPlayer.getName() << std::endl;
    std::cout << "Player Hitpoints: " << myPlayer.getHitpoints() << std::endl;

    return 0;
}
