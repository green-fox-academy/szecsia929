#include <iostream>

int main(int argc, char *args[]) {

    // Write a program that asks for two numbers
    // The first number represents the number of girls that comes to a party, the
    // second the boys
    // It should print: The party is excellent!
    // If the the number of girls and boys are equal and 20 or more people are coming to the party
    //
    // It should print: Quite cool party!
    // If there are 20 or more people coming to the party but the girl - boy ratio is not 1-1
    //
    // It should print: Average party...
    // If there are less people coming than 20
    //
    // It should print: Sausage party
    // If no girls are coming, regardless the count of the people

    int a, b;

    std::cout << "Please give me two numbers! ";
    std::cin >> a >> b;

    if (a + b > 20 && a == b) {
        std::cout << "The party is excellent!";
    } else if (a + b > 20 && a != b && a != 0 && b != 0) {
        std::cout << "Quite cool party!";
    } else if (a + b < 20 && a != b && a != 0 && b != 0) {
        std::cout << "Average party...";
    } else if (b == 0) {
        std::cout << "Sausage party";
    } else

    return 0;
}