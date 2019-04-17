//
// Created by user on 2019. 04. 17..
//
#include "Counter.h"

Counter::Counter(){
    initial = 0;
    counter = 0;
}

Counter::Counter(int number){
    initial = number;
    counter = number;
}

void Counter::add(){
    counter++;
}

void Counter::add(int number){
    counter += number;
}

void Counter::reset(){
    counter = initial;
}

int Counter::get(){
    return counter;
}