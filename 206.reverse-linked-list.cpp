/*
 * @lc app=leetcode.cn id=206 lang=cpp
 *
 * [206] Reverse Linked List
 */
#include "stdc++.h"
using namespace std;
struct ListNode
{
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

// @lc code=start

class Solution
{
public:
    ListNode *reverseList(ListNode *head)
    {
        ListNode *pre = nullptr;
        ListNode *cur = head;
        while (cur != nullptr)
        {
            ListNode *next = cur->next;
            cur->next = pre;
            pre = cur;
            cur = next;
        }
        return pre;
    }
};
// @lc code=end