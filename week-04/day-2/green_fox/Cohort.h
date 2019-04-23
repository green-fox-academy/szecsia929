//
// Created by user on 2019. 04. 23..
//

#ifndef GREEN_FOX_COHORT_H
#define GREEN_FOX_COHORT_H

#include <vector>
#include "Student.h"
#include "Mentor.h"

class Cohort {
public:
    Cohort(std::string name);

    void addStudent(Student *student);

    void addMentor(Mentor *mentor);

    void info();

private:
    std::string _CohortName;
    std::vector<Student> students;
    std::vector<Mentor> mentors;
};


#endif //GREEN_FOX_COHORT_H
