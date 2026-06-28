/*
    Clase: Game
    Curso: Fundamentos de Programación Orientada a Objetos (FPOO)
    Universidad del Valle

    Información CRC:

    Clase: Game

    Responsabilidades:
        - Informa el modo de juego, por el momento, solo se encuentra el juego 'Blackjack'.
        - Informa el estado actual del juego entre las opciones: 'Initializing', 'Playing' y 'Gameover'.
        - Elimina un jugador.
        - Crea un jugador.
        - Inicializa el juego.
        - Controla el loop del juego.
        - Comprueba el estado del juego.

    Colaboradores:
        - Colabora con la clase Player para agregar y eliminar de la lista de jugadores.
        - Colabora con la clase Deck para controlar las cartas disponibles en el juego.

    Autor: Santiago Gil Londoño, Gabriel Giraldo Otalvora, Fernando Andrés Giraldo Mejía
    Correo: gil.santiago@correounivalle.edu.co, giraldo.gabriel@correounivalle.edu.co, fernando.giraldo@correounivalle.edu.co
    Fecha: Mayo 2025
*/

#ifndef GAME_H
#define GAME_H
#include <vector>
#include <string>
#include "Deck.h"
#include "Player.h"

using namespace std;

enum Game_Modes {
    MENU,
    BLACKJACK
};

enum Game_States{
    NOTPLAYING,
    PLAYING,
    PAUSED,
    GAMEEND
};

class Game {
    private:
        short gameTurn;
        Game_Modes gameCurrentGameMode;
        Game_States gameCurrentGameState;
        vector<Player> gamePlayers;
        Deck gameDeck;

    public:
        Game();
        Game_Modes get_CurrentGameMode();
        Game_States get_CurrentGameState();
        void gameInit();
        void gameLoop();

    protected:
        void createPlayer(Player player);
        void deletePlayer(string id);
        int checkGameState();
};

#endif // GAME_H
