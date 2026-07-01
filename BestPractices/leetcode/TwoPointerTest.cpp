
#include <gtest/gtest.h>
#include "TwoPointerPattern.cc"   // or include header if separated


TEST(TwoSumTest, BasicExample) {
    TwoPointerPattern sol;
    vector<int> input = {2, 7, 11, 15};
    int target = 9;

    int result = sol.twoSum(input, target);

    EXPECT_EQ(result, 0);
}
