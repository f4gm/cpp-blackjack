#ifndef UTILS_H
#define UTILS_H

#include <vector>
#include "Card.h"

namespace Utils {
    long calculateBlackjackScore(const std::vector<Card>& hand);
    void clearConsole();
    void pauseConsole();
}

#endif // UTILS_H
