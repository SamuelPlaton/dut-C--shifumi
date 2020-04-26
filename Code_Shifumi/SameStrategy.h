/**
 * \file SameStrategy.h
 * \class SameStrategy
 * \version 1
 * \date 27 septembre 2019
 * \brief Hérite de Strategy, Stratégie destinée au Robot qui consiste à jouer de manière répétée (Toujours le même coup)
 */

#ifndef SAMESTRATEGY_H
#define SAMESTRATEGY_H

#include <Strategy.cpp>

class SameStrategy : public Strategy
{
    const choicesType hisChoice; //Le choix ne change pas
public:
    SameStrategy();
    choicesType getChoice();
};

#endif // SAMESTRATEGY_H
