//
// Created by user on 2019. 04. 17..
//
#include <iostream>
#ifndef POST_IT_POSTIT_H
#define POST_IT_POSTIT_H


class PostIt {
public:
    PostIt(std::string text, std::string tColor, std::string bColor);

private:
    std::string tEXt;
    std::string textColor;
    std::string backgroundColor;
};


#endif //POST_IT_POSTIT_H
