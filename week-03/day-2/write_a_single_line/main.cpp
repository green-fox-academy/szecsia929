#include <iostream>
#include <fstream>
#include <string>

int main() {
    // Open a file called "my-file.txt"
    // Write your name in it as a single line

    std::ofstream MyFile;
    std::string name = "Szecsi Alex";
    MyFile.open("../my-file.txt");
    MyFile << name;
    MyFile.close();

    return 0;
}