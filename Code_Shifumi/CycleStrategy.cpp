#include "CycleStrategy.h"

/**
 * \brief Constructeur de la classe CycleStrategy
 * Initialise une première valeur du cycle aléatoire
 */
CycleStrategy::CycleStrategy()
{
    this->hisChoices.push_back((choicesType)(rand()%3)); /*On initialise une première valeur au hasard qui ne sera pas retournée mais utilisée
                                                        pour la méthode getChoice*/
}

/**
 * \brief Getter du prochain choix dans le cycle
 * On récupère le prochain choix dans le cycle
 */
choicesType CycleStrategy::getChoice()
{
    if(((int)hisChoices.back()+1) == 3) this->hisChoices.push_back(PIERRE); //On revient à pierre si le bot a fait tous les choix
    else this->hisChoices.push_back((choicesType)((int)hisChoices.back()+1)); //Sinon on ajoute le choix suivant dans la liste
    return hisChoices.back(); //et on le retourne
}
