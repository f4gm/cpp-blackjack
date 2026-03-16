#ifndef PLAYER_H
#define PLAYER_H
#include <vector>

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
        void discountPlayerCash(long cash){playerCash -= cash;}
        void addPlayerCash(long cash){playerCash += cash;}

        long get_playetBet(){return playerBet;}
        void set_playerBet(long bet){playerBet = bet}

        vector<Card> get_playerHand(){return playerHand;}

        bool get_isPlayerStand(){return playerActionStands;}

        long get_playerHandScore(){
            long result = 0;
            for (Card card : playerHand) {
                result += card.get_cardScore();

            }
            return result;
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
