#include <iostream>

int main(int argc, char *args[]) {

    // Write a program that reads a number from the standard input, then draws a
    // pyramid like this:
    //
    //
    //    *
    //   ***
    //  *****
    // *******
    //
    // The pyramid should have as many lines as the number was

    int a;

    std::cout << "How many rows should there be? ";
    std::cin >> a;

    for (int i = 0; i < a; ++i) {
        for (int j = 0; j < 2 * a; ++j) {
            if(){
                std::cout<<"*";
            }
        }
        std::cout << std::endl;
    }

    return 0;
}