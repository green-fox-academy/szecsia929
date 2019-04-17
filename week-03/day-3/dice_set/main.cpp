#include <iostream>

#include "DiceSet.h"

int main(int argc, char *args[]) {
    // You have a `DiceSet` class which has a list for 6 dices
    // You can roll all of them with roll()
    // Check the current rolled numbers with getCurrent()
    // You can reroll with roll()
    // Your task is to roll the dices until all of the dices are 6

    DiceSet diceSet;
    int checker = 0;
    int trying = 0;

    while (checker != 6) {
        diceSet.roll();
        for (int i = 0; i < 6; ++i) {
            if (diceSet.getCurrent(i) == 6) {
                checker++;
            } else {
                checker = 0;
            }
            std::cout << diceSet.getCurrent(i) << " ";
        }
        trying++;
        std::cout << std::endl;
    }
    std::cout << "\nFor the: " << trying << " roll." << std::endl;

    return 0;
}