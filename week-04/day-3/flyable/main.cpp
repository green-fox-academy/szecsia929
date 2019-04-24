#include <iostream>
#include "helicopter.h"
#include "bird.h"

int main() {
    Helicopter helicopter;
    helicopter.takeOff();
    helicopter.fly();
    helicopter.land();
    Bird bird("Eagle");
    bird.takeOff();
    bird.fly();
    bird.land();
    return 0;
}