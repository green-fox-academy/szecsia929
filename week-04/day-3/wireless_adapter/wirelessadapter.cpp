//
// Created by user on 2019. 04. 24..
//

#include <iostream>
#include "wirelessadapter.h"

WirelessAdapter::WirelessAdapter(int id, int USBType, int bandWidth) : Device(id), USBDevice(id, USBType), NetworkDevice(id, bandWidth) {
    _id = id;
    _USBType = USBType;
    _bandWidth = bandWidth;
}

void WirelessAdapter::info() {
    std::cout << "Device id:" << _id << "\tUSB type:" << _USBType << "\tBand width:" << _bandWidth <<std::endl;
}
