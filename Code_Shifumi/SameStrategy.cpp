#include "SameStrategy.h"

/**
 * \brief Constructeur de la classe SameStrategy, lui assigne un coup fixe à sa création
 */
SameStrategy::SameStrategy():hisChoice((choicesType)(rand()%3)){} //Lors de l'appel du constructeur la variable choice est enfin initialisé

/**
 * \brief Getter du choix de la SameStrategy
 * \return Retourne le coup initialisé dans le constructeur
 */
choicesType SameStrategy::getChoice()
{
    return (choicesType)this->hisChoice; //On retourne toujours la valeur de l'attribut (qui ne change pas)
}
