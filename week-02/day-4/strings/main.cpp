#include <iostream>
#include <string>

static const size_t npos = -1;

std::string xChanger(std::string xInit);

int main() {

    std::string xInit = "This is X and x. xxl oooo.";
    std::cout<<xChanger(xInit);

    return 0;
}

std::string xChanger(std::string xInit){
    if(xInit.find("x", 0)== npos){
        return xInit;
    } else{
        return xChanger(xInit.replace(xInit.find("x", 0), 1, "y"));
    }
}