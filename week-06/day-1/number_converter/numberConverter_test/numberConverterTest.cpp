//
// Created by user on 2019. 05. 13..
//

#include <gtest/gtest.h>
#include "numberConverter.cpp"

TEST(numberConverter, numberToText)
{
    std::string number = numberConverter(6666);
    ASSERT_EQ("hatezerhatszazhatvanhat", number);
}

