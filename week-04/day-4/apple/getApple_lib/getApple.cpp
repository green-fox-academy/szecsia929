//
// Created by user on 2019. 04. 25..
//

#include <string>
#include <vector>

std::string getApple()
{
    return "apple";
}

int sum(std::vector<int> numbers)
{
    int sum = 0;
    for (int i = 0; i < numbers.size(); ++i) {
        sum += numbers.at(i);
    }
    return sum;
}