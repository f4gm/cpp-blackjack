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
