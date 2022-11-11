/*
 * @lc app=leetcode.cn id=234 lang=cpp
 *
 * [234] Palindrome Linked List
 */
#include "stdc++.h"
using namespace std;
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
class Solution
{
public:
    bool isPalindrome(ListNode *head)
    {
        vector<int> temp;
        while (head != nullptr)
        {
            temp.push_back(head->val);
            head = head->next;
        }
        int n = temp.size();
        int lp = 0, rp = n - 1;
        while (lp < rp)
        {
            if (temp[lp] != temp[rp])
            {
                return false;
            }
            else
            {
                lp++;
                rp--;
            }
        }
        return true;
    }
};
// @lc code=end
