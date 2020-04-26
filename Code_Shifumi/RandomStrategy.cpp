#include "RandomStrategy.h"

/**
 * \brief Constructeur vide de la classe RandomStrategy
 */
RandomStrategy::RandomStrategy(){}

/**
 * \brief Récupère un coup aléatoire
 * \return Retourne un coup de manière aléatoire
 */
choicesType RandomStrategy::getChoice()
{
    return (choicesType)(rand()%3); //On renvoit un choix au hasard
}
