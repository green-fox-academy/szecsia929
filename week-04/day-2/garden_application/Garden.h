//
// Created by user on 2019. 04. 23..
//

#ifndef GARDEN_APPLICATION_GARDEN_H
#define GARDEN_APPLICATION_GARDEN_H

#include <vector>
#include "Tree.h"
#include "flower.h"

class Garden {
public:
    void watering(float waterAmount);

    void gardenStatus();

    void addToGarden(Plant &plant);

private:
    std::vector<Plant*> garden;
};

#endif //GARDEN_APPLICATION_GARDEN_H