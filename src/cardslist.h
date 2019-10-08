#ifndef CARDSLIST_H
#define CARDSLIST_H
#include <vector>
#include <iostream>     // std::cout
#include <algorithm>    // std::shuffle
#include <random>       // std::default_random_engine
#include <chrono>       // std::chrono::system_clock
#include <ctime>
#include "card.h"


namespace DP {
    const static std::array<int,32> cardsDistribution = {{
        0,0,0,0,0,0,0,0,
        1,1,1,1,1,1,1,1,
        2,2,2,2,2,2,2,2,
        3,3,3,3,3,3,3,3,
    }};
    const static std::array<int,2> cardsDistributionDebug = {{
        2,3
    }};
    const static int PILE_SIZE = DP::cardsDistribution.size();

}

class CardsList
{
public:
    CardsList(); // To create an array of CardsList
    explicit CardsList(int element);
//    int amount;

//    std::vector<Card*> sd;
    /*!
     * \brief element Number of the element
     */

    std::array<Card, DP::PILE_SIZE> cardsPile;
    int currentCard;
    int element; /*!< Number of the element */
    float invisibleLeft;
    bool active;
    void shufflePile();

};

#endif // CARDSLIST_H
