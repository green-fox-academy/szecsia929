#include <iostream>

int main(int argc, char *args[]) {

    // Write a program that asks for two numbers and prints the bigger one

    int a, b;

    std::cout << "Give me two numbers! ";
    std::cin >> a >> b;

    if (a < b) {
        std::cout << b;
    } else if (a > b) {
        std::cout << a;
    } else {
        std::cout << "The numbers are even.";
    }

    return 0;
}