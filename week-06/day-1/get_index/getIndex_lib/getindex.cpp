#include <iostream>
#include <vector>
// Created by user on 2019. 05. 13..
//

int getIndex(std::vector<int> vector, int value)
{

    for (int i = 0; i < vector.size(); ++i) {

        if(vector.at(i) == value){
            return i + 1;
        }

    }
    return -1;
}