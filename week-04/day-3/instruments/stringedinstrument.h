//
// Created by user on 2019. 04. 24..
//

#ifndef INSTRUMENTS_STRINGEDINSTRUMENT_H
#define INSTRUMENTS_STRINGEDINSTRUMENT_H

#include "instrument.h"

class StringedInstrument : public Instrument {
public:
    virtual std::string sound() = 0;

protected:
    int _numberOfStrings;
};

#endif //INSTRUMENTS_STRINGEDINSTRUMENT_H