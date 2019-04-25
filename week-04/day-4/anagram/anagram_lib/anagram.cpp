//
// Created by user on 2019. 04. 25..
//

#include <string>

bool isAnagram(std::string text1, std::string text2)
{
    bool isAnagram = true;
    int counter1 = 0, counter2 = 0;
    if (text1.size() == text2.size()) {
        for (int i = 0; i < text1.size(); ++i) {
            for (int j = 0; j < text2.size(); ++j) {
                if (text1.at(i) == text1.at(j)) {
                    counter1++;
                }
                if (text1.at(i) == text2.at(j)) {
                    counter2++;
                }
            }
            if (counter1 != counter2) {
                isAnagram = false;
            }
        }
    } else {
        isAnagram = false;
    }
    return isAnagram;
}