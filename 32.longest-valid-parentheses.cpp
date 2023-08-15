/*
 * @lc app=leetcode.cn id=32 lang=cpp
 *
 * [32] Longest Valid Parentheses
 */
#include "stdc++.h"
using namespace std;
// @lc code=start
class Solution {
public:
    int longestValidParentheses(string s) {
        stack<char> stk;
        int ans = 0;
        for(auto c: s){
            if(stk.empty()){
                stk.push(c);
            }
            if(c == ')'){
                
            }
        }
        return ans;
    }
};
// @lc code=end

