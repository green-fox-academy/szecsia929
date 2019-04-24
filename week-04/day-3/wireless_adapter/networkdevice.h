//
// Created by user on 2019. 04. 24..
//

#ifndef WIRELESS_ADAPTER_NETWORKDEVICE_H
#define WIRELESS_ADAPTER_NETWORKDEVICE_H

#include "device.h"

class NetworkDevice : virtual public Device{
public:
    NetworkDevice(int id, int bandWidth);
protected:
    int _bandWidth;
};

#endif //WIRELESS_ADAPTER_NETWORKDEVICE_H