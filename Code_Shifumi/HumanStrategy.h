/**
 * \file HumanStrategy.h
 * \class HumanStrategy
 * \version 1
 * \date 27 septembre 2019
 * \brief Hérite de Strategy, Stratégie destinée à l'Humain
 */

#ifndef HUMANSTRATEGY_H
#define HUMANSTRATEGY_H

#include <Strategy.cpp>

class HumanStrategy : public Strategy
{
public:
    HumanStrategy();
    choicesType getChoice();
};

#endif // HUMANSTRATEGY_H
