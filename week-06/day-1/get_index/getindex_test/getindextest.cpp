//
// Created by user on 2019. 05. 13..
//
#include <gtest/gtest.h>
#include "getindex.cpp"

TEST(getIndex__Test, vector_not_contains_the_value)
{
    std::vector<int> vector = {1, 2, 3};
    int value = 5;
    int index;
    index = getIndex(vector, value);
    ASSERT_EQ(index, -1);
}

TEST(getIndex__Test, vector_contains_the_value)
{
    std::vector<int> vector = {1, 2, 3};
    int value = 2;
    int index;
    index = getIndex(vector, value);
    ASSERT_EQ(index, 2);
}

