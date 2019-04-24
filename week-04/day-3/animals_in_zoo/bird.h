//
// Created by user on 2019. 04. 24..
//

#ifndef ANIMALS_IN_ZOO_BIRD_H
#define ANIMALS_IN_ZOO_BIRD_H

#include "animal.h"
#include "layegg.h"

class Bird : public Animal, LayEggs {
public:
    Bird(std::string name);

    std::string layEggs() override;

    std::string getName() override;

    std::string breed() override;

    std::string getGenderAsString() override;

    std::string getDietAsString() override;

    std::string getSpeciesStatus() override;
};

#endif //ANIMALS_IN_ZOO_BIRD_H