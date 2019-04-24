//
// Created by user on 2019. 04. 24..
//

#ifndef INSTRUMENTS_ELECTRICGUITAR_H
#define INSTRUMENTS_ELECTRICGUITAR_H


#include "stringedinstrument.h"

class ElectricGuitar : public StringedInstrument {
public:
    ElectricGuitar();
    ElectricGuitar(int numberOfStrings);
    void play() override;

    std::string sound() override;

};


#endif //INSTRUMENTS_ELECTRICGUITAR_H
