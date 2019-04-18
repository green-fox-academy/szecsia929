//
// Created by user on 2019. 04. 17..
//

#include "Sharpie.h"
#include <iostream>

Sharpie::Sharpie(std::string col, float inkA, float wid) {
    color = col;
    inkAmount = inkA;
    width = wid;
}

Sharpie::Sharpie(std::string col) {
    color = col;
    inkAmount = 100;
    width = 1;
}

void Sharpie::use() {
    inkAmount -= (width*0.75);
}

float Sharpie::getInkAmount(){
    return inkAmount;
}