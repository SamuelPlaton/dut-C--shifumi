/**
 * \file main.cpp
 * \version 1
 * \date 27 septembre 2019
 * \brief Programme principale, crée les objets et lance toutes les méthodes nécéssaires
 * au bon fonctionnement du projet
 */


#include <iostream>
#include <stdexcept>

#include <HumanStrategy.h>
#include <SameStrategy.h>
#include <CycleStrategy.h>
#include <RandomStrategy.h>
#include <player.h>
#include <game.h>



int main()
{
    bool isEnd = false;
    while(isEnd == false)
    {
        srand (time(NULL)); //IMPORTANT /!\ : Initialisation du hasard (temps)

        /*------------------- Création des joueurs -------------
         * --------------- Assignation des Stratégies---------*/

        std::string thePlayerType;
        std::cout<<"Voulez-vous que Joueur 1 soit Humain(1) ou Robot(0) ?"<< std::endl;
        std::cin>> thePlayerType;
        while(thePlayerType != "0" && thePlayerType != "1"){
            std::cout<<"ERREUR, Voulez-vous que Joueur 1 soit Humain(1) ou Robot(0) ?"<< std::endl;
            std::cin.clear();
            std::cin>> thePlayerType;
        }
        Player thePlayer1(thePlayerType.compare("0")?true:false);

        std::cout<<"Voulez-vous que Joueur 2 soit Humain(1) ou Robot(0) ?"<< std::endl;
        std::cin>> thePlayerType;
        while(thePlayerType != "0" && thePlayerType != "1"){
            std::cout<<"ERREUR, Voulez-vous que Joueur 1 soit Humain(1) ou Robot(0) ?"<< std::endl;
            std::cin.clear();
            std::cin>> thePlayerType;
        }
        Player thePlayer2(thePlayerType.compare("0")?true:false);


        if (thePlayer1.getIsHuman())
        {
            thePlayer1.setStrategy(new HumanStrategy());
        }
        else
        {
            int random = rand()%3;
            switch(random)
            {
                case 0 : thePlayer1.setStrategy(new SameStrategy()); break;
                case 1 : thePlayer1.setStrategy(new CycleStrategy()); break;
                case 2 : thePlayer1.setStrategy(new RandomStrategy()); break;
            }
        }

        if (thePlayer2.getIsHuman())
        {
            thePlayer2.setStrategy(new HumanStrategy());
        }
        else
        {
            int random = rand()%3;
            switch(random)
            {
                case 0 : thePlayer2.setStrategy(new SameStrategy()); break;
                case 1 : thePlayer2.setStrategy(new CycleStrategy()); break;
                case 2 : thePlayer2.setStrategy(new RandomStrategy()); break;
            }
        }

        /*----------------------------------------------*/



        /*---------------Création de la partie----------*/

        int theRounds = 0;

        while(theRounds < 1 || theRounds > 99)
        {
            bool theException = false;
            std::string theStr_rounds;
            std::cout<<"Combien de tours voulez-vous faire (entre 1 et 99)?"<< std::endl;
            std::cin>>theStr_rounds;
            try {
                theRounds = stoi(theStr_rounds);
            }
            catch (const std::invalid_argument& ia) {
                std::cout << "Erreur, Veuillez saisir un NOMBRE (entre 1 et 99) !" << std::endl;
                theException = true;
            }
            if(theException == false && theRounds < 1 || theRounds > 99)
            {
                std::cout << "Erreur, Veuillez saisir un nombre entre 1 et 99 !" << std::endl;
            }

        }

        Game thegame(thePlayer1, thePlayer2, theRounds);

         /*----------------------------------------------*/



         /*----------------------PARTIE------------------*/

        for(int thei = 0; thei < thegame.getRounds(); thei++)
        {
            thegame.Rounds();
        }
        /*----------------------------------------------*/



        /*---------------Fin de la partie----------*/
       std::cout << '\n' << '\n' << std::endl;
       thegame.End();
       std::string theCommand;
       std::cout<<"Appuyez sur 'r' pour recommencer, appuyez sur n'importe quelle autre touche pour quitter la partie"<<std::endl;
       std::cin>>theCommand;
       thegame.Restart(theCommand);

       }
}
