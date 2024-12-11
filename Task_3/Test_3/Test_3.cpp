#include "gtest/gtest.h"
#include "head_3.h"

TEST(ReverseString, Test_1) {
    char source[] = "Hello World";
    char target[1000];
    char* lines[] = {source, target};
    EXPECT_STREQ(reverse_string(lines), "World Hello");
}

TEST(ReverseString, Test_2) {
    char source[] = "Привет Мир";
    char target[100];
    char* lines[] = {source, target};
    EXPECT_STREQ(reverse_string(lines), "Мир Привет");
}

TEST(ReverseString, Test_3) {
    char source[] = "Hello Привет World Мир";
    char target[100];
    char* lines[] = {source, target};
    EXPECT_STREQ(reverse_string(lines), "Мир World Привет Hello");
}

TEST(ReverseString, Test_4) {
    char source[] = "Coca Cola";
    char target[100];
    char* lines[] = {source, target};
    EXPECT_STREQ(reverse_string(lines), "Cola Coca");
}

TEST(ReverseString, Test_5) {
    char source[] = "спят узбеки Тссс,";
    char target[100];
    char* lines[] = {source, target};
    EXPECT_STREQ(reverse_string(lines), "Тссс, узбеки спят");
}

TEST(ReverseString, Test_6) {
    char source[] = "Tanks of World";
    char target[100];
    char* lines[] = {source, target};
    EXPECT_STREQ(reverse_string(lines), "World of Tanks");
}

TEST(ReverseString, Test_7) {
    char source[] = "gonia pata";
    char target[100];
    char* lines[] = {source, target};
    EXPECT_STREQ(reverse_string(lines), "pata gonia");
}

TEST(ReverseString, Test_8) {
    char source[] = "Scott Travis";
    char target[100];
    char* lines[] = {source, target};
    EXPECT_STREQ(reverse_string(lines), "Travis Scott");
}

TEST(ReverseString, Test_9) {
    char source[] = "пики чики";
    char target[100];
    char* lines[] = {source, target};
    EXPECT_STREQ(reverse_string(lines), "чики пики");
}

TEST(ReverseString, Test_10) {
    char source[] = "352 анонимус";
    char target[100];
    char* lines[] = {source, target};
    EXPECT_STREQ(reverse_string(lines), "анонимус 352");
}