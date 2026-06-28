/*
    Clase: Deck
    Curso: Fundamentos de Programación Orientada a Objetos (FPOO)
    Universidad del Valle

    Información CRC:

    Clase: Deck

    Responsabilidades:
        - Almacena la baraja de cartas.
        - Inicializa la baraja de cartas.
        - Mezcla las cartas.
        - Entrega una carta de la baraja de cartas.

    Colaboradores:
        - Colabora con la clase Card.

    Autor: Santiago Gil Londoño, Gabriel Giraldo Otalvora, Fernando Andrés Giraldo Mejía
    Correo: gil.santiago@correounivalle.edu.co, giraldo.gabriel@correounivalle.edu.co, fernando.giraldo@correounivalle.edu.co
    Fecha: Mayo 2025
*/

#ifndef DECK_H
#define DECK_H
#include "Card.h"
#include<vector>

using namespace std;

class Deck {
    private:
        vector<Card> cards;
        void shuffle();

    public:
        Deck();

        void initialize();
        vector<Card> get_cards();
        Card giveCard();
};

#endif // DECK_H
