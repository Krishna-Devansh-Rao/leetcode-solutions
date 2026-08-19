// ═══════════════════════════════════════════════════════
//  Problem  : 0001. Two Sum
//  URL      : https://leetcode.com/problems/two-sum/
//  Difficulty : Easy
//  Language : C++
//  Runtime  : 0 ms
//  Memory   : 8.3 MB
//  Solved   : August 19, 2026
// ═══════════════════════════════════════════════════════

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n = nums.size();

        for(int i = 0; i < n; i++){
            for(int j = i + 1; j < n; j++){
                if(nums[i] + nums[j] == target){
                    return {i, j};
                }
            }
        }

        return {}; // agar pair na mile
    }
};