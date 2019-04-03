#include <iostream>
#include <string>

int main() {

    //favourite_number
    int fvn = 40000;
    std::cout << "\nMy favourite number is: " << fvn << std::endl;

    //swap
    int a = 123;
    int b = 526;
    int c = a;
    a = b;
    b = c;
    std::cout << "\n" << a << std::endl;
    std::cout << b << std::endl;

    //bmi
    double massInKg = 81.2;
    double heightInM = 1.78;
    double bmi = massInKg / (heightInM * heightInM);
    std::cout << "Your bmi is: " << bmi << std::endl;

    //define basic info
    std::string name = "Szecsi Alex";
    int age = 24;
    double height = 1.78;
    bool married = false;
    std::cout << "\n" << name << std::endl;
    std::cout << age << std::endl;
    std::cout << height << std::endl;
    std::cout << married << std::endl;

    return 0;
}