//
// Created by user on 2019. 04. 18..
//

#include "Blog.h"

void Blog::addBlog(BlogPost post) {
    blogs.push_back(post);
}

void Blog::updateBlog(int index, BlogPost post) {
    blogs.at(index) = post;
}

void Blog::deleteBLog(int index) {
    blogs.erase(blogs.begin() + index);
}

void Blog::getBlogs() {
    for (int i = 0; i < blogs.size(); ++i) {
        std::cout << blogs.at(i).getPost() << std::endl;
    }
}