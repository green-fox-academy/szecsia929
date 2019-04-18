//
// Created by user on 2019. 04. 17..
//

#ifndef SHARPIE_SHARPIE_H
#define SHARPIE_SHARPIE_H

#include <iostream>

class Sharpie {
public:
    Sharpie(std::string col, float inkA, float wid);
    Sharpie(std::string col);

    void use();
    float getInkAmount();

private:
    std::string color;
    float inkAmount;
    float width;
};

#endif //SHARPIE_SHARPIE_H