//
// Created by user on 2019. 04. 17..
//

#ifndef PETROL_STATION_CAR_H
#define PETROL_STATION_CAR_H

#include <iostream>

class Car {
public:
    Car(int cap, int amount);

    void fill();

    bool isFull();

private:
    int capacity;
    int gasAmount;
};


#endif //PETROL_STATION_CAR_H
