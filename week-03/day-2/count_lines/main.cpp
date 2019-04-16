#include <iostream>
#include <fstream>
#include <string>
#include <exception>

int numberOfLines(std::string fileName);

int main() {
    // Write a function that takes a filename as string,
    // then returns the number of lines the file contains.
    // It should return zero if it can't open the file

    std::string filename;
    std::cout << "Give me the name of the file! ";
    std::cin >> filename;
    std::cout << "The number of lines: " << numberOfLines(filename) << std::endl;

    return 0;
}

int numberOfLines(std::string fileName) {
    std::ifstream myFile;
    myFile.exceptions(std::ofstream::failbit | std::ofstream::badbit);
    int numberOfLines = 0;
    try {
        myFile.open(fileName);
        while (!myFile.eof()) {
            std::string text;
            getline(myFile, text);
            numberOfLines++;
        }
    }
    catch (std::ofstream::failure &e) {
        std::cerr << "zero" << std::endl;
        return 0;
    }

    myFile.close();

    return numberOfLines;
}