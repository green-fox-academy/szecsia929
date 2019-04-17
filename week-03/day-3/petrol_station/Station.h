//
// Created by user on 2019. 04. 17..
//

#ifndef PETROL_STATION_STATION_H
#define PETROL_STATION_STATION_H

#include <iostream>
#include "Car.h"

class Station {
public:
    Station(int gas);

    void fill(Car car);

private:
    int gasAmount;
};

#endif //PETROL_STATION_STATION_H
