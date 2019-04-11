#include <iostream>

int sumDigit(int number);

int main() {

    int number;
    std::cout << "Give me a non negative number! ";
    std::cin >> number;
    std::cout << sumDigit(number) << std::endl;
    return 0;
}

int sumDigit(int number) {

    if (number - number % 10 == 0) {
        return number;
    } else {
        return number % 10 + sumDigit(number / 10);
    }

}