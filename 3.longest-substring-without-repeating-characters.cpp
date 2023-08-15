/*
 * @lc app=leetcode.cn id=3 lang=cpp
 *
 * [3] Longest Substring Without Repeating Characters
 */
#include "stdc++.h"
using namespace std;
// @lc code=start
class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int lp = 0;
        unordered_map<char, int> indexOfChar;
        int n = s.length();
        int ans = 0;
        for(int i = 0; i < n; i++){
            if(indexOfChar.count(s[i])&&indexOfChar[s[i]]>=lp){
                lp = indexOfChar[s[i]]+1;
            }
            ans = max(i - lp+1, ans);
            indexOfChar[s[i]] = i;
        }
        return ans;
    }
};
// @lc code=end
int main(){
    Solution solution;
    solution.lengthOfLongestSubstring("tmmzuxt");
    return 0;
}

