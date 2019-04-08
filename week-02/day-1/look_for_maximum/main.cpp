#include <iostream>

int main() {
    // Create a program which first asks for a number
    // this number indicates how many integers we want to store in an array
    // and than asks for numbers till the user fills the array
    // It should print out the biggest number in the given array and the memory address of it

    int size, max = 0, maxindex = 0;

    std::cout << "Give me the size of the array! ";
    std::cin >> size;

    int array[size];

    for (int i = 0; i < size; ++i) {
        std::cout << i + 1 << ".number: ";
        std::cin >> array[i];
        if (array[i] > max) {
            max = array[i];
            maxindex = i;
        }
    }
    std::cout << "\nThe address where the array starts: " << array << std::endl;
    std::cout << "Address of the bigest number: " << &array[maxindex] << "\nAnd it's value is: " << array[maxindex];

    return 0;
}