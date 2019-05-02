#include <iostream>
#include <fstream>
#include <string>
#include <map>
#include <sstream>

int main()
{
    // Create a method that find the 5 most common lottery numbers in lottery.csv

    std::map<std::string, int> lot;
    std::string line;
    std::ifstream lottery("../lottery.txt");
    while (std::getline(lottery, line)) {
        std::istringstream ss(line);
        std::string token;
        int c = 0;
        while (std::getline(ss, token, ';')) {
            c++;
            if (c > 11) {
                lot[token]++;
            }
        }
    }

    std::map<int, std::string> fliped;
    std::map<std::string, int>::iterator It = lot.begin();
    for (; It != lot.end(); It++) {
        std::cout << It->first << " : " << It->second << " times" << std::endl;
        fliped.insert(std::pair<int, std::string>(It->second, It->first));
    }
    std::cout << "-----------------------------" << std::endl;
    std::map<int, std::string>::iterator Jt = fliped.begin();
    for (; Jt != fliped.end(); Jt++) {
        std::cout << Jt->second << " : " << Jt->first << " times" << std::endl;
    }
    return 0;
}