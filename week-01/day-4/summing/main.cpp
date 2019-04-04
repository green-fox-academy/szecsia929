#include <iostream>
#include <string>

int sum(int a);

int main(int argc, char *args[]) {

    int a;

    std::cout << "Give me an integer! " << std::endl;
    std::cin >> a;
    std::cout<<sum(a)<<std::endl;

    return 0;
}

int sum(int a) {

    int sum = 0;

    for (int i = 0; i <= a; i++) {
        sum += i;
    }

    return sum;
}

