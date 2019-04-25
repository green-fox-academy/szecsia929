//
// Created by user on 2019. 04. 25..
//

#include "anagram.cpp"
#include "gtest/gtest.h"

TEST(isAnagramTest, emptyWord)
{
    std::string text1 = "", text2 = "";
    bool test = isAnagram(text1, text2);
    ASSERT_EQ(true, test);
}

TEST(isAnagramTest, oneLetter)
{
    std::string text1 = "a", text2 = "a";
    bool test = isAnagram(text1, text2);
    ASSERT_EQ(true, test);
}

TEST(isAnagramTest, oneLetterFalse)
{
    std::string text1 = "a", text2 = "b";
    bool test = isAnagram(text1, text2);
    ASSERT_EQ(false, test);
}

TEST(isAnagramTest, multipleLetters)
{
    std::string text1 = "abc", text2 = "bca";
    bool test = isAnagram(text1, text2);
    ASSERT_EQ(true, test);
}

TEST(isAnagramTest, multipleLettersFalse)
{
    std::string text1 = "abc", text2 = "bad";
    bool test = isAnagram(text1, text2);
    ASSERT_EQ(false, test);
}

TEST(isAnagramTest, multipleInstancesOfTheSameCharachter)
{
    std::string text1 = "adab", text2 = "dbaa";
    bool test = isAnagram(text1, text2);
    ASSERT_EQ(true, test);
}

TEST(isAnagramTest, multipleInstancesOfTheSameCharachterFalse)
{
    std::string text1 = "aabd", text2 = "dbba";
    bool test = isAnagram(text1, text2);
    ASSERT_EQ(false, test);
}

TEST(isAnagramTest, numberOfLettersAreDifferent)
{
    std::string text1 = "aaabb", text2 = "bba";
    bool test = isAnagram(text1, text2);
    ASSERT_EQ(false, test);
}