// ═══════════════════════════════════════════════════════
//  Problem  : 0001. Two Sum
//  URL      : https://leetcode.com/problems/two-sum/submissions/2049150363/
//  Difficulty : Easy
//  Language : C++
//  Runtime  : 35 ms
//  Memory   : 14.1 MB
//  Solved   : June 28, 2026
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