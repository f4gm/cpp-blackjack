#include "Player.h"

using namespace std;

Player::Player(string name, long cash)
{
    playerID = generatePlayerID();
    playerName = name;
    playerCash = cash;
}

Player::~Player()
{
    //dtor
}
