/*
 * @lc app=leetcode.cn id=923 lang=cpp
 *
 * [923] 3Sum With Multiplicity
 */
#include "stdc++.h"
using namespace std;
// @lc code=start
#define DIVOR 1000000007
class Solution {
public:
    int threeSumMulti(vector<int>& arr, int target) {
        int n = arr.size();
        unsigned long long ans = 0;
        for(int i = 0; i < n; i++){
            int twoSum = target - arr[i];
            if(twoSum >=  0){
                unordered_map<int,int> countOfDigit;
                for(int j = i + 1; j< n; j++){
                    countOfDigit[arr[j]]++;
                    ans =  (ans + countOfDigit[twoSum - arr[j]]%DIVOR)%DIVOR;
                }
            }
        }
        return ans;
    }
};
// @lc code=end

