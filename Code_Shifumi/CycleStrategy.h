/**
 * \file CycleStrategy.h
 * \class CycleStrategy
 * \version 1
 * \date 27 septembre 2019
 * \brief Hérite de Strategy, Stratégie destinée au Robot qui consiste à jouer de manière cyclique
 */

#ifndef CYCLESTRATEGY_H
#define CYCLESTRATEGY_H

#include <iostream>
#include <list>

#include <Strategy.cpp>



class CycleStrategy : public Strategy
{
    std::list<choicesType> hisChoices;
public:
    CycleStrategy();
    choicesType getChoice();
};

#endif // CYCLESTRATEGY_H
