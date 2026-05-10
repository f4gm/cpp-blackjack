/*
    Clase: Card
    Curso: Fundamentos de Programación Orientada a Objetos (FPOO)
    Universidad del Valle

    Información CRC:

    Clase: Card

    Responsabilidades:
        - Informa el palo o tipo de carta
        - Informa el puntaje de una carta
        - Informa si la carta se encuentra oculta o no
        - Oculta una carta
        - Muestra una carta

    Colaboradores:

    Autor: Santiago Gil Londoño, Gabriel Giraldo Otalvora, Fernando Andrés Giraldo Mejía
    Correo: gil.santiago@correounivalle.edu.co, giraldo.gabriel@correounivalle.edu.co, fernando.giraldo@correounivalle.edu.co
    Fecha: Mayo 2025
*/

#ifndef CARD_H
#define CARD_H


using namespace std;

class Card
{
    private:
        string suit = "";
        unsigned short score = 0;
        bool hide = false;

    public:
        string get_suit(){return suit;}

        unsigned short get_score(){return score;}

        bool get_hide(){return hide;}

        void hideCard();
        void showCard();

};

#endif // CARD_H
