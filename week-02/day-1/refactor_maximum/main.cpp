
#include <iostream>

int askForNumber();

int arrayFill(int index);

int *biggest(int *array, int size);

int main() {
    // Create a program which first asks for a number
    // this number indicates how many integers we want to store in an array
    // and than asks for numbers till the user fills the array
    // It should print out the biggest number in the given array and the memory address of it

    // Refactor time!
    // use your 'refactor_maximum.cpp', solve the same exercise by creating a separate function
    // for each functionality

    int number = askForNumber();
    int array[number];

    for (int i = 0; i < number; i++) {
        array[i] = arrayFill(i);
    }

    std::cout << "Address of the start of the array: " << array << std::endl;
    std::cout << "Address of the bigest number: " << biggest(array, number);

    return 0;
}

int askForNumber() {
    int number;
    std::cout << "Pls give me a number! ";
    std::cin >> number;

    return number;

}

int arrayFill(int index) {

    int value;

    std::cout << index + 1 << ".number: ";
    std::cin >> value;

    return value;

}

int *biggest(int array[], int size) {

    int max = 0, *maxAddress = array;

    for (int i = 0; i < size; ++i) {
        if (array[i] > max) {
            max = array[i];
            maxAddress = &array[i];
        }
    }

    return maxAddress;
}
