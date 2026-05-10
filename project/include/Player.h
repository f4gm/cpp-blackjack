/*
    Clase: Player
    Curso: Fundamentos de Programación Orientada a Objetos (FPOO)
    Universidad del Valle

    Información CRC:

    Clase: Player

    Responsabilidades:
        - Define el identificador del jugador
        - Informa el identificador del jugador
        - Conoce el nombre del jugador
        - Introduce el nombre del jugador
        - Informa el nombre del jugador
        - Introduce el dinero del jugador
        - Informa el dinero del jugador
        - Descuenta la cantidad deseada al dinero del jugador
        - Aumenta la cantidad deseada al dinero del jugador
        - Informa la mano de cartas que tiene el jugador
        - Recibe una carta para agregarla a la mano de cartas del jugador
        - Informa la puntuación de su mano de cartas
        - Destruye el contenido de la mano de cartas
        - Para el turno del jugador en la partidad
        - Informa si el jugador paró el turno en la partida
        - Introduce la apuesta del jugador
        - Informa la apuesta del jugador
        - Informa si el jugador es un Crupier

    Colaboradores:
        - Colabora con la clase Card para acceder a sus comportamientos que tiene el jugador en la partida

    Autor: Santiago Gil Londoño, Gabriel Giraldo Otalvora, Fernando Andrés Giraldo Mejía
    Correo: gil.santiago@correounivalle.edu.co, giraldo.gabriel@correounivalle.edu.co, fernando.giraldo@correounivalle.edu.co
    Fecha: Mayo 2025
*/

#ifndef PLAYER_H
#define PLAYER_H
#include <vector>
#include <algorithm>

using namespace std;

class Player
{

    private:
        string playerID;
        string playerName = "";
        long playerCash = 0;
        vector<Card> playerHand;
        bool playerActionStands = false;
        long playerBet = 0;

        bool playerIsCrupier;



    public:
        Player();
        virtual ~Player();

        string generatePlayerID(){
            string id;

                // WIP

            return id;
        }

        string get_playerId(){return playerID;}
        string get_playerName(){return playerName;}
        void set_playerName(string name){playerName = name;}

        long get_playerCash(){return playerCash;}
        void set_playerCash(long cash){playerCash = cash;}

        // Add or take player money
        void discountPlayerCash(long cash
            playerCash = clamp(playerCash -= cash, 0, 2147483647);

        }
        void addPlayerCash(long cash){
            playerCash = clamp(playerCash += cash, 0, 2147483647);
        }

        // Set player bet
        long get_playetBet(){return playerBet;}
        void set_playerBet(long bet){
            playerBet = clamp(bet, 0, playerCash);
        }

        vector<Card> get_playerHand(){
            return playerHand;
        }

        bool get_isPlayerStand(){return playerActionStands;}

        long get_playerHandScore(){
            long result = 0;

            if(playerHand != null){
                for (Card card : playerHand) {
                    result += card.get_cardScore();

                }
                return result;
            }
            return 0;

        }


        void emptyPlayerhand(){
            playerHand.clear();
            playerHand.shrink_to_fit();

        }

        void addCardToPlayerHand(Card card){
            playerHand.push_back(card);

        }

        // Player actions

        void doStand(){
            playerActionStands = true;
        }

        void doStandFlip(){
            playerActionStands = !playerActionStands;
        }


        // Other

        bool get_playerIsCrupier(){return playerIsCrupier;}



    protected:


};

#endif // PLAYER_H
