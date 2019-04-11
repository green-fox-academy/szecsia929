#include <iostream>

int earCounter(int rabbits);

int main() {

    int rabbits;

    std::cout << "Give me the number of rabbits! ";
    std::cin >> rabbits;
    std::cout << earCounter(rabbits);

    return 0;
}

int earCounter(int rabbits) {
    if (rabbits == 1) {
        return 2;
    } else {
        return 2 + earCounter(rabbits - 1);
    }

}