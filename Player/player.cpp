#include "player.h"

Player::Player(const std::string playerName) : name(playerName), hitPoints(100) {
    stats[STRENGTH] = 10;
    stats[CHARISMA] = 10;
    stats[WISDOM] = 10;
    stats[DEXTERITY] = 10;
    stats[STAMINA] = 10;
}

Player::~Player()
{
}

bool Player::isAlive() {
    return hitPoints > 0;
}

int Player::getHitpoints() const {
    return hitPoints;
}

std::string Player::getName() const {
    return name;
}

int Player::getStat(const StatType stat) {
    return stats[stat];
}