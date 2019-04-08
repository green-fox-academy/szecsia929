#include <iostream>

int main() {
    // Create a program which accepts five integers from the console (given by the user)
    // and store them in an array
    // print out the memory addresses of the elements in the array

    int array[5];

    for (int i = 0; i < 5; ++i) {
        std::cout << i + 1 << ". number: ";
        std::cin >> array[i];
    }

    std::cout << "\n" << std::endl;

    for (int j = 0; j < 5; ++j) {
        std::cout << "Address of " << j + 1 << ".number: " << &array[j] << std::endl;
    }

    return 0;
}