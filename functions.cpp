#include <string>
#include <random>
#include <iostream>

//defining card as struct
//chapter 7
struct Cards {
    int cardValue;
    std::string suit;
};
void ShuffleCards(Cards deck[52]) ;

//testing purposes
void DisplayDeck(Cards deck[52]) {

    for (int i =0; i < 51; i++) {

        std::cout<<deck[i].suit<<std::endl;
        std::cout<<deck[i].cardValue<<std::endl;


    }
}

void NewDeck(Cards deck[52]) {

    std::string suitNames[4] = {"Clubs","Diamonds","Hearts", "Spades"};


    int index=0;
    for (int i =0; i < 4; i++) {

        for (int j = 1; j < 14; j++) {
            deck[index].cardValue = j ;
            deck[index].suit = suitNames[i];
            index++;
        }

    }



}
void ShuffleCards(Cards deck[52]) {

    for (int i =0; i < 52; i++) {

        int random_card = rand() % (i + 1);
        Cards temp_card = deck[i];
        deck[i] = deck[random_card];
        deck[random_card] = temp_card;

    }



}
