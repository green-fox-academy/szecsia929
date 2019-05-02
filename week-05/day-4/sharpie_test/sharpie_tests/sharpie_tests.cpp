//
// Created by user on 2019. 05. 02..
//

#include <gtest/gtest.h>
#include "sharpie.h"

class SharpieTest : public ::testing::Test {
};

TEST(sharpie_test, sharpie_use)
{
    Sharpie _sharpie;
    _sharpie.use();
    ASSERT_EQ(_sharpie.getInkAmount(), 99);
}

TEST(sharpie_test, sharpie_use_double_width)
{
    Sharpie _sharpie("red", 100, 2);
    _sharpie.use();
    _sharpie.use();
    ASSERT_EQ(_sharpie.getInkAmount(), 96);
}