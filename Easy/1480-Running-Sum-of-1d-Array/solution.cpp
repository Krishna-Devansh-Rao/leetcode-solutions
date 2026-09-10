// ═══════════════════════════════════════════════════════
//  Problem  : 1480. Running Sum of 1d Array
//  URL      : https://leetcode.com/problems/running-sum-of-1d-array/
//  Difficulty : Easy
//  Language : C++
//  Runtime  : 0 ms
//  Memory   : 8.3 MB
//  Solved   : September 11, 2026
// ═══════════════════════════════════════════════════════

class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        int sum = 0;
        int n = nums.size();
        for(int i =0 ; i < n ; i++){
        sum = sum + nums[i];
        cout << sum << ",";
        }
    return nums;
    }
};