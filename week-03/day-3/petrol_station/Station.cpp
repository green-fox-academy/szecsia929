//
// Created by user on 2019. 04. 17..
//

#include "Station.h"

Station::Station(int gas) {
    gasAmount = gas;
}

void Station::fill(Car car) {
    while (!car.isFull()) {
        car.fill();
        gasAmount--;
        std::cout << "Filling car!" << std::endl;
    }
}
