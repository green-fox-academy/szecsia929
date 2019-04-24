//
// Created by user on 2019. 04. 24..
//

#ifndef ANIMALS_IN_ZOO_ANIMAL_H
#define ANIMALS_IN_ZOO_ANIMAL_H

#include <string>

enum Gender {
    MALE,
    FEMALE
};

enum Diet {
    HERBIVORE,
    CARNIVORE,
    OMNIVOROUS
};

class Animal{
public:
    virtual std::string getName() = 0;

    virtual std::string breed() = 0;

    virtual std::string getGenderAsString() = 0;

    virtual std::string getDietAsString() = 0;

    virtual std::string getSpeciesStatus() = 0;

protected:
    std::string _name;
    int _age;
    Gender _gender;
    Diet _diet;
    bool _extinct;
};

#endif //ANIMALS_IN_ZOO_ANIMAL_H