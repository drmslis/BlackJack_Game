#include "links.h"

#ifndef GAME_H
#define GAME_H


class Game
{
public:
    Game(const vector<string>& names);

    ~Game();

    //so finaly that starts blackjack game %)
    void Play();

private:
    Deck m_Deck;
    House m_House;
    vector<Player> m_Players;
};

#endif // GAME_H
