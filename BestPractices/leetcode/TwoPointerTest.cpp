
#include <gtest/gtest.h>
#include "TwoPointerPattern.cc"   // or include header if separated

TEST(TwoSumTest, BasicExample) {
    TwoPointerPattern sol;
    vector<int> input = {2, 7, 11, 15};
    int target = 9;

    vector<int> result = sol.twoSum(input, target);

    EXPECT_EQ(result.size(), 2);
    EXPECT_EQ(result[0], 1);
    EXPECT_EQ(result[1], 2);
}

TEST(TwoSumTest, AnotherCase) {
    TwoPointerPattern sol;
    vector<int> input = {3, 2, 4};
    int target = 6;

    vector<int> result = sol.twoSum(input, target);

    EXPECT_EQ(result[0], 2);
    EXPECT_EQ(result[1], 3);
}
