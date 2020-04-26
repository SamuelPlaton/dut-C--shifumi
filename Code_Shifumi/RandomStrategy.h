/**
 * \file RandomStrategy.h
 * \class RandomStrategy
 * \version 1
 * \date 27 septembre 2019
 * \brief Hérite de Strategy, Stratégie destinée au Robot qui consiste à jouer de manière aléatoire
 */

#ifndef RANDOMSTRATEGY_H
#define RANDOMSTRATEGY_H

#include <Strategy.cpp>


class RandomStrategy : public Strategy
{
public:
    RandomStrategy();
    choicesType getChoice();
};

#endif // RANDOMSTRATEGY_H
