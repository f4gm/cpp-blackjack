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
#include "Player.h"

using namespace std;

enum Game_Modes {
    MENU,
    BLACKJACK

};

enum Game_State{
    NOTPLAYING,
    PLAYING,
    PAUSED,
    GAMEEND

};


class Game
{

    private:
        short gameTurn = 0;
        enum Game_Modes gameCurrentGameMode = MENU;
        enum Game_State gameCurrentGameState = NOTPLAYING;
        vector<Player> gamePlayers;
        Deck gameDeck;

    public:
        Game();
        virtual ~Game();

        enum get_CurrentGameMode(){ return gameCurrentGameMode; };
        enum get_CurrentGameState(){ return gameCurrentGameState; };

        void gameInit(){
            //WIP

        }

        void gameLoop(){
            //WIP


            // Turn Manager
            for(Player player : gamePlayers){
                if(player.get_playerIsCrupier()){
                    // Crupier Turn



                } elseif(!player.get_isPlayerStand()){
                    // Player Turn if player state is not "stand"


                }


                turn++;
            }

            state = checkGameState();
            if(state == 3){
                break;
            }

        }




    protected:

        void createPlayer(Player player){

            gamePlayers.push_back(player);

        }



        // something is wrong with this but I'm not sure what
        void deletePlayer(string id){

            if(gamePlayers != null){
                for(Player player : gamePlayers) {
                    if(player.get_playerId() == id ){
                        gamePlayers.erase(player);
                    }
                }
        }

        //WIP
        int checkGameState(){
            enum state = get_CurrentGameState();


            if(state == GAMEEND){
                return 3;
            }
        }

};

#endif // GAME_H
