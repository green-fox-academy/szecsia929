//
// Created by user on 2019. 04. 17..
//

#include "Animal.h"
#include <iostream>

Animal::Animal(int hu, int th){
    hunger = hu;
    thirst = th;
}

Animal::Animal() {
    hunger = 50;
    thirst = 50;
}

void Animal::eat(){
    hunger--;
}

void Animal::drink(){
    thirst--;
}

void Animal::play(){
    hunger++;
    thirst++;
}

int Animal::getHu(){
    return hunger;
}

int Animal::getTh(){
    return thirst;
}