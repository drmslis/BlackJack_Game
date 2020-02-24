#include "links.h"

#ifndef HOUSE_H
#define HOUSE_H


class House : public GenericPlayer
{
public:
    House(const string& name = "House");

    virtual ~House();

    virtual bool IsHitting() const;

    void FlipFirstCard();
};

#endif // HOUSE_H
