/*
 * @lc app=leetcode id=9 lang=cpp
 *
 * [9] Palindrome Number
 */

// @lc code=start

class Solution {
public:
/* 
 * First check if the digit is negative if true return false. Then use temp % 10 to grab the last
 * digit from temp and add it to 'reverse' number via the 'digit' then divide temp by 10 essentially
 * truncating the last digit off the number. Repeat process while temp is not 0 then check if reverse
 * is equal to the original value if yes return true
 */
    bool isPalindrome(int x){
        long long reverse = 0;
        long long temp = x;

        if (x < 0) {
            return false;
        }
        while (temp != 0) {
            int digit = temp % 10;
            reverse = (reverse * 10) + digit;
            temp /= 10;
        }
        return (reverse == x);
    }
};
// @lc code=end

