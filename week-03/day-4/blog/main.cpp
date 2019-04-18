#include <iostream>
#include "Blog.h"

int main() {
    Blog test;
    BlogPost one("Mr.One", "Cim", "Valami szoveg valamirol.", "2019.04.18.");
    BlogPost two("Mr.One", "Masik cim", "Valami mas szoveg valami masrol.", "2019.04.18.");
    BlogPost three("Mr.One", "Harmadik cim", "Valami egeszen mas szoveg valami egesz masrol.", "2019.04.18.");

    test.addBlog(one);
    test.addBlog(two);
    test.addBlog(three);

    test.getBlogs();

    std::cout << "------------------------------------" << std::endl;

    test.deleteBLog(1);

    test.getBlogs();

    BlogPost update("Mr update", "Cim update", "Szoveg update", "Ma");
    test.updateBlog(0, update);

    std::cout << "------------------------------------" << std::endl;

    test.getBlogs();

    return 0;
}