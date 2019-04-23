//
// Created by user on 2019. 04. 23..
//

#ifndef GARDEN_APPLICATION_PLANT_H
#define GARDEN_APPLICATION_PLANT_H

#include <iostream>

class Plant {
public:
    Plant();

    Plant(int waterAmount);

    void setWaterAmount(float waterAmount);

    float getWaterAmount();

    virtual bool needsWater();

    virtual void absorbWater(float waterAmount);

    virtual std::string getColor();

    virtual std::string getClassName();

private:
    float _waterAmount;
};

#endif //GARDEN_APPLICATION_PLANT_H