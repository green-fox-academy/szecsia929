#include <iostream>
#include <fstream>
#include <string>

// Create a function that takes 3 parameters: a path, a word and a number
// and is able to write into a file.
// The path parameter should be a string that describes the location of the file you wish to modify
// The word parameter should also be a string that will be written to the file as individual lines
// The number parameter should describe how many lines the file should have.
// If the word is "apple" and the number is 5, it should write 5 lines
// into the file and each line should read "apple"

void multiLines(std::string path, std::string word, int number);

int main() {

    std::string path, word;
    int number;

    std::cout << "Where is the file? ";
    std::cin >> path;
    path = "../text.txt";
    std::cout << "What is the word? ";
    std::cin >> word;
    std::cout << "How many? ";
    std::cin >> number;

    multiLines(path, word, number);

    return 0;
}

void multiLines(std::string path, std::string word, int number) {
    std::ofstream MyFile(path);
    for (int i = 0; i < number; i++) {
        MyFile << word + '\n';
    }
}