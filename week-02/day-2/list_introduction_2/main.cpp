#include <iostream>
#include <vector>
#include <string>

int main() {
    std::vector<std::string> ListA = {"Apple", "Avocado", "Blueberries", "Durian", "Lychee"};
    std::vector<std::string> ListB = ListA;
    std::vector<std::string>::iterator it;

    for (it = ListA.begin(); it != ListA.end(); it++) {
        std::cout<<*it<<std::endl;
    }
    return 0;
}