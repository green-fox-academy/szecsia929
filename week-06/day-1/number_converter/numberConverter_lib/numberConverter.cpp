//
// Created by user on 2019. 05. 13..
//
#include <iostream>
#include <map>
#include <vector>

std::string numberConverter(int number)
{
    std::map<int, std::string> numbersToString;
    std::string result;
    std::vector<int> vector;

    numbersToString[1] = "egy";
    numbersToString[2] = "ketto";
    numbersToString[3] = "harom";
    numbersToString[4] = "negy";
    numbersToString[5] = "ot";
    numbersToString[6] = "hat";
    numbersToString[7] = "het";
    numbersToString[8] = "nyolc";
    numbersToString[9] = "kilenc";

    numbersToString[10] = "tiz";
    numbersToString[20] = "husz";
    numbersToString[30] = "harminc";
    numbersToString[40] = "negyven";
    numbersToString[50] = "otven";
    numbersToString[60] = "hatvan";
    numbersToString[70] = "hetven";
    numbersToString[80] = "nyolcvan";
    numbersToString[90] = "kilencven";

    numbersToString[100] = "szaz";
    numbersToString[200] = "ketszaz";
    numbersToString[300] = "haromszaz";
    numbersToString[400] = "negyszaz";
    numbersToString[500] = "otszaz";
    numbersToString[600] = "hatszaz";
    numbersToString[700] = "hetszaz";
    numbersToString[800] = "nyolcszaz";
    numbersToString[900] = "kilencszaz";

    numbersToString[1000] = "egyezer";
    numbersToString[2000] = "kettoezer";
    numbersToString[3000] = "haromezer";
    numbersToString[4000] = "negyezer";
    numbersToString[5000] = "otezer";
    numbersToString[6000] = "hatezer";
    numbersToString[7000] = "hetezer";
    numbersToString[8000] = "nyolcezer";
    numbersToString[9000] = "kilencezer";

    int temp = number;

    for (int i = 10; temp > 0; i *= 10) {
        vector.push_back(temp % i);
        temp = temp - temp % i;
    }

    for (int j = vector.size(); j > 0; --j) {
        result = result + numbersToString[vector.at(j - 1)];
    }

    return result;
}
