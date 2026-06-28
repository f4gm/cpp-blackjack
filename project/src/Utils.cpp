#include "Utils.h"
#include <cstdlib>
#include <iostream>
#include <limits>

long Utils::calculateBlackjackScore(const std::vector<Card>& hand) {
    long score = 0;
    int aces = 0;

    for (const Card& card : hand) {
        score += card.get_score();

        if (card.get_name() == "As")
            aces++;
    }

    while (aces > 0 && score + 10 <= 21) {
        score += 10;
        aces--;
    }

    return score;
}

void Utils::clearConsole() {
    #ifdef _WIN32
        system("cls");
    #else
        system("clear");
    #endif
}

void Utils::pauseConsole() {
    std::cout << "\nPresione ENTER para continuar...";
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    std::cin.get();
}
