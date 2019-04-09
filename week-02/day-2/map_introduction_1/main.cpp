#include <iostream>
#include <map>

int main() {

    std::map<int, char> firstMap;

    if (firstMap.empty()) {
        std::cout << "This map IS empty." << std::endl;
    } else {
        std::cout << "This map is NOT empty." << std::endl;
    }

    firstMap[97] = 'a';
    firstMap[98] = 'b';
    firstMap[99] = 'c';
    firstMap[65] = 'A';
    firstMap[66] = 'B';
    firstMap[67] = 'C';

    for (std::map<int, char>::iterator mapIterator = firstMap.begin(); mapIterator != firstMap.end(); mapIterator++) {
        std::cout << mapIterator->first << std::endl;
    }

    for (std::map<int, char>::iterator mapIterator = firstMap.begin(); mapIterator != firstMap.end(); mapIterator++) {
        std::cout << mapIterator->second << std::endl;
    }

    firstMap[68] = 'D';

    std::cout << firstMap.size() << std::endl;
    std::cout << firstMap[99] << std::endl;

    firstMap.erase(97);

    if (firstMap.count(100) != 0) {
        std::cout << "Yes" << std::endl;
    } else {
        std::cout << "No" << std::endl;
    }

    firstMap.clear();

    return 0;
}