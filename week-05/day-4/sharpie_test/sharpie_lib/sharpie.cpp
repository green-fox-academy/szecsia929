//
// Created by user on 2019. 04. 17..
//

#include "sharpie.h"
#include <iostream>

Sharpie::Sharpie(std::string color, float inkAmount, float width)
{
    _color = color;
    _inkAmount = inkAmount;
    _width = width;
}

Sharpie::Sharpie(std::string color)
{
    _color = color;
    _inkAmount = 100;
    _width = 1;
}

void Sharpie::use()
{
    _inkAmount -= _width;
}

float Sharpie::getInkAmount()
{
    return _inkAmount;
}

void Sharpie::setInkAmount(float inkAmount)
{
    _inkAmount = inkAmount;
}

Sharpie::Sharpie()
{
    _color = "black";
    _inkAmount = 100;
    _width = 1;
}
