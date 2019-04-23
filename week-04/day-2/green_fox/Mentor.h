//
// Created by user on 2019. 04. 23..
//

#ifndef GREEN_FOX_MENTOR_H
#define GREEN_FOX_MENTOR_H

#include "Person.h"

enum Level {
    JUNIOR,
    INTERMEDIATE,
    SENIOR
};

class Mentor : public Person {
public:
    Mentor(std::string name, int age, Gender gender, Level level);

    Mentor();

    void getGoal() override;

    void introduce() override;

    std::string getLevelAsString();

private:
    Level _level;
};

#endif //GREEN_FOX_MENTOR_H