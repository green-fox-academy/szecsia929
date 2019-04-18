#include <iostream>
#include <math.h>
#include "SharpieSet.h"

int main() {

    SharpieSet set;

    for (int i = 0; i < 30; ++i) {
        Sharpie obj("red", float(rand() % 10), 1);
        set.addToSet(obj);
    }

    set.countUsable();
    set.removeTrash();

    return 0;
}