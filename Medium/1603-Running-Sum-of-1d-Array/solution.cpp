// ═══════════════════════════════════════════════════════
//  Problem  : 1603. Running Sum of 1d Array
//  URL      : https://leetcode.com/problems/running-sum-of-1d-array/submissions/2049147331/?envType=problem-list-v2&envId=array
//  Difficulty : Medium
//  Language : C++
//  Runtime  : 2 ms
//  Memory   : 12.4 MB
//  Solved   : June 28, 2026
// ═══════════════════════════════════════════════════════

class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        for(int i = 1 ; i < nums.size() ; i++){
            nums[i] = nums[i] + nums[i-1];
        }
    return nums;
    }
};