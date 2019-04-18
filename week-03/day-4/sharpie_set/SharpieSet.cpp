//
// Created by user on 2019. 04. 18..
//

#include "SharpieSet.h"

void SharpieSet::addToSet(Sharpie obj) {
    set.push_back(obj);
}

void SharpieSet::countUsable() {
    int counter = 0;
    for (int i = 0; i < set.size(); i++) {
        if (set.at(i).getInkAmount() > 0) {
            counter++;
        }
    }
    std::cout << "From " << set.size() << ", " << counter << " is usable." << std::endl;
}

void SharpieSet::removeTrash() {
    int size = set.size();
    int counter = 0;
    for (int i = 0; i < set.size(); ++i) {
        if (set.at(i).getInkAmount() == 0) {
            counter++;
            set.erase(set.begin()+i);
            i--;
        }
    }
    std::cout << "From " << size << ", " << counter << " have ben thrown out." << std::endl;
}