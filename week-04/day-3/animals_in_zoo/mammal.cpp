//
// Created by user on 2019. 04. 24..
//

#include "mammal.h"

std::string Mammal::getSpeciesStatus() {
    if (_extinct) {
        return _name + " is extinct.\n";
    } else
        return _name + " is not extinct.\n";
}

Mammal::Mammal(std::string name) {
    _name = name;
    _extinct = false;
    _diet = OMNIVOROUS;
    _gender = FEMALE;
    _age = 10;
}

std::string Mammal::getName() {
    return _name;
}

std::string Mammal::breed() {
    return miniature();
}

std::string Mammal::getGenderAsString() {
    switch (_gender) {
        case MALE:
            return "male";
        case FEMALE:
            return "female";
    }
}

std::string Mammal::getDietAsString() {
    switch (_diet) {
        case OMNIVOROUS:
            return "omnivorous";
        case CARNIVORE:
            return "carnivore";
        case HERBIVORE:
            return "herbivore";
    }
}

std::string Mammal::miniature() {
    return "pushing miniature versions out.";
}