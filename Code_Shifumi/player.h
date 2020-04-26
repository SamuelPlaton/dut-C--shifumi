/**
 * \file Player.h
 * \class Player
 * \version 1
 * \date 27 septembre 2019
 * \brief Crée un joueur avec un type, une stratégie et un score à 0
 */

#ifndef PLAYER_H
#define PLAYER_H

#include <iostream>

#include <Strategy.cpp>


class Player
{
private:
    Strategy* hisStrategy;
    bool isHuman;
    int hisScore;

public:
    Player(bool isHuman);
    Player();
    void setStrategy(Strategy* aStrategy);
    void addPoint();
    bool getIsHuman();
    int getScore();
    Strategy* getStrategy();
};

#endif // PLAYER_H
