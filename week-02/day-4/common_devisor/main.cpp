#include <iostream>

int commonDevisor(int num1, int num2);

int main() {

    int num1, num2;

    std::cout << "Give me two numbers! ";
    std::cin >> num1 >> num2;

    std::cout << commonDevisor(num1, num2);

    return 0;
}

int commonDevisor(int num1, int num2) {
    if (num1 >= num2 && num1 % num2 == 0) {
        return num2;
    } else {
        return commonDevisor(num1, num2-1);
    }
}