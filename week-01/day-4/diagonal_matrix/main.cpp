#include <iostream>
#include <string>

int main(int argc, char *args[]) {

    // - Create (dynamically) a two dimensional array
    //   with the following matrix. Use a loop!
    //   by dynamically, we mean here that you can change the size of the matrix
    //   by changing an input value or a parameter or this combined
    //
    //   1 0 0 0
    //   0 1 0 0
    //   0 0 1 0
    //   0 0 0 1
    //
    // - Print this two dimensional array to the output

    int matrix[4][4];

    std::cout << "\nNOOB" << std::endl;
    for (int i = 0; i < sizeof(matrix) / sizeof(matrix[0]); i++) {
        for (int j = 0; j < sizeof(matrix[i]) / sizeof(int); j++) {
            if (i == j) {
                matrix[i][j] = 1;
            } else {
                matrix[i][j] = 0;
            }
            std::cout << matrix[i][j] << " ";
        }
        std::cout<<std::endl;
    }

    std::cout << "\nLEGEND" << std::endl;
    std::cout << "1 0 0 0" << std::endl;
    std::cout << "0 1 0 0" << std::endl;
    std::cout << "0 0 1 0" << std::endl;
    std::cout << "0 0 0 1" << std::endl;

    return 0;
}