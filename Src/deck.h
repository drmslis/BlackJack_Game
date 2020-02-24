#include "links.h"

#ifndef DECK_H
#define DECK_H


class Deck : public Hand
{
public:
    Deck();
    virtual ~Deck();

    //create 52-card deck
    void Populate();

    void Shuffle();

    void Deal(Hand& aHand);

    void AdditionalCards(GenericPlayer& aGenericPlayer);

};

#endif // DECK_H
