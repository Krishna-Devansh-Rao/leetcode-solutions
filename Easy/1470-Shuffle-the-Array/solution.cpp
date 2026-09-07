// ═══════════════════════════════════════════════════════
//  Problem  : 1470. Shuffle the Array
//  URL      : https://leetcode.com/problems/shuffle-the-array/
//  Difficulty : Easy
//  Language : C++
//  Runtime  : 0 ms
//  Memory   : 8.4 MB
//  Solved   : September 8, 2026
// ═══════════════════════════════════════════════════════

class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {
        vector <int> ans(2 * n);
        for(int i = 0 ; i < n ; i++ ){
            ans[2 * i] = nums[i];
            ans[2 * i + 1] = nums[i + 1];

        }
        return ans;
    }
};