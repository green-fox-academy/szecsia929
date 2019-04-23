//
// Created by user on 2019. 04. 23..
//

#include "Cohort.h"

Cohort::Cohort(std::string name) {
    _CohortName = name;
}

void Cohort::addStudent(Student *student) {
    students.push_back(*student);
}

void Cohort::addMentor(Mentor *mentor) {
    mentors.push_back(*mentor);
}

void Cohort::info() {
    std::cout << "The " << _CohortName << " cohort has " << students.size() << " students and " << mentors.size() << " mentors" << std::endl;
}