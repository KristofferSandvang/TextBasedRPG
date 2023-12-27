#ifndef PLAYER_H
#define PLAYER_H

#include "statType.h"
#include <string>
#include <unordered_map>

class Player
{
private:
    int hitPoints;
    const std::string name;
    std::unordered_map<StatType, int> stats;

public:
    Player(const std::string playerName);
    ~Player();

    std::string getName() const;
    int getHitpoints() const;
    bool isAlive();
    int getStat(const StatType stat);
};

#endif