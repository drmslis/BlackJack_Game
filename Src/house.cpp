#include "house.h"

bool House::IsHitting() const
{
    return (GetTotal() <=16);
}

void House::FlipFirstCard()
{
    if (!(m_Cards.empty()))
    {
        m_Cards[0]->Flip();
    }
    else
    {
        cout << "No card to flip!\n";
    }

}

House::House(const string& name)
{
    GenericPlayer::m_Name = name;
}

House::~House()
{}
