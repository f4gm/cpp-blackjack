#include "Player.h"
#include "Utils.h"
#include <cstdlib>

Player::Player() {
    playerID = generatePlayerID();
    playerName = "";
    playerCash = 0;
    playerActionStands = false;
    playerBet = 0;
    playerIsCrupier = false;
}

string Player::generatePlayerID() {
    return "P" + to_string(rand() % 1000000);
}

string Player::get_playerId() {
    return playerID;
}

string Player::get_playerName() {
    return playerName;
}

void Player::set_playerName(string name) {
    playerName = name;
}

long Player::get_playerCash() {
    return playerCash;
}

void Player::set_playerCash(long cash) {
    playerCash = cash;
}

void Player::discountPlayerCash(long cash) {
    playerCash -= cash;
}

void Player::addPlayerCash(long cash) {
    playerCash += cash;
}

long Player::get_playerBet() {
    return playerBet;
}

void Player::set_playerBet(long bet) {
    playerBet = bet;
}

vector<Card> Player::get_playerHand() {
    return playerHand;
}

void Player::addCardToPlayerHand(Card card) {
    playerHand.push_back(card);
}

void Player::emptyPlayerhand() {
    playerHand.clear();
}

bool Player::get_isPlayerStand() {
    return playerActionStands;
}

void Player::doStand() {
    playerActionStands = true;
}

void Player::doStandFlip() {
    playerActionStands = !playerActionStands;
}

long Player::get_playerHandScore() {
    return Utils::calculateBlackjackScore(playerHand);
}

bool Player::get_playerIsCrupier() {
    return playerIsCrupier;
}
