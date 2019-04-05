#include <iostream>
#include <string>

int unique(int[], int);

int main(int argc, char *args[]) {

    //  Create a function that takes a list of numbers as a parameter
    //  Don't forget you have pass the size of the list as a parameter as well
    //  Returns a list of numbers where every number in the list occurs only once

    //  Example
    int numbers[] = {1, 11, 34, 11, 52, 61, 1, 34};
    std::cout << (unique(numbers, sizeof(numbers) / sizeof(int))) << std::endl;
    //  should print: `[1, 11, 34, 52, 61]`

    return 0;
}

int unique(int a[], int q) {
    for (int i = 0; i < q; i++) {
        return a[i];
    }
}