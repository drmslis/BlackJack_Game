#include "links.h"

#ifndef HAND_H
#define HAND_H

class Hand{
public:
    Hand();
    virtual ~Hand();

    //add card to hand
    void Add(Card* pCard);

    //clear hand
    void Clear();

    //get sum of cards value.
    //Ace cost 1 or 11 depending by case
    int GetTotal() const;

protected:
    vector<Card*> m_Cards;
};

#endif // HAND_H
