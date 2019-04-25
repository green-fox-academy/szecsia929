//
// Created by user on 2019. 04. 25..
//

#include "getApple.cpp"
#include "gtest/gtest.h"

TEST(getAppleTest, getAppleTest_1)
{
    std::string apple = "apple";
    std::string test = getApple();
    ASSERT_EQ(apple, test);
}

TEST(sumTest, emptyList)
{
    std::vector<int> testVector;
    int testSum = sum(testVector);
    ASSERT_EQ(0, testSum);
}

TEST(sumTest, oneElement)
{
    std::vector<int> testVector = {1};
    int testSum = sum(testVector);
    ASSERT_EQ(1, testSum);
}

TEST(sumTest, multipleElements)
{
    std::vector<int> testVector = {1, 1, 1};
    int testSum = sum(testVector);
    ASSERT_EQ(3, testSum);
}

TEST(sumTest, negativeSum)
{
    std::vector<int> testVector = {-1, -1, -1};
    int testSum = sum(testVector);
    ASSERT_EQ(-3, testSum);
}