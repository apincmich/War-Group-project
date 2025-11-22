#include <iostream>
#include "./functions.cpp"

int main() {
    Cards deck[52];
    NewDeck(deck);
    DisplayDeck(deck);
    ShuffleCards(deck);
    DisplayDeck(deck);
    return 0;
}