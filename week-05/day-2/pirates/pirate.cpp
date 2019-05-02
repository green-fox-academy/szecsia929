//
// Created by user on 2019. 04. 30..
//

#include "pirate.h"

Pirate::Pirate()
{
    _name = "Jack";
    _hp = 10;
    _gold = 10;
    _woodenLeg = false;
    _captain = false;
}

Pirate::Pirate(std::string name)
{
    _name = name;
    _hp = 10;
    _gold = 10;
    _woodenLeg = false;
    _captain = false;
    _captain = false;
}

Pirate::Pirate(std::string name, bool woodenLeg)
{
    _name = name;
    _hp = 10;
    _gold = 10;
    _woodenLeg = woodenLeg;
    _captain = false;
}

Pirate::Pirate(std::string name, bool woodenLeg, bool captain)
{
    _name = name;
    _hp = 10;
    _gold = 10;
    _woodenLeg = woodenLeg;
    _captain = captain;
}

int Pirate::getHp()
{
    return _hp;
}

int Pirate::getGold()
{
    return _gold;
}

int Pirate::getWoodenLeg()
{
    return _woodenLeg;
}

bool Pirate::getCaptain()
{
    return _captain;
}

std::string Pirate::getName()
{
    return _name;
}

void Pirate::setHp(int hp)
{
    _hp = hp;
}

void Pirate::setGold(int gold)
{
    _gold = gold;
}

void Pirate::setWoodenLeg(bool woodenLeg)
{
    _woodenLeg = woodenLeg;
}

void Pirate::setCaptain(bool captain)
{
    _captain = captain;
}

std::string Pirate::toString()
{
    std::string tostring;
    if (_woodenLeg) {
        return "Hello, I'm " + getName() + ". I have a wooden leg and " + std::to_string(getGold()) + " golds.";
    } else {
        return "Hello, I'm " + getName() + ". I still have my real legs and " + std::to_string(getGold()) + " golds.";
    }
}

void Pirate::party()
{
    if (_captain) {
        setHp(getHp() + 10);
    } else {
        setHp(getHp() + 1);
    }
}

void Pirate::work()
{
    if (_captain) {
        setGold(getGold() + 10);
        setHp(getHp() - 5);
    } else {
        setGold(getGold() + 1);
        setHp(getHp() - 1);
    }
}