//
// Created by user on 2019. 04. 24..
//

#include <iostream>
#include "bird.h"

std::string Bird::getSpeciesStatus() {
    if (_extinct) {
        return _name + " is extinct.\n";
    } else
        return _name + " is not extinct.\n";
}

Bird::Bird(std::string name) {
    _name = name;
    _extinct = false;
    _diet = OMNIVOROUS;
    _gender = FEMALE;
    _age = 10;
}

std::string Bird::layEggs() {
    return "laying eggs.";
}

std::string Bird::getName() {
    return _name;
}

std::string Bird::breed() {
    return layEggs();
}

std::string Bird::getGenderAsString() {
    switch (_gender) {
        case MALE:
            return "male";
        case FEMALE:
            return "female";
    }
}

std::string Bird::getDietAsString() {
    switch (_diet) {
        case OMNIVOROUS:
            return "omnivorous";
        case CARNIVORE:
            return "carnivore";
        case HERBIVORE:
            return "herbivore";
    }
}

void Bird::fly() {
    std::cout << getName() << " is flying" << std::endl;
}

void Bird::takeOff() {
    std::cout << getName() << " is taking off" << std::endl;
}

void Bird::land() {
    std::cout << getName() << " is landing" << std::endl;
}
