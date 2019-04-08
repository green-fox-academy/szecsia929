#include <iostream>

int *minimumValue(int array[], int arraySize);

int main() {
    // Create a function which takes an array (and its length) as a parameter
    // and returns a pointer to its minimum value

    int numbers[] = {12, 4, 66, 101, 87, 3, 15};

    std::cout<< "The address of the minimum: " << minimumValue(numbers, sizeof(numbers) / sizeof(numbers[0])) << std::endl;
    std::cout <<"The minimum itself: " << *minimumValue(numbers, sizeof(numbers) / sizeof(numbers[0])) << std::endl;

    return 0;
}

int *minimumValue(int array[], int arraySize) {

    int *minimum = array;

    for (int i = 0; i < arraySize; ++i) {
        if (array[i] < *minimum) {
            minimum = &array[i];
        }
    }

    return minimum;
}