//
// Created by user on 2019. 04. 23..
//

#ifndef GREEN_FOX_PERSON_H
#define GREEN_FOX_PERSON_H

#include <string>
#include <iostream>

enum Gender {
    MALE,
    FEMALE
};

class Person {
public:
    Person(std::string name, int age, Gender gender);

    Person();

    void virtual introduce();

    void virtual getGoal();

    std::string genderToString();

    std::string getName();

    int getAge();

private:
    std::string _name;
    int _age;
    Gender _gender;
};

#endif //GREEN_FOX_PERSON_H