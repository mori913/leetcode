/*
 * @lc app=leetcode.cn id=1366 lang=cpp
 *
 * [1366] Rank Teams by Votes
 */
#include "stdc++.h"
using namespace std;
// @lc code=start
class Solution {
public:
    string rankTeams(vector<string>& votes) {
        string ans = votes[0];
        int l = ans.length();
        unordered_map<char, vector<int>> weightOfChar;
        for(auto c: ans){
            weightOfChar[c] = vector(l,0);
        }
        for(auto vote: votes){
            unsigned long long digit = 1;
            for(int i = 0; i < l; i++){
                weightOfChar[vote[i]][i]++;
            }
        }
        sort(ans.begin(), ans.end(), [&weightOfChar, &l](char a,char b){
            for(int i = 0; i < l; i++){
                if(weightOfChar[a][i] != weightOfChar[b][i]){
                    return weightOfChar[a][i] > weightOfChar[b][i];
                }
            } 
            return a < b;
        });
        return ans;
    }
};
// @lc code=end

int main(){
    return 0;
}