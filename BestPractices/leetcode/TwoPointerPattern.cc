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

class TwoPointerPattern
{
public:
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
                right--;
            }
        }
        return {};
    }

    bool isPalindrom(string str)
    {
        int right  = str.length() - 1;
        int left = 0;

        while (left < right)
        {
            if(str[left] != str[right])
                return false;
            right--;
            left++;
        }
        return true;        
    }
};
