#include <iostream>

int main(int argc, char *args[]) {

    int rows;

    std::cout << "How many rows should there be? ";
    std::cin >> rows;
    rows += 1;

    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < 2 * rows; ++j) {
            if (j > rows - i && j < rows + i) {
                std::cout << "*";
            } else {
                std::cout << " ";
            }
        }
        std::cout << std::endl;
    }

    return 0;
}