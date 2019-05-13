#include "anagram.cpp"
#include <gtest/gtest.h>

TEST(anagram_Test, IsAnagram)
{
    std::string isAnagram = "CBA";
    std::string isAnagram2 = "ABC";

    ASSERT_EQ(true, anagram(isAnagram, isAnagram2));

};

TEST(anagram_Test, notAnagram)
{
    std::string word1 = "blabla";
    std::string word2 = "blablabla";

    ASSERT_EQ(false, anagram(word1, word2));


};

TEST(anagram_Test, IsAnagramLowerCase)
{
    std::string isAnagram = "CbA";
    std::string isAnagram2 = "ABC";

    ASSERT_EQ(true, anagram(isAnagram, isAnagram2));

};