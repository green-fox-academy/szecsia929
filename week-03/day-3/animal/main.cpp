#include <iostream>
#include "Animal.h"

int main() {
    Animal dog;

    std::cout << "Hunger: " << dog.getHu() << "\nThirst: " << dog.getTh() << std::endl;

    for (int i = 0; i < 30; i++) {
        dog.play();
    }
    std::cout << "\nAfter 30 playtime.\n";
    std::cout << "Hunger: " << dog.getHu() << "\nThirst: "<< dog.getTh() << std::endl;

    for (int i = 0; i < 30; i++) {
        dog.eat();
    }

    std::cout << "\nAfter 30 food.\n";
    std::cout << "Hunger: " << dog.getHu() << "\nThirst: "<< dog.getTh() << std::endl;
    return 0;
}