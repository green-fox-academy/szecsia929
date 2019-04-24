#include <iostream>
#include "wirelessadapter.h"

enum class USBType{
    USB_TYPE_2,
    USB_TYPE_3
};

int main( int argc, char* args[] )
{
    WirelessAdapter adapter(500, 2, 100);
    adapter.info();

    return 0;
}