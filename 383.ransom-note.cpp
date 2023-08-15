/*
 * @lc app=leetcode.cn id=383 lang=cpp
 *
 * [383] Ransom Note
 */
#include "stdc++.h"
using namespace std;
// @lc code=start
class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        long long countM[26];
        long long countR[26];
        memset(countM, 0, sizeof(countM));
        memset(countR, 0, sizeof(countR));
        for(auto c: magazine){
            countM[c- 'a']++;
        }
        for(auto c: ransomNote){
            countR[c-'a']++;
        }
        for(int i = 0; i <26; i++){
            if(countR[i]>countM[i]){
                return false;
            }
        }
        return true;
    }
};
// @lc code=end

