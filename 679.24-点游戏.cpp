/*
 * @lc app=leetcode.cn id=679 lang=cpp
 *
 * [679] 24 点游戏
 */
#include "stdc++.h"
using namespace std;
// @lc code=start
class Solution {
public:
    bool judgePoint24(vector<int>& cards) {
        vector<double> cardsDouble;
        for (auto elem : cards)
        {
            cardsDouble.push_back((double) elem);
        }
        return solve();
    }
    bool solve(){
        for (size_t i = 0; i < 4; i++)
        {
            for (size_t j = 0; j < 4; j++)
            {
                if(i != j){
                    
                }
            }
            
        }

    }
};
// @lc code=end

