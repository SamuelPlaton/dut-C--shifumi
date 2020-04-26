#include "player.h"
#include "Strategy.h"
#include "HumanStrategy.h"


/**
 * \brief Constructeur plein de la classe Player
 * \param booleen isHuman pour définir un type de joueur
 */
Player::Player(bool isHuman)
{
    this->isHuman = isHuman;
    this->hisScore = 0;
}


/**
 * \brief Constructeur par défaut de la classe Player
 *
 */
Player::Player()
{

}


/**
 * \brief Setter de la stratégie d'un joueur
 * \param Strategy* aStrategy afin de donner une stratégie au joueur selon son type (Humain ou Robot)
 */
void Player::setStrategy(Strategy* aStrategy){
    this->hisStrategy = aStrategy;
}


/**
 * \brief Incrémente le score du joueur de 1
 */
void Player::addPoint(){
    this->hisScore +=1;
}


/**
 * \brief Getter du type du joueur
 * \return Retourne un boolean true si le joueur est humain, false sinon
 */
bool Player::getIsHuman()
{
    return this->isHuman;
}


/**
 * \brief Getter du score du joueur
 * \return Retourne un int valant le score du joueur
 */
int Player::getScore()
{
    return this->hisScore;
}

/* Retourne la stratégie du joueur */

/**
 * \brief Getter de la stratégie du joueur
 * \return Retourne un Strategy* représentant la stratégie du joueur
 */
Strategy* Player::getStrategy()
{
    return this->hisStrategy;
}
