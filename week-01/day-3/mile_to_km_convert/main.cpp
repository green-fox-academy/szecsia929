#include <iostream>

int main(int argc, char* args[]) {

    // Write a program that asks for an integer that is a distance in kilometers,
    // then it converts that value to miles and prints it

    int mile;
    int km;

    std::cout << "How many km? ";
    std::cin >> km;
    mile = km * 0.6213712;
    std::cout << "In mile: " << mile << std::endl;

    return 0;
}