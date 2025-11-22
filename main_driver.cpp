#include <iostream>
#include "./functions.cpp"

int main() {
    Cards deck[52];
    //testing lay it out however you want
    NewDeck(deck);
    DisplayDeck(deck);
    ShuffleCards(deck);
    DisplayDeck(deck);
    return 0;
}