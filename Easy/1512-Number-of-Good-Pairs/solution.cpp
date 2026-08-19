// ═══════════════════════════════════════════════════════
//  Problem  : 1512. Number of Good Pairs
//  URL      : https://leetcode.com/problems/number-of-good-pairs/submissions/2112827433/?search=1512
//  Difficulty : Easy
//  Language : C++
//  Runtime  : 0 ms
//  Memory   : 9.7 MB
//  Solved   : August 19, 2026
// ═══════════════════════════════════════════════════════

class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) {
        int count = 0;
        int n = nums.size();

        for(int i = 0; i < n; i++) {
            for(int j = i + 1; j < n; j++) {
                if(nums[i] == nums[j]) {
                    count++;
                }
            }
        }

        return count;
    }
};