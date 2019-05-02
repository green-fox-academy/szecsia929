//
// Created by user on 2019. 04. 17..
//

#ifndef SHARPIE_SHARPIE_H
#define SHARPIE_SHARPIE_H

#include <iostream>


class Sharpie {
public:
    Sharpie();
    Sharpie(std::string color, float inkAmount, float width);
    Sharpie(std::string color);

    void use();
    float getInkAmount();
    void setInkAmount(float inkAmount);

private:
    std::string _color;
    float _inkAmount;
    float _width;
};


#endif //SHARPIE_SHARPIE_H
