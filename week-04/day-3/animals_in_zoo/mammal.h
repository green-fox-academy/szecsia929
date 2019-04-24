//
// Created by user on 2019. 04. 24..
//

#ifndef ANIMALS_IN_ZOO_MAMMAL_H
#define ANIMALS_IN_ZOO_MAMMAL_H

#include <string>
#include "animal.h"
#include "miniature.h"

class Mammal : public Animal, Miniature {
public:
    Mammal(std::string name);

    std::string miniature() override;

    std::string getName() override;

    std::string breed() override;

    std::string getGenderAsString() override;

    std::string getDietAsString() override;

    std::string getSpeciesStatus() override;
};

#endif //ANIMALS_IN_ZOO_MAMMAL_H