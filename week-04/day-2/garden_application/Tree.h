//
// Created by user on 2019. 04. 23..
//

#ifndef GARDEN_APPLICATION_TREE_H
#define GARDEN_APPLICATION_TREE_H

#include "Plant.h"

class Tree : public Plant {
public:
    Tree();

    Tree(float waterAmount, std::string color);

    void absorbWater(float waterAmount) override;

    bool needsWater() override;

    std::string getColor() override;

    std::string getClassName() override;

private:
    std::string _color;
};

#endif //GARDEN_APPLICATION_TREE_H