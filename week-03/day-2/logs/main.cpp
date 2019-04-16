#include <iostream>
#include <fstream>
#include <string>
#include <vector>

// Read all data from 'log.txt'.
// Each line represents a log message from a web server
// Write a function that returns an array with the unique IP adresses.
// Write a function that returns the GET / POST request ratio.

static const size_t npos = -1;

std::vector<std::string> IPAdresses();

double ratio();

int main() {

    std::cout << "The GET / POST ratio: " << ratio() << std::endl;

    return 0;
}

double ratio() {
    std::ifstream log("../log.txt");
    std::string line;
    double get = 0, post = 0;
    while (!log.eof()) {
        getline(log, line, '/');
        if (line.find("GET") != npos) {
            get++;
        } else if (line.find("POST") != npos) {
            post++;
        }
    }
    log.close();
    return get / post;
}

std::vector<std::string> IPAdresses() {
    std::ifstream log("../log.txt");
    std::vector<std::string> IPk;
    std::vector<std::string> UIPk;
    while (!log.eof()){

    }

}