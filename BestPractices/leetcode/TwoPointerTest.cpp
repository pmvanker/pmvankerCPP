
#include <gtest/gtest.h>
#include "TwoPointerPattern.cc"   // or include header if separated


/*
Given a 1-indexed array of integers numbers that is already sorted in non-decreasing order,
find two numbers such that they add up to a specific target number. Let these two numbers be numbers[index1] and numbers[index2] where 1 <= index1 < index2 <= numbers.length.
Return the indices of the two numbers index1 and index2, each incremented by one, as an integer array [index1, index2] of length 2.
The tests are generated such that there is exactly one solution. You may not use the same element twice.
Your solution must use only constant extra space.
*/
TEST(TwoSumTest, Test1) {
/*Example 1:
    Input: numbers = [2,7,11,15], target = 9
    Output: [1,2]
    Explanation: The sum of 2 and 7 is 9. Therefore, index1 = 1, index2 = 2. We return [1, 2].
*/
    TwoPointerPattern sol;
    vector<int> input = {2, 7, 11, 15};
    int target = 9;
    vector<int> result = sol.twoSum(input, target);
    EXPECT_EQ(result.size(), 2);
    EXPECT_EQ(result[0], 1);
    EXPECT_EQ(result[1], 2);
}

TEST(TwoSumTest, Test2) {
/*Example 2:
    Input: numbers = [2,3,4], target = 6
    Output: [1,3]
    Explanation: The sum of 2 and 4 is 6. Therefore index1 = 1, index2 = 3. We return [1, 3].
*/
    TwoPointerPattern sol;
    vector<int> input = {2,3,4};
    int target = 6;
    vector<int> result = sol.twoSum(input, target);
    EXPECT_EQ(result.size(), 2);
    EXPECT_EQ(result[0], 1);
    EXPECT_EQ(result[1], 3);
}

TEST(TwoSumTest, Test3) {
/*Example 3:
    Input: numbers = [-1,0], target = -1
    Output: [1,2]
    Explanation: The sum of -1 and 0 is -1. Therefore index1 = 1, index2 = 2. We return [1, 2].
*/
    TwoPointerPattern sol;
    vector<int> input = {-1,0};
    int target = -1;
    vector<int> result = sol.twoSum(input, target);
    EXPECT_EQ(result.size(), 2);
    EXPECT_EQ(result[0], 1);
    EXPECT_EQ(result[1], 2);
}

TEST(isPalindrom, Test1) {
    TwoPointerPattern sol;
    string input = "racecar";
    bool result = sol.isPalindrom(input);
    EXPECT_EQ(result, true);
}

TEST(isPalindrom, Test2) {
    TwoPointerPattern sol;
    string input = "madam";
    bool result = sol.isPalindrom(input);
    EXPECT_EQ(result, true);
}

TEST(isPalindrom, Test3) {
    TwoPointerPattern sol;
    string input = "141";
    bool result = sol.isPalindrom(input);
    EXPECT_EQ(result, true);
}

int main(int argc, char **argv)
{
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
