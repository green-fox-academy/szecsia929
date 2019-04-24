//
// Created by user on 2019. 04. 24..
//

#ifndef WIRELESS_ADAPTER_WIRELESSADAPTER_H
#define WIRELESS_ADAPTER_WIRELESSADAPTER_H


#include "usbdevice.h"
#include "networkdevice.h"

class WirelessAdapter : public USBDevice, NetworkDevice{
public:
    WirelessAdapter(int id, int USBType, int bandWidth);
    void info();
};


#endif //WIRELESS_ADAPTER_WIRELESSADAPTER_H
