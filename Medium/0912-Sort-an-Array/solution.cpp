// ═══════════════════════════════════════════════════════
//  Problem  : 0912. Sort an Array
//  URL      : https://leetcode.com/problems/sort-an-array/submissions/2049151559/
//  Difficulty : Medium
//  Language : C++
//  Runtime  : 16 ms
//  Memory   : 71 MB
//  Solved   : June 28, 2026
// ═══════════════════════════════════════════════════════

class Solution {
public:
    vector<int> sortArray(vector<int>& nums) {
        sort(nums.begin(), nums.end());

        return nums;
    }
};