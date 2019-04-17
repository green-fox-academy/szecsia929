//
// Created by user on 2019. 04. 17..
//

#ifndef COUNTER_COUNTER_H
#define COUNTER_COUNTER_H

#include <iostream>


class Counter {
public:
    Counter();

    Counter(int number);

    void add();

    void add(int number);

    void reset();

    int get();
private:
    int initial;
    int counter;
};


#endif //COUNTER_COUNTER_H
