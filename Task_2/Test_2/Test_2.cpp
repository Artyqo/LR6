#include "gtest/gtest.h"

#include "head_2.h"

TEST (InsertSubstringTest, Test_1) {
    char* result = insert_substring("world", "hello ", 0);
    ASSERT_NE(result, nullptr);
    EXPECT_STREQ(result, "hello world");
    delete[] result;
}

TEST (InsertSubstringTest, Test_2) {
    char* result = insert_substring("або", "ба", 6);
    EXPECT_STREQ(result, "абоба");
    delete[] result;
}

TEST (InsertSubstringTest, Test_3) {
    char* result = insert_substring("чики", " пики", 8);
    EXPECT_STREQ(result, "чики пики");
    delete[] result;
}

TEST (InsertSubstringTest, Test_4) {
    char* result = insert_substring("анонимус", "352", 16);
    EXPECT_STREQ(result, "анонимус352");
    delete[] result;
}

TEST (InsertSubstringTest, Test_5) {
    char* result = insert_substring("C", "--", 1);
    EXPECT_STREQ(result, "C--");
    delete[] result;
}

TEST (InsertSubstringTest, Test_6) {
    char* result = insert_substring(" Scott", "Travis", 0);
    EXPECT_STREQ(result, "Travis Scott");
    delete[] result;
}

TEST (InsertSubstringTest, Test_7) {
    char* result = insert_substring("gonia", "pata", 0);
    EXPECT_STREQ(result, "patagonia");
    delete[] result;
}

TEST (InsertSubstringTest, Test_8) {
    char* result = insert_substring("Тссс,", " узбеки спят", 9);
    EXPECT_STREQ(result, "Тссс, узбеки спят");
    delete[] result;
}

TEST (InsertSubstringTest, Test_9) {
    char* result = insert_substring("Coca", " Cola", 4);
    EXPECT_STREQ(result, "Coca Cola");
    delete[] result;
}

TEST (InsertSubstringTest, Test_10) {
    char* result = insert_substring("Tanks", "World of ", 0);
    EXPECT_STREQ(result, "World of Tanks");
    delete[] result;
}