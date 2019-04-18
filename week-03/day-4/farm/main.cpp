#include <iostream>

#include "Farm.h"

int main() {

    Farm farm1;
    for (int i = 0; i < 5; ++i) {
        farm1.breed();
    }

    farm1.slaughter();

    return 0;
}