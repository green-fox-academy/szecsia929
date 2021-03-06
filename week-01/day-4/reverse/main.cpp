#include <iostream>
#include <string>

int main(int argc, char *args[]) {

    // - Create an array variable named `aj`
    //   with the following content: `[3, 4, 5, 6, 7]`
    // - Reverse the order of the elements in `aj`
    // - Print the elements of the reversed `aj`

    int aj[] = {3, 4, 5, 6, 7};
    int buff;

    for (int i = 0; i < 5 / 2; i++) {
        buff = aj[i];
        aj[i] = aj[4 - i];
        aj[4 - i] = buff;
    }

    for (int j = 0; j < 5; j++) {
        std::cout << aj[j] << " ";
    }

    return 0;
}