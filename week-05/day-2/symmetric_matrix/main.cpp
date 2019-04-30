#include <iostream>
#include <vector>

bool isSymmetric(std::vector<std::vector<int>> matrix);

int main() {
    std::vector<std::vector<int>> testMatrix1 = {{1, 0, 1},
                                                 {0, 2, 2},
                                                 {1, 2, 5}};

    std::vector<std::vector<int>> testMatrix2 = {{1, 0, 1},
                                                 {4, 2, 2},
                                                 {7, 2, 5}};

    isSymmetric(testMatrix1) ? std::cout << "true\n" : std::cout << "false\n";
    isSymmetric(testMatrix2) ? std::cout << "true\n" : std::cout << "false\n";

    return 0;
}

bool isSymmetric(std::vector<std::vector<int>> matrix) {
    for (int i = 0; i < matrix.size(); ++i) {
        for (int j = 0; j < matrix.size(); ++j) {
            if (matrix[i][j] != matrix[j][i]) {
                return false;
            }
        }
    }
    return true;
}