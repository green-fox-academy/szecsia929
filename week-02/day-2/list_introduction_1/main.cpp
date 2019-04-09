#include <iostream>
#include <string>
#include <vector>

int main() {

    std::vector<std::string> names;

    std::cout << names.size() << std::endl;

    names.push_back("William");

    if (names.empty()) {
        std::cout << "The list of names IS empty." << std::endl;
    } else {
        std::cout << "The list of names is NOT empty." << std::endl;
    }

    names.push_back("John");
    names.push_back("Amanda");

    std::cout << names.size() << std::endl;
    std::cout << names[2] << std::endl;

    for (unsigned int i = 0; i < names.size(); i++) {
        std::cout << names[i] << std::endl;
    }

    for (unsigned int i = 0; i < names.size(); i++) {
        std::cout << i + 1 << "." << names[i] << std::endl;
    }

    names.erase(names.begin() + 1);

    for (unsigned int i = names.size() - 1; i >= 0; i--) {
        std::cout << names[i] << std::endl;
    }

    names.clear();

    return 0;
}