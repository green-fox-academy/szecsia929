//
// Created by user on 2019. 04. 23..
//

#ifndef GARDEN_APPLICATION_FLOWER_H
#define GARDEN_APPLICATION_FLOWER_H

#include "Plant.h"

class Flower : public Plant {
public:
    Flower();

    Flower(float waterAmount, std::string color);

    void absorbWater(float waterAmount) override;

    bool needsWater() override;

    std::string getColor() override;

    std::string getClassName() override;

private:
    std::string _color;
};

#endif //GARDEN_APPLICATION_FLOWER_H