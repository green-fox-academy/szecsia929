//
// Created by user on 2019. 04. 30..
//

#ifndef PIRATES_PIRATE_H
#define PIRATES_PIRATE_H

#include <string>

class Pirate {
public:
    Pirate();

    Pirate(std::string name);

    Pirate(std::string name, bool woodenLeg);

    Pirate(std::string name, bool woodenLeg, bool captain);

    int getHp();

    int getGold();

    int getWoodenLeg();

    bool getCaptain();

    std::string getName();

    void setHp(int hp);

    void setGold(int gold);

    void setWoodenLeg(bool woodenLeg);

    void setCaptain(bool captain);

    std::string toString();

    virtual void party();

    virtual void work();

private:
    std::string _name;
    int _hp;
    int _gold;
    bool _woodenLeg;
    bool _captain;
};

#endif //PIRATES_PIRATE_H