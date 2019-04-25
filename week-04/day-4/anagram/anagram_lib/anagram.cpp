//
// Created by user on 2019. 04. 25..
//

#include <iostream>
#include <algorithm>

bool isAnagram(std::string text1, std::string text2)
{
    std::sort(text1.begin(), text1.end());
    std::sort(text2.begin(), text2.end());
    return text1 == text2;
}