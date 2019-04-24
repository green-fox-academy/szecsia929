//
// Created by user on 2019. 04. 24..
//

#ifndef WIRELESS_ADAPTER_USBDEVICE_H
#define WIRELESS_ADAPTER_USBDEVICE_H

#include "device.h"

class USBDevice : virtual public Device{
public:
    USBDevice(int id, int USBType);

protected:
    int _USBType;
};

#endif //WIRELESS_ADAPTER_USBDEVICE_H