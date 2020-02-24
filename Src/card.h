#include "links.h"

#ifndef CARD_H
#define CARD_H

class Card{
public:
    enum rank {
        ACE = 1, TWO, THREE, FOUR, FIVE, SIX, SEVEN, EIGHT, NINE, TEN, JACK, QUEEN, KING
    };

    enum suit {
    CLUBS,
    DIAMONDS,
    HEARTS,
    SPADES};

    //overload <<
    friend ostream& operator<<(ostream& os, const Card& aCard);

    Card(rank r = ACE, suit s = SPADES, bool ifu = true);
    int GetValue() const;
    void Flip();



private:
    rank m_Rank;
    suit m_Suit;
    bool m_IsFaceUp;
};

#endif // CARD_H
