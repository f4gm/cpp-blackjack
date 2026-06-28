#include <iostream>
#include "Deck.h"

using namespace std;

#include <iostream>
#include "Utils.h"
#include "Card.h"
#include "Deck.h"
#include "Player.h"

using namespace std;

void cardMenu() {
    Card card("Picas", "K", 10);

    int option;

    do {
        Utils::clearConsole();

        cout << "\n===== CARD =====\n";
        cout << "1. Mostrar palo\n";
        cout << "2. Mostrar nombre\n";
        cout << "3. Mostrar puntaje\n";
        cout << "4. Mostrar estado oculto\n";
        cout << "5. Ocultar carta\n";
        cout << "6. Mostrar carta\n";
        cout << "0. Volver\n";
        cout << "Opcion: ";
        cin >> option;

        switch(option) {
            case 1:
                cout << card.get_suit() << endl;
                break;

            case 2:
                cout << card.get_name() << endl;
                break;

            case 3:
                cout << card.get_score() << endl;
                break;

            case 4:
                cout << card.get_hide() << endl;
                break;

            case 5:
                card.hideCard();
                break;

            case 6:
                card.showCard();
                break;
        }

        Utils::pauseConsole();

    } while(option != 0);
}

void deckMenu() {
    Deck deck;

    int option;

    do {
        Utils::clearConsole();

        cout << "\n===== DECK =====\n";
        cout << "1. Sacar carta\n";
        cout << "0. Volver\n";
        cout << "Opcion: ";
        cin >> option;

        switch(option) {
            case 1:
            {
                Card card = deck.giveCard();

                cout << card.get_name()
                     << " de "
                     << card.get_suit()
                     << endl;

                break;
            }
        }

        Utils::pauseConsole();

    } while(option != 0);
}

void playerMenu() {
    Player player;
    Deck deck;

    int option;

    do {
        Utils::clearConsole();

        cout << "\n===== PLAYER =====\n";
        cout << "1. Mostrar ID\n";
        cout << "2. Cambiar nombre\n";
        cout << "3. Mostrar nombre\n";
        cout << "4. Cambiar dinero\n";
        cout << "5. Mostrar dinero\n";
        cout << "6. Agregar dinero\n";
        cout << "7. Descontar dinero\n";
        cout << "8. Dar carta\n";
        cout << "9. Mostrar mano\n";
        cout << "10. Puntaje\n";
        cout << "11. Vaciar mano\n";
        cout << "12. Stand\n";
        cout << "13. Estado stand\n";
        cout << "0. Volver\n";

        cin >> option;

        switch(option) {
            case 1:
                cout << player.get_playerId() << endl;
                break;

            case 2:
            {
                string name;
                cout << "Nombre: ";
                cin >> name;
                player.set_playerName(name);
                break;
            }

            case 3:
                cout << player.get_playerName() << endl;
                break;

            case 4:
            {
                long cash;
                cin >> cash;
                player.set_playerCash(cash);
                break;
            }

            case 5:
                cout << player.get_playerCash() << endl;
                break;

            case 6:
            {
                long cash;
                cin >> cash;
                player.addPlayerCash(cash);
                break;
            }

            case 7:
            {
                long cash;
                cin >> cash;
                player.discountPlayerCash(cash);
                break;
            }

            case 8:
                player.addCardToPlayerHand(deck.giveCard());
                break;

            case 9:
            {
                vector<Card> hand = player.get_playerHand();

                for (Card card : hand)
                {
                    cout << card.get_name()
                         << " de "
                         << card.get_suit()
                         << endl;
                }

                break;
            }

            case 10:
                cout << player.get_playerHandScore()
                     << endl;
                break;

            case 11:
                player.emptyPlayerhand();
                break;

            case 12:
                player.doStand();
                break;

            case 13:
                cout << player.get_isPlayerStand()
                     << endl;
                break;
        }

        Utils::pauseConsole();

    } while(option != 0);
}


int main() {
    int option;

    do
    {
        cout << "\n===== MENU PRINCIPAL =====\n";
        cout << "1. Probar Card\n";
        cout << "2. Probar Deck\n";
        cout << "3. Probar Player\n";
        cout << "0. Salir\n";
        cout << "Opcion: ";
        cin >> option;

        switch(option)
        {
            case 1:
                cardMenu();
                break;

            case 2:
                deckMenu();
                break;

            case 3:
                playerMenu();
                break;
        }

    } while(option != 0);

    return 0;
}
