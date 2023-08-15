/*
 * @lc app=leetcode.cn id=179 lang=cpp
 *
 * [179] Largest Number
 */
#include "stdc++.h"
using namespace std;
// @lc code=start
class Solution {
public:
    string largestNumber(vector<int>& nums) {
        vector<string> vs;
        for(auto num: nums){
            vs.push_back(to_string(num));
        }
        sort(vs.begin(), vs.end(), [](auto& s1, auto& s2){
            return s1+s2 > s2+s1;
        });
        string s;
        for(auto v : vs){
            s = s + v;
        }
        return s[0] == '0'?"0":s;
    }
};
// @lc code=end

