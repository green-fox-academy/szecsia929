//
// Created by user on 2019. 04. 17..
//

#include "BlogPost.h"
#include <iostream>

BlogPost::BlogPost(std::string aName, std::string ttle, std::string txt, std::string pDate) {
    authorName = aName;
    title = ttle;
    text = txt;
    publicationDate = pDate;
}

std::string BlogPost::getPost(){
    return authorName+"\n"+title+"\n"+text+"\n"+publicationDate+"\n";
}
