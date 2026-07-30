// ═══════════════════════════════════════════════════════
//  Problem  : 0912. Sort an Array
//  URL      : https://leetcode.com/problems/sort-an-array/
//  Difficulty : Medium
//  Language : C++
//  Runtime  : 0 ms
//  Memory   : 8.3 MB
//  Solved   : July 30, 2026
// ═══════════════════════════════════════════════════════

class Solution {
public:
    vector<int> sortArray(vector<int>& nums) {
        sort(nums.begin(), nums.end());

        return nums;
    }
};
