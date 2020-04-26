#include <iostream>
#include <string>

#include "game.h"


/**
 * \brief Constructeur qui crée la partie avec deux joueurs et un nombre de rounds
 * \param Deux joueurs Player afin qu'ils s'affrontent et un int représentant le nombre de rounds
 */
Game::Game(Player player1, Player player2, int rounds)
{
    this->hisPlayer1 = player1;
    this->hisPlayer2 = player2;
    this->hisRounds = rounds;
}

/**
 * \brief Méthode appelée à chaque round, destinée à comparer les coups de chaque joueur et attribuer les points en conséquence
 */
void Game::Rounds()
{
    std::cout<<"---------------" << std::endl;
    choicesType player1Hit = hisPlayer1.getStrategy()->getChoice();
    choicesType player2Hit = hisPlayer2.getStrategy()->getChoice();
    std::string theHitPlayer1;
    std::string theHitPlayer2;
    switch(player1Hit)
    {
        case 0 : theHitPlayer1 = "pierre"; break;
        case 1 : theHitPlayer1 = "feuille"; break;
        case 2 : theHitPlayer1 = "ciseaux"; break;
    }
    switch(player2Hit)
    {
        case 0 : theHitPlayer2 = "pierre"; break;
        case 1 : theHitPlayer2 = "feuille"; break;
        case 2 : theHitPlayer2 = "ciseaux"; break;
    }
    std::cout<<"Joueur 1 a joué : "<<theHitPlayer1<<std::endl;
    std::cout<<"Joueur 2 a joué : "<<theHitPlayer2<<std::endl;

    if(theHitPlayer1 == "pierre" && theHitPlayer2 == "ciseaux")
    {
        std::cout << "La pierre écrase les ciseaux, le Joueur 1 remporte le round." << std::endl;
        hisPlayer1.addPoint();
    }
    else if (theHitPlayer2 == "pierre" && theHitPlayer1 == "ciseaux")
    {
        std::cout << "La pierre écrase les ciseaux, le Joueur 2 remporte le round." << std::endl;
        hisPlayer2.addPoint();
    }
    if(theHitPlayer1 == "feuille" && theHitPlayer2 == "pierre")
    {
        std::cout << "La feuille enveloppe la pierre, le Joueur 1 remporte le round." << std::endl;
        hisPlayer1.addPoint();
    }
    else if (theHitPlayer2 == "feuille" && theHitPlayer1 == "pierre")
    {
        std::cout << "La feuille enveloppe la pierre, le Joueur 2 remporte le round." << std::endl;
        hisPlayer2.addPoint();
    }
    if(theHitPlayer1 == "ciseaux" && theHitPlayer2 == "feuille")
    {
        std::cout << "Les ciseaux découpent la feuille, le Joueur 1 remporte le round." << std::endl;
        hisPlayer1.addPoint();
    }
    else if (theHitPlayer2 == "ciseaux" && theHitPlayer1 == "feuille")
    {
        std::cout << "Les ciseaux découpent la feuille, le Joueur 2 remporte le round." << std::endl;
        hisPlayer2.addPoint();
    }
    if(theHitPlayer1 == theHitPlayer2)
    {
        std::cout << "Égalité, aucun des deux joueurs ne remportent le round." <<  std::endl;
    }


    std::cout << "Score actuel du Joueur 1 : " << hisPlayer1.getScore() << "." << std::endl;
    std::cout << "Score actuel du Joueur 2 : " << hisPlayer2.getScore() << "." << std::endl;
}

/**
 * \brief Méthode appelée lorsque tous les rounds sont finis et annonce le vainqueur
 */
void Game::End(){
    if(hisPlayer1.getScore() > hisPlayer2.getScore())
    {
        std::cout<<"Fin du jeu ! Joueur 1("<< hisPlayer1.getScore()<<") bats Joueur2("<<hisPlayer2.getScore()<<") ..." << std::endl;
    }
    else if (hisPlayer2.getScore() > hisPlayer1.getScore()){
        std::cout<<"Fin du jeu ! Joueur 2("<< hisPlayer2.getScore()<<") bats Joueur1("<<hisPlayer1.getScore()<<") ..." << std::endl;
    }
    else
    {
       std::cout<<"Fin du jeu ! Egalité entre Joueur 1 et Joueur 2 à "<< hisPlayer1.getScore()<<" points ..."<< std::endl;
    }
}


/**
 * \brief Methode appelée après la méthode End(), elle demande au joueur s'il veut relancer la partie, si non le programme se ferme
 * \param un std::string aCommand, s'il vaut 'r', la partie se relance, sinon le programme se ferme
 */
void Game::Restart(std::string aCommand)
{
    if (aCommand == "r" || aCommand == "R")
    {
        std::cout << '\n' << '\n' << '\n' << '\n' << '\n' << '\n' << "Lancement d'une nouvelle partie !" << std::endl;
        std::cout << "---------------" << '\n' << std::endl;

    }
    else
    {
        exit(EXIT_SUCCESS);
    }
}


/**
 * \brief Permet de retourner le nombre de Rounds, sert à savoir quand le nombre de rounds est atteint
 * \return Retourne le nombre de rounds de la partie en int
 */
int Game::getRounds()
{
    return hisRounds;
}


