/*
Problems covered: ~244
Two pointers turn many O(n²) approaches into O(n). You place two index markers and move them based on a condition to avoid redundant work.
How to Recognize It
    -  Input is a sorted array or list
    -  Why This Pattern Matters
This pattern is crucial for transforming O(n²) brute force solutions into O(n) linear time complexity by leveraging sorted structure or specific traversal patterns to minimize redundant scans.
    -   You need a pair or triplet satisfying a condition
    -   In-place operations
    -   Keywords: “remove duplicates,” “two numbers that add up to,” “container with most water”
Three Flavors
    Opposite direction — One pointer at the start, one at the end; they move toward each other (e.g., two-sum in a sorted array).
    Same direction, different speeds — Fast and slow pointers (e.g., cycle detection in a linked list).
    Partitioning — One pointer tracks the write position, the other scans (e.g., move zeros to the end).

    Practice Problems
167. Two Sum II – Input Array Is Sorted — opposite direction, sorted array
15. 3Sum — fix one index, two-pointer scan on the rest
11. Container With Most Water — shrink from both ends
283. Move Zeroes — partitioning / in-place
*/
#include <iostream>
#include <vector>
using namespace std;
/*
Given a 1-indexed array of integers numbers that is already sorted in non-decreasing order,
find two numbers such that they add up to a specific target number. Let these two numbers be numbers[index1] and numbers[index2] where 1 <= index1 < index2 <= numbers.length.
Return the indices of the two numbers index1 and index2, each incremented by one, as an integer array [index1, index2] of length 2.
The tests are generated such that there is exactly one solution. You may not use the same element twice.
Your solution must use only constant extra space.
Example 1:
Input: numbers = [2,7,11,15], target = 9
Output: [1,2]
Explanation: The sum of 2 and 7 is 9. Therefore, index1 = 1, index2 = 2. We return [1, 2].
Example 2:
Input: numbers = [2,3,4], target = 6
Output: [1,3]
Explanation: The sum of 2 and 4 is 6. Therefore index1 = 1, index2 = 3. We return [1, 3].
Example 3:
Input: numbers = [-1,0], target = -1
Output: [1,2]
Explanation: The sum of -1 and 0 is -1. Therefore index1 = 1, index2 = 2. We return [1, 2].
*/

class TwoPointerPattern
{
public:
    /*  Input: numbers = [2,7,11,15], target = 9
        Output: [1,2]
    */

    vector<int> twoSum(vector<int> &numbers, int target)
    {
        int left = 0;
        int right = numbers.size() - 1;

        while (left < right)
        {
            int sum = numbers[left] + numbers[right];
            if (sum == target)
            {
                return {left + 1, right + 1};
            }
            else if (sum < target)
            {
                left++;
            }
            else
            {
                right++;
            }
        }
        return {};
    }
};
