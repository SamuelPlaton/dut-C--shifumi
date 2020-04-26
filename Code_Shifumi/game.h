/**
 * \file Game.h
 * \class Game
 * \version 1
 * \date 27 septembre 2019
 * \brief Crée une partie avec en attributs deux Joueurs (Humains ou Robots) ainsi qu'un nombre de rôles
 */

#ifndef GAME_H
#define GAME_H

#include <iostream>
#include <string>

#include "player.h"



class Game
{
private:
    Player hisPlayer1;
    Player hisPlayer2;
    int hisRounds;

public:
    Game(Player aPlayer1, Player aPlayer2, int aRounds);
    void Rounds();
    void End();
    void Restart(std::string aCommand);
    int getRounds();
};

#endif // GAME_H
