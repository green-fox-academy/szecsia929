#include <iostream>

int main() {
    // Create a program which accepts five integers from the console (given by the user)
    // and store them in an array
    // print out the values of that array using pointers again

    int array[5];
    int *arrayPtr = array;

    for (int i = 0; i < 5; i++) {
        std::cout << i + 1 << ".number: ";
        std::cin >> array[i];
    }

    std::cout << std::endl;

    for (int j = 0; j < 5; ++j) {
        std::cout << j + 1 << ". number: " << *arrayPtr << std::endl;
        arrayPtr++;
    }

    return 0;
}