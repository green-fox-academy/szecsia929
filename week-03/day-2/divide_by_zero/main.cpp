#include <iostream>
#include <fstream>

void tenDivider(int number);

int main() {
    // Create a function that takes a number
    // divides ten with it,
    // and prints the result.
    // It should print "fail" if the parameter is 0

    try {
        int number;
        std::cout << "Give me a number! ";
        std::cin >> number;
        if (number == 0) {
            throw std::string("Fail");
        }
        tenDivider(number);
    } catch (std::string &e) {
        std::cerr << e << std::endl;
    }

    return 0;
}

void tenDivider(int number) {
    std::cout << 10.0 / number << std::endl;
}