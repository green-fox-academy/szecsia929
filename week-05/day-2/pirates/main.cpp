#include <iostream>
#include "ship.h"

int main()
{
    Pirate one("one", false, true);
    Pirate two("two", true);
    Pirate three("three", true);
    Pirate anotherOne("asd", true, true);
    Ship ship;

    three.setGold(5);
    ship.recruit(one);
    ship.recruit(two);
    ship.recruit(three);
    ship.recruit(anotherOne);

    std::cout << "One: " << one.getGold()<<" , " << one.getHp() << std::endl;
    one.work();
    std::cout << "One after work: " << one.getGold()<<" , " << one.getHp() << std::endl;
    one.party();
    std::cout << "One after party: " << one.getGold()<<" , " << one.getHp() << std::endl;
    std::cout << "Two: " << two.getGold()<<" , " << two.getHp() << std::endl;
    two.work();
    std::cout << "Two after work: " << two.getGold()<<" , " << two.getHp() << std::endl;
    two.party();
    std::cout << "Two after party: " << two.getGold()<<" , " << two.getHp() << std::endl;

    std::cout << "-------------------------------------" << std::endl;

    std::cout << "One: " << one.getGold()<<" , " << one.getHp() << std::endl;
    ship.getCaptain().work();
    std::cout << "One after work: " << one.getGold()<<" , " << one.getHp() << std::endl;
    ship.getCaptain().party();
    std::cout << "One after party: " << one.getGold()<<" , " << one.getHp() << std::endl;
    std::cout << "Two: " << two.getGold()<<" , " << two.getHp() << std::endl;
    two.work();
    std::cout << "Two after work: " << two.getGold()<<" , " << two.getHp() << std::endl;
    two.party();
    std::cout << "Two after party: " << two.getGold()<<" , " << two.getHp() << std::endl;

    std::cout << "-------------------------------------" << std::endl;

    for (int j = 0; j < ship.getCrew().size(); ++j) {
        std::cout << ship.getCrew().at(j).toString() << std::endl;
    }

    std::vector<std::string> poor = ship.getPoor();

    std::cout << "Gold sum: " << ship.getGoldSum() << std::endl;
    std::cout << "Poor pirates: ";

    for (int i = 0; i < poor.size(); ++i) {
        if (i != poor.size() - 1) {
            std::cout << poor.at(i) << ", ";
        } else {
            std::cout << poor.at(i) << std::endl;
        }
    }

    ship.lastDay();
    ship.battle();
    std::cout << "--------------------------------------" << std::endl;

    for (int j = 0; j < ship.getCrew().size(); ++j) {
        std::cout << ship.getCrew().at(j).toString() << std::endl;
    }

    std::cout << "Gold sum: " << ship.getGoldSum() << std::endl;
    poor = ship.getPoor();

    for (int i = 0; i < poor.size(); ++i) {
        if (i != poor.size() - 1) {
            std::cout << poor.at(i) << ", ";
        } else {
            std::cout << poor.at(i) << std::endl;
        }
    }

    return 0;
}