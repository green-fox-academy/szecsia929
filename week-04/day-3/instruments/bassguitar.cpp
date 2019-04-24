//
// Created by user on 2019. 04. 24..
//

#include <iostream>
#include "bassguitar.h"

std::string BassGuitar::sound() {
    return "Duum-duum-duum";
}

void BassGuitar::play() {
    std::cout << _name << ", is a " << _numberOfStrings << "-stringed instrument that goes " << sound() << std::endl;
}

BassGuitar::BassGuitar(int numberOfStrings) {
    _name = "Bass Guitar";
    _numberOfStrings = numberOfStrings;
}

BassGuitar::BassGuitar() {
    _name = "Bass Guitar";
    _numberOfStrings = 4;
}
