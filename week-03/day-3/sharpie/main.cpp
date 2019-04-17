#include <iostream>
#include "Sharpie.h"

int main() {
    Sharpie red("red", 100, 3);

    for (int i = 0; i < 5; i++) {
        std::cout << "Ink amount: " << red.getInkAmount() << std::endl;
        red.use();
    }
    return 0;
}