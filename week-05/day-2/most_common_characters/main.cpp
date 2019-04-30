#include <iostream>
#include <map>
#include <vector>
#include <fstream>

std::map<char, int> mostCommon(std::string fileName);

int main() {
    std::map<char, int> mostCommonMap = mostCommon("../countchar.txt");
    std::map<char, int>::iterator mapIt;
    for (mapIt = mostCommonMap.begin(); mapIt != mostCommonMap.end(); mapIt++) {
        std::cout << mapIt->first << ":" << mapIt->second << std::endl;
    }
    return 0;
}

std::map<char, int> mostCommon(std::string fileName) {
    std::ifstream file;
    //file.exceptions(std::ifstream::failbit | std::ifstream::badbit);
    try {
        file.open(fileName);
        std::map<char, int> characters;
        std::map<char, int> mostCommons;
        std::string line;

        while (std::getline(file, line)) {
            for (int i = 0; i < line.size(); ++i) {
                characters[line.at(i)]++;
            }
        }
        file.close();

        int counter1 = 0, counter2 = 0;
        std::map<char, int>::iterator mapIt;

        for (mapIt = characters.begin(); mapIt != characters.end(); mapIt++) {
            if (mapIt->second > counter1) {
                counter1 = mapIt->second;
            }
            if (mapIt->second > counter2 && mapIt->second < counter1) {
                counter2 = mapIt->second;
            }
        }

        for (mapIt = characters.begin(); mapIt != characters.end(); mapIt++) {
            if (mapIt->second == counter1) {
                mostCommons.insert(std::pair<char, int>(mapIt->first, mapIt->second));
            }
            if (mapIt->second == counter2) {
                mostCommons.insert(std::pair<char, int>(mapIt->first, mapIt->second));
            }
        }
        return mostCommons;
    } catch (std::fstream::failure &e) {
        std::cerr << "File does not exist!" << std::endl;
    }
    std::map<char, int> empty;
    return empty;
}