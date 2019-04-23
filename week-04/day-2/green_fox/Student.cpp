//
// Created by user on 2019. 04. 23..
//

#include "Student.h"

Student::Student(std::string name, int age, Gender gender, std::string previousOrganisation) : Person(name, age, gender) {
    _previousOrganisation = previousOrganisation;
    _skippedDays = 0;
}

Student::Student() : Person() {
    _previousOrganisation = "School of life";
    _skippedDays = 0;
}

void Student::getGoal() {
    std::cout << "My goal is: Be a junior software developer." << std::endl;
}

void Student::introduce() {
    std::cout << "Hi I'm " << getName() << " a " << getAge() << " year old " << genderToString() << " from " << _previousOrganisation << " who skipped " << _skippedDays << " days." << std::endl;
}

void Student::skipDays(int numberOfDays) {
    _skippedDays += numberOfDays;
}