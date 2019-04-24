//
// Created by user on 2019. 04. 24..
//

#ifndef INSTRUMENTS_VIOLIN_H
#define INSTRUMENTS_VIOLIN_H

#include "stringedinstrument.h"

class Violin : public StringedInstrument {
public:
    Violin();
    Violin(int numberOfStrings);
    void play() override;

    std::string sound() override;
};

#endif //INSTRUMENTS_VIOLIN_H