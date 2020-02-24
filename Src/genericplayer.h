#include "links.h"

#ifndef GENERICPLAYER_H
#define GENERICPLAYER_H


class GenericPlayer : public Hand
{
    friend ostream& operator<< (ostream& os, const GenericPlayer& aGenericPlayer);

    public:
        GenericPlayer(const string& name = "");

        virtual ~GenericPlayer();

        virtual bool IsHitting() const = 0;

        bool IsBusted() const;

        void Bust() const;

    protected:
        string m_Name;
};

#endif // GENERICPLAYER_H
