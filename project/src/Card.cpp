#include "Card.h"

Card::Card(string suit, string name, unsigned short score) {
    this->suit = suit;
    this->name = name;
    this->score = score;
    this->hide = false;
}

string Card::get_suit() const {
    return suit;
}

string Card::get_name() const {
    return name;
}

unsigned short Card::get_score() const {
    return score;
}

bool Card::get_hide() const {
    return hide;
}

void Card::hideCard() {
    hide = true;
}

void Card::showCard() {
    hide = false;
}
