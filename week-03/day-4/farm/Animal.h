//
// Created by user on 2019. 04. 17..
//

#ifndef ANIMAL_ANIMAL_H
#define ANIMAL_ANIMAL_H
#include <iostream>


class Animal {
public:
    Animal(int hu, int th);
    Animal();
    void eat();
    void drink();
    void play();
    int getHu();
    int getTh();

private:
    int hunger;
    int thirst;
};


#endif //ANIMAL_ANIMAL_H
