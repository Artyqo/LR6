#include "gtest/gtest.h"

#include "head_1.h"

TEST(FindGroupsTests, Test_1) {
    char input[] = "";
    char* result = findEvenGroups(input);
    EXPECT_STREQ(result, "");
    delete[] result;
}

TEST(FindGroupsTests, Test_2) {
    char input[] = "111 111 111";
    char* result = findEvenGroups(input);
    EXPECT_STREQ(result, "");
    delete[] result;
}

TEST(FindGroupsTests, Test_3) {
    char input[] = "1111";
    char* result = findEvenGroups(input);
    EXPECT_STREQ(result, "1111");
    delete[] result;
}

TEST(FindGroupsTests, Test_4) {
    char input[] = " 1111";
    char* result = findEvenGroups(input);
    EXPECT_STREQ(result, "1111");
    delete[] result;
}

TEST(FindGroupsTests, Test_5) {
    char input[] = "1111 ";
    char* result = findEvenGroups(input);
    EXPECT_STREQ(result, "1111");
    delete[] result;
}

TEST(FindGroupsTests, Test_6) {
    char input[] = " 1111 ";
    char* result = findEvenGroups(input);
    EXPECT_STREQ(result, "1111");
    delete[] result;
}

TEST(FindGroupsTests, Test_7) {
    char input[] = "111 00 1111 0 11111";
    char* result = findEvenGroups(input);
    EXPECT_STREQ(result, "00 1111");
    delete[] result;
}

TEST(FindGroupsTests, Test_8) {
    char input[] = "";
    char* result = findEvenGroups(input);
    EXPECT_STREQ(result, "");
    delete[] result;
}

TEST(FindGroupsTests, Test_9) {
    char input[] = "1111 00 1111 ";
    char* result = findEvenGroups(input);
    EXPECT_STREQ(result, "1111 00 1111");
    delete[] result;
}

TEST(FindGroupsTests, Test_10) {
    char input[] = " 1 1 1 1100 ";
    char* result = findEvenGroups(input);
    EXPECT_STREQ(result, "1100");
    delete[] result;
}