/*
 * @lc app=leetcode id=2 lang=cpp
 *
 * [2] Add Two Numbers
 */

// @lc code=start
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
#include <stack>
#include <vector>
using namespace std;

 class Solution {
    public:
        ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        // Step 1: Traverse both linked lists and add the values
        ListNode* dummyHead = new ListNode(0);
        ListNode* current = dummyHead;
        int carry = 0;
        while (l1 != nullptr || l2 != nullptr || carry > 0) {
            int sum = carry;
            if (l1 != nullptr) {
                sum += l1->val;
                l1 = l1->next;
            }
            if (l2 != nullptr) {
                sum += l2->val;
                l2 = l2->next;
            }
            // Step 2: Calculate carry
            carry = sum / 10; // Calculate carry for next iteration
            current->next = new ListNode(sum % 10); // Create new node with the digit
            current = current->next; // Move to the next node
        }
        // Step 3: Return the result linked list
        return dummyHead->next; // Return the next node of dummy head, which is the actual result
            
    }
};
// @lc code=end

/*
1. Traverse each linked list and add to sum to calcuate least significant digit first.
2. Calculate carry for each addition and store it for the next iteration.
3. Return the head of the result linked list.
*/