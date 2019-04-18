//
// Created by user on 2019. 04. 18..
//

#ifndef FARM_FARM_H
#define FARM_FARM_H

#include <vector>
#include <time.h>
#include "Animal.h"

class Farm {
public:
    void breed();
    void slaughter();
private:
    int capacity = 100;
    std::vector<Animal> animals;
};


#endif //FARM_FARM_H
