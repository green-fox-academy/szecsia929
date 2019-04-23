//
// Created by user on 2019. 04. 23..
//

#include "Person.h"

Person::Person(std::string name, int age, Gender gender) {
    _name = name;
    _age = age;
    _gender = gender;
}

Person::Person() {
    _name = "Jane Doe";
    _age = 30;
    _gender = FEMALE;
}

void Person::introduce() {
    std::cout << "Hi I'm " << _name << " a " << _age << " year old " << genderToString() << "." << std::endl;
}

void Person::getGoal() {
    std::cout << "My goal is: Live for the moment!" << std::endl;
}

std::string Person::genderToString() {
    switch (_gender) {
        case MALE:
            return "male";
        case FEMALE:
            return "female";
    }
}

std::string Person::getName(){
    return _name;
}

int Person::getAge(){
    return _age;
}