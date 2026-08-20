// ═══════════════════════════════════════════════════════
//  Problem  : 1480. Running Sum of 1d Array
//  URL      : https://leetcode.com/problems/running-sum-of-1d-array/
//  Difficulty : Easy
//  Language : C++
//  Runtime  : 0 ms
//  Memory   : 8.3 MB
//  Solved   : August 20, 2026
// ═══════════════════════════════════════════════════════

class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        int sum = 0;
        for(int i =0 ; i < nums.size() ; i++){
            sum = sum + nums[i];
        }

    return nums;

    }
};