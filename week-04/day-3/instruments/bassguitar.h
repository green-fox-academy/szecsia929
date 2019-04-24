//
// Created by user on 2019. 04. 24..
//

#ifndef INSTRUMENTS_BASSGUITAR_H
#define INSTRUMENTS_BASSGUITAR_H

#include "stringedinstrument.h"

class BassGuitar : public StringedInstrument {
public:
    BassGuitar();
    BassGuitar(int numberOfStrings);
    void play() override;

    std::string sound() override;
};

#endif //INSTRUMENTS_BASSGUITAR_H