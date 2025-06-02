/*
 * @lc app=leetcode id=1 lang=cpp
 *
 * [1] Two Sum
 */

// @lc code=start
#include <vector>
using namespace std;
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n = nums.size();
        for (int i = 0; i < n; i++){
            for (int j = i + 1; j < n; j++){
                if (nums[i] + nums[j] == target) {
                    return {i,j};
                }
            }
        }
        return {}; // return empty vector if no solution found
    }
};
// @lc code=end

