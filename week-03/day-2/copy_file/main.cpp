#include <iostream>
#include <fstream>
#include <string>

void copies(std::string original, std::string copy);

// Write a function that reads all lines of a file and writes the read lines to an other file (a.k.a copies the file)
// It should take the filenames as parameters
// It should return a boolean that shows if the copy was successful

int main() {
    copies("../original.txt", "../copy.txt");
    return 0;
}

void copies(std::string original, std::string copy) {
    std::ifstream OFile(original);
    std::ofstream CFile(copy);
    std::string line;
    while(!OFile.eof()){
        getline(OFile, line);
        CFile << line;
    }
    OFile.close();
    CFile.close();
}