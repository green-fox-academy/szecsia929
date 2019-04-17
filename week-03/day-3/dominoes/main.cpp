#include <iostream>
#include <vector>

#include "Domino.h"

std::vector<Domino> initializeDominoes() {
    std::vector<Domino> dominoes;
    dominoes.push_back(Domino(5, 2));
    dominoes.push_back(Domino(4, 6));
    dominoes.push_back(Domino(1, 5));
    dominoes.push_back(Domino(6, 7));
    dominoes.push_back(Domino(2, 4));
    dominoes.push_back(Domino(7, 1));
    return dominoes;
}

int main(int argc, char *args[]) {
    std::vector<Domino> dominoes = initializeDominoes();

    // You have the list of Dominoes
    // Order them into one snake where the adjacent dominoes have the same numbers on their adjacent sides
    // eg: [2, 4], [4, 3], [3, 5] ...

    std::vector<Domino> snake;
    snake.push_back(dominoes.at(0));
    std::string snakeSt = dominoes.at(0).toString();
    while (snake.size() != dominoes.size()) {
        for (int i = 0; i < dominoes.size(); ++i) {
            if (dominoes.at(i).getValues().first == snake.at(snake.size()-1).getValues().second) {
                snake.push_back(dominoes.at(i));
                snakeSt += snake.at(snake.size() - 1).toString();
            }
        }
    }
    std::cout << snakeSt << std::endl;
    return 0;
}