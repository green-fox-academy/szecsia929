#include <iostream>
#include <string>

void factorio(int a, int &b);

int main(int argc, char *args[]) {

    // - Create a function called `factorio`
    //   it should calculate its input's factorial.
    //   it should not return it, but take an additional integer parameter and overwrite its value.

    int a = 5, b = 1;
    factorio(a, b);
    std::cout << b << std::endl;

    return 0;
}

void factorio(int a, int &b) {
    for (int i = a; i > 0; i--) {
        b = i * b;
    }
}