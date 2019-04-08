#include <iostream>

int lookForValue(int array[], int size, int value);

int main() {
    // Create a function which takes an array (and it's lenght) and a number as a parameter
    // the function should return index where it found the given value
    // if it can't find the number return -1

    int array[5] = {73, 8, 14, 51, 23};

    std::cout << lookForValue(array, 5, 14) << std::endl;

    return 0;
}

int lookForValue(int array[], int size, int value) {

    for (int i = 0; i < size; ++i) {
        if (array[i] == value) {
            return i;
        }
    }
    return -1;
}