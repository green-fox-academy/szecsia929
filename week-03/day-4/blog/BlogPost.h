//
// Created by user on 2019. 04. 17..
//

#ifndef BLOG_POST_BLOGPOST_H
#define BLOG_POST_BLOGPOST_H
#include <iostream>


class BlogPost {
public:
    BlogPost(std::string aName, std::string ttle, std::string txt, std::string pDate);
    std::string getPost();
private:
    std::string authorName;
    std::string title;
    std::string text;
    std::string publicationDate;

};


#endif //BLOG_POST_BLOGPOST_H
