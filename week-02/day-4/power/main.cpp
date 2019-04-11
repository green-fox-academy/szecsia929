#include <iostream>

int powerN(int base, int n);

int main() {

    int base, n;

    std::cout << "Give me two numbers! ";
    std::cin >> base >> n;

    std::cout << powerN(base, n) << std::endl;

    return 0;
}

int powerN(int base, int n) {

    if (n == 1) {
        return base;
    } else {
        return base * powerN(base, n - 1);
    }
}