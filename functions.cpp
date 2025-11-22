#include <string>
#include <random>
#include <iostream>

//defining card as struct
//chapter 7
struct Cards {
    int cardValue;
    std::string suit;
};

Cards NewDeck() {

    std::string suitNames[4] = {"Clubs","Diamonds","Hears", "Spades"};
    int cardsPerSuit[13];
    Cards deck[52];

    //loop through amount of cards per suit, define amount of cards
    for (int i =1; i < 14; i++) {

        cardsPerSuit[i] = i;

    }

    for (int i =0; i < 4; i++) {

        for (int j = 1; j < 14; j++) {
            deck[j].cardValue = j ;
            deck[j].suit = suitNames[i];
            std::cout<<deck[j].suit<<std::endl;
            std::cout<<deck[j].cardValue<<std::endl;
        }


    }
    return deck[52];
}
void shuffleCards() {

    for (int i =0; i < 51; i++) {



    }


}