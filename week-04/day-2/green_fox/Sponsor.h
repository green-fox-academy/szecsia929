//
// Created by user on 2019. 04. 23..
//

#ifndef GREEN_FOX_SPONSOR_H
#define GREEN_FOX_SPONSOR_H

#include "Person.h"

class Sponsor : public Person {
public:
    Sponsor(std::string name, int age, Gender gender, std::string company);

    Sponsor();

    void introduce() override;

    void getGoal() override;

    void hire();

private:
    std::string _company;
    int _hiredStudents;
};

#endif //GREEN_FOX_SPONSOR_H