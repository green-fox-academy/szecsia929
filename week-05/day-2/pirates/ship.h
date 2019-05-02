//
// Created by user on 2019. 04. 30..
//

#ifndef PIRATES_SHIP_H
#define PIRATES_SHIP_H

#include <vector>
#include <iostream>
#include "pirate.h"

class Ship {
public:
    int getGoldSum();

    std::vector<std::string> getPoor();

    void recruit(Pirate &recruit);

    void lastDay();

    void battle();

    std::vector<Pirate> getCrew();

    Pirate getCaptain();

private:
    Pirate _captain;
    bool _hasCaptain = false;
    std::vector<Pirate> _crew;
};

#endif //PIRATES_SHIP_H