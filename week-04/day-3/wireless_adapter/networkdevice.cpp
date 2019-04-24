//
// Created by user on 2019. 04. 24..
//

#include "networkdevice.h"

NetworkDevice::NetworkDevice(int id, int bandWidth) : Device(id) {
    _id = id;
    _bandWidth = bandWidth;
}
