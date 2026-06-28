#include "Deck.h"
#include <algorithm>
#include <random>

using namespace std;

Deck::Deck() {
    this->initialize();
}

void Deck::initialize() {
    this->cards.clear();

    string suits[] = {
        "Corazones",
        "Diamantes",
        "Treboles",
        "Picas"
    };

    string names[] = {
        "As",
        "2",
        "3",
        "4",
        "5",
        "6",
        "7",
        "8",
        "9",
        "10",
        "J",
        "Q",
        "K"
    };

    for (int s = 0; s < 4; s++) {
        for (int i = 0; i < 13; i++) {
            unsigned short score;

            if (i == 0)
                score = 1;          // As
            else if (i >= 10)
                score = 10;         // J, Q, K
            else
                score = i + 1;      // 2-10

            this->cards.push_back(
                Card(
                    suits[s],
                    names[i],
                    score
                )
            );
        }
    }

    shuffle();
}

void Deck::shuffle() {
    random_device rd;
    mt19937 g(rd());

    std::shuffle(this->cards.begin(), this->cards.end(), g);
}

vector<Card> Deck::get_cards() {
    return this->cards;
}

Card Deck::giveCard() {
    Card card = this->cards.back();
    this->cards.pop_back();

    return card;
}
