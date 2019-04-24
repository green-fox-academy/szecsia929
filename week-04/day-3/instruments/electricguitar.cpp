//
// Created by user on 2019. 04. 24..
//

#include <iostream>
#include "electricguitar.h"

void ElectricGuitar::play() {
    std::cout << _name << ", is a " << _numberOfStrings << "-stringed instrument that goes " << sound() << std::endl;
}

std::string ElectricGuitar::sound() {
    return "Twang";
}

ElectricGuitar::ElectricGuitar() {
    _name = "Electric Guitar";
    _numberOfStrings = 6;
}

ElectricGuitar::ElectricGuitar(int numberOfStrings) {
    _name = "Electric Guitar";
    _numberOfStrings = numberOfStrings;
}
