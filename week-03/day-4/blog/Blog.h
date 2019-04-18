//
// Created by user on 2019. 04. 18..
//

#ifndef BLOG_BLOG_H
#define BLOG_BLOG_H

#include <vector>
#include "BlogPost.h"

class Blog {
public:
    void addBlog(BlogPost post);

    void updateBlog(int index, BlogPost post);

    void deleteBLog(int index);

    void getBlogs();

private:
    std::vector<BlogPost> blogs;
};


#endif //BLOG_BLOG_H
