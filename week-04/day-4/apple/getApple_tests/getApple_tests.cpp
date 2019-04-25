//
// Created by user on 2019. 04. 25..
//

#include "getApple.cpp"
#include "gtest/gtest.h"

TEST(getAppleTest, getAppleTest_1){
    std::string test = "apple";
    ASSERT_EQ(test, getApple());
}

