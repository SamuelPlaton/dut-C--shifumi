#include "HumanStrategy.h"
#include <stdexcept>

/**
 * \brief Constructeur vide de la classe HumanStrategy
 */
HumanStrategy::HumanStrategy(){}

/**
 * \brief Getter du choix de l'humain, permet de récupérer son coup choisi
 * \return Retourne un choicesType, c'est-à-dire le coup choisi
 */
choicesType HumanStrategy::getChoice()
{
    int theChoice = 0; //On déclare une var qui accueillera la réponse du joueur

    while(theChoice < 1 || theChoice > 3)
    {
        bool theexception = false;
        std::string theStr_choice;
        std::cout << "Faites votre choix :\n\n\t1- Pierre\n\t2- Feuille\n\t3- Ciseaux\n\n  "; //On demande au joueur de choisir un numéro faisant ref au choix
        std::cin >> theStr_choice; //On récup le choix
        try {
            theChoice = stoi(theStr_choice);
        } catch (const std::invalid_argument& ia) {
            std::cout << "Erreur, Veuillez saisir un NOMBRE (entre 1 et 3) !" << std::endl;
            theexception = true;
        }

        if(theexception == false && (theChoice < 1 || theChoice > 3))
        {
            std::cout << "Erreur, Veuillez saisir un nombre entre 1 et 3 !" << std::endl;
        }

        if(theexception == false)
        {
            switch (theChoice) { //On retourne le choix du joueur
            case 1:
                return PIERRE;
            case 2:
                return FEUILLE;
            case 3:
                return CISEAUX;
            }
        }
    }
    
   
}
