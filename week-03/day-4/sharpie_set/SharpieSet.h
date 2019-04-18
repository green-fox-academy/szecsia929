//
// Created by user on 2019. 04. 18..
//

#ifndef SHARPIE_SET_SHARPIESET_H
#define SHARPIE_SET_SHARPIESET_H

#include <vector>
#include "Sharpie.h"

class SharpieSet {
public:
    void addToSet(Sharpie obj);

    void countUsable();

    void removeTrash();

private:
    std::vector<Sharpie> set;
};

#endif //SHARPIE_SET_SHARPIESET_H