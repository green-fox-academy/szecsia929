//
// Created by user on 2019. 04. 23..
//

#ifndef GREEN_FOX_STUDENT_H
#define GREEN_FOX_STUDENT_H

#include "Person.h"

class Student : public Person {
public:
    Student(std::string name, int age, Gender gender, std::string previousOrganisation);

    Student();

    void getGoal() override;

    void introduce() override;

    void skipDays(int numberOfDays);

private:
    std::string _previousOrganisation;
    int _skippedDays;
};

#endif //GREEN_FOX_STUDENT_H