//
// Created by user on 2019. 05. 13..
//
#include <string>
#include <map>
#include <iostream>

bool anagram(std::string word1, std::string word2)
{

    //if (word1.size() == word2.size()) {
        std::map<char, int> map1;
        std::map<char, int> map2;
        for (int i = 0; i < word1.size(); ++i) {
            map1[std::tolower(word1.at(i))]++;
        }

        for (int j = 0; j < word2.size(); ++j) {
            map2[std::tolower(word2.at(j))]++;
        }
    //}

    return map1 == map2;
}
