#include <iostream>

int main(int argc, char *args[]) {

    // Write a program that asks for a number.
    // It would ask this many times to enter an integer,
    // if all the integers are entered, it should print the sum and average of these
    // integers like:
    //
    // Sum: 22, Average: 4.4

    int a, b, sum = 0;

    std::cout << "How many numbers yout wish to enter? ";
    std::cin >> a;

    for (int i = 0; i < a; i++) {
        std::cout << i + 1 << ". number: ";
        std::cin >> b;
        sum += b;
    }

    std::cout << "Sum: " << sum << " Average: " << (sum * 1.0) / (a * 1.0) << std::endl;

    return 0;
}