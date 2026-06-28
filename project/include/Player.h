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
#include "Card.h"
#include <string>
#include <vector>
#include <algorithm>
#include <cstdlib>
#include <ctime>

using namespace std;

class Player {
    private:
        string playerID;
        string playerName;
        long playerCash;
        vector<Card> playerHand;
        bool playerActionStands;
        long playerBet;
        bool playerIsCrupier;

    public:
        Player();
        string generatePlayerID();
        string get_playerId();
        string get_playerName();
        void set_playerName(string name);
        long get_playerCash();
        void set_playerCash(long cash);
        void discountPlayerCash(long cash);
        void addPlayerCash(long cash);
        long get_playerBet();
        void set_playerBet(long bet);
        vector<Card> get_playerHand();
        bool get_isPlayerStand();
        long get_playerHandScore();
        void emptyPlayerhand();
        void addCardToPlayerHand(Card card);
        void doStand();
        void doStandFlip();
        bool get_playerIsCrupier();
};

#endif // PLAYER_H
