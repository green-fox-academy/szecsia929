//
// Created by user on 2019. 04. 24..
//

#include <iostream>
#include "violin.h"

std::string Violin::sound() {
    return "Screech";
}

void Violin::play() {
    std::cout << _name << ", is a " << _numberOfStrings << "-stringed instrument that goes " << sound() << std::endl;
}

Violin::Violin() {
    _name = "Violin";
    _numberOfStrings = 4;
}

Violin::Violin(int numberOfStrings) {
    _name = "Violin";
    _numberOfStrings = numberOfStrings;
}