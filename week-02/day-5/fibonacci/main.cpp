#include <iostream>

int fibonacci(int n);

int main() {

    int n;

    std::cout << "Give me a number! ";
    std::cin >> n;
    std::cout << fibonacci(n) << std::endl;

    return 0;
}

int fibonacci(int n) {
    if (n > 2) {
        return (fibonacci(n - 2) + fibonacci(n - 1));
    } else if (n == 1 || n == 2) {
        return 1;
    } else {
        return 0;
    }
}