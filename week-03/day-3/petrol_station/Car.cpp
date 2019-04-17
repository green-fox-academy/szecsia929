//
// Created by user on 2019. 04. 17..
//

#include "Car.h"

Car::Car(int cap, int amount){
    capacity = cap;
    gasAmount = amount;
}

void Car::fill(){
    gasAmount++;
}

bool Car::isFull(){
    return (capacity==gasAmount);
}