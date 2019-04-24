//
// Created by user on 2019. 04. 24..
//

#include "usbdevice.h"

USBDevice::USBDevice(int id, int USBType) : Device(id) {
    _id = id;
    _USBType = USBType;
}
