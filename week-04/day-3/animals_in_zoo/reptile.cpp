//
// Created by user on 2019. 04. 24..
//

#include "reptile.h"

std::string Reptile::getSpeciesStatus() {
    if (_extinct) {
        return _name + " is extinct.\n";
    } else
        return _name + " is not extinct.\n";
}

Reptile::Reptile(std::string name) {
    _name = name;
    _extinct = false;
    _diet = OMNIVOROUS;
    _gender = FEMALE;
    _age = 10;
}

std::string Reptile::layEggs() {
    return "laying eggs.";
}

std::string Reptile::getName() {
    return _name;
}

std::string Reptile::breed() {
    return layEggs();
}

std::string Reptile::getGenderAsString() {
    switch (_gender) {
        case MALE:
            return "male";
        case FEMALE:
            return "female";
    }
}

std::string Reptile::getDietAsString() {
    switch (_diet) {
        case OMNIVOROUS:
            return "omnivorous";
        case CARNIVORE:
            return "carnivore";
        case HERBIVORE:
            return "herbivore";
    }
}