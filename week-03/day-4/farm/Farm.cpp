//
// Created by user on 2019. 04. 18..
//

#include "Farm.h"

void Farm::breed() {
    if (animals.size() < capacity) {
        Animal newborn(int(rand() % 100), int(rand() % 100));
        animals.push_back(newborn);
        std::cout << "Animal number: " << animals.size() << " Hunger: " << newborn.getHu() << std::endl;
    }
}

void Farm::slaughter() {
    int indexOfLeastHungry = 0;
    for (int i = 0; i < animals.size(); ++i) {
        for (int j = 0; j < animals.size(); ++j) {
            if (animals.at(j).getHu() < animals.at(indexOfLeastHungry).getHu()) {
                indexOfLeastHungry = j;
            }
        }
    }
    animals.erase(animals.begin() + indexOfLeastHungry);
    std::cout << "Animal number: " << indexOfLeastHungry + 1 << " have been slaughterd." << std::endl;
    std::cout << animals.size() << " animal(s) is(are) left." << std::endl;
}