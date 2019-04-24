//
// Created by user on 2019. 04. 24..
//

#ifndef WIRELESS_ADAPTER_DEVICE_H
#define WIRELESS_ADAPTER_DEVICE_H

class Device {
public:
    Device(int id);
    int getID();
protected:
    int _id;
};

#endif //WIRELESS_ADAPTER_DEVICE_H