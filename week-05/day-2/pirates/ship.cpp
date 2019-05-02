//
// Created by user on 2019. 04. 30..
//

#include "ship.h"

std::vector <std::string> Ship::getPoor()
{
    std::vector <std::string> poor;
    for (int i = 0; i < _crew.size(); ++i) {
        if (_crew.at(i).getWoodenLeg() && _crew.at(i).getGold() < 15) {
            poor.push_back(_crew.at(i).getName());
        }
    }
    return poor;
}

void Ship::recruit(Pirate &recruit)
{
    if (!_hasCaptain && recruit.getCaptain()) {
        _crew.push_back(recruit);
        _hasCaptain = true;
        _captain = recruit;
    } else if (_hasCaptain && recruit.getCaptain()) {
        std::cout << "Ship already has a captain." << std::endl;
    } else {
        _crew.push_back(recruit);
    }
}

void Ship::lastDay()
{
    for (int i = 0; i < _crew.size(); ++i) {
        _crew.at(i).party();
    }
}

void Ship::battle()
{
    for (int i = 0; i < _crew.size(); ++i) {
        _crew.at(i).work();
        _crew.at(i).work();
        _crew.at(i).work();
        _crew.at(i).work();
        _crew.at(i).work();
    }
    lastDay();
}

int Ship::getGoldSum()
{
    int sum = 0;
    for (int i = 0; i < _crew.size(); ++i) {
        sum += _crew.at(i).getGold();
    }
    return sum;
}

std::vector <Pirate> Ship::getCrew()
{
    return _crew;
}

Pirate Ship::getCaptain()
{
    return _captain;
}
