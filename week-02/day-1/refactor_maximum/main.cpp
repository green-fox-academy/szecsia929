#include <iostream>

void pointerType();

void printValue();

void changeValue();

void adding();

int *findMinimum(int array[], int arraySize);

void swap(int *IntPtr1, int *IntPtr2);


int main() {
    // Refactor time!
    // use your 'refactor_maximum.cpp', solve the same exercise by creating a separate function
    // for each functionality

    int a = 10;
    int b = 316;
    int *aPtr = &a;
    int *bPtr = &b;
    int numbers[] = {12, 4, 66, 101, 87, 3, 15};

    pointerType();
    printValue();
    changeValue();
    adding();
    std::cout << "The address of the minimum: " << findMinimum(numbers, sizeof(numbers) / sizeof(numbers[0]))<< std::endl;
    std::cout << "The minimum itself: " << *findMinimum(numbers, sizeof(numbers) / sizeof(numbers[0])) << std::endl;
    std::cout << "Before\n a=" << a << "\n b=" << b << std::endl;
    swap(aPtr, bPtr);
    std::cout << "After\n a=" << a << "\n b=" << b << std::endl;

    return 0;
}

void pointerType() {

    int a = 31;
    double b = 432.2;
    std::string name = "Bob";

    int *aPointer = &a;
    double *bPointer = &b;
    std::string *namePointer = &name;

    std::cout << *aPointer << std::endl;
    std::cout << *bPointer << std::endl;
    std::cout << *namePointer << std::endl;
}

void printValue() {

    int age = 31;
    int *agePointer = &age;

    std::cout << *agePointer << std::endl;
}

void changeValue() {

    float temperature = 21.3;
    float *temperaturePointer = &temperature;
    *temperaturePointer = 0.99;

    std::cout << temperature << std::endl;
}

void adding() {

    int a = 20;
    int b = 17;
    int *aPointer = &a;
    int *bPointer = &b;
    int sum = *aPointer + *bPointer;

    std::cout << sum << std::endl;
}

int *findMinimum(int array[], int arraySize) {

    int *minimum = array;

    for (int i = 0; i < arraySize; ++i) {
        if (array[i] < *minimum) {
            minimum = &array[i];
        }
    }

    return minimum;
}

void swap(int *IntPtr1, int *IntPtr2) {

    int buffer = *IntPtr1;

    *IntPtr1 = *IntPtr2;
    *IntPtr2 = buffer;

}