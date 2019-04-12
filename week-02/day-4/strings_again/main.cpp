#include <iostream>
#include <string>

static const size_t npos = -1;

std::string xTerminate(std::string xInit);

int main() {

    std::string xInit = "ABCD cc xx cc kk cxc green fox";
    std::cout << xTerminate(xInit) << std::endl;
    return 0;
}

std::string xTerminate(std::string xInit) {
    if (xInit.find('x', 0) == npos) {
        return xInit;
    } else {
        return xTerminate(xInit.erase(xInit.find('x', 0), 1));
    }
}