/**
 * \file Strategy.h
 * \class Strategy
 * \version 1
 * \date 27 septembre 2019
 * \brief Classe abstraite Strategy dont les autres Strategy vont en hériter
 */

#ifndef STRATEGY_H
#define STRATEGY_H

#include <iostream>
#include <stdlib.h>
#include <time.h>

/**
 * \enum choicesType
 * \brief Enum choicesType
 * \version 1
 * \date 27 septembre 2019
 *
 *  Enum regroupant tous les types de coups possibles (PIERRE, FEUILLE, CISEAUX)
 *
 */
enum choicesType
{
    PIERRE,
    FEUILLE,
    CISEAUX
};

class Strategy
{
public:
    virtual choicesType getChoice() = 0;
};

#endif // STRATEGY_H
