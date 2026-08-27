// ═══════════════════════════════════════════════════════
//  Problem  : 0026. Remove Duplicates from Sorted Array
//  URL      : https://leetcode.com/problems/remove-duplicates-from-sorted-array/
//  Difficulty : Easy
//  Language : C++
//  Runtime  : 0 ms
//  Memory   : 8.2 MB
//  Solved   : August 27, 2026
// ═══════════════════════════════════════════════════════

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int j = 0;
        for(int i = 1; i < nums.size(); i++) {
            if(nums[i] != nums[j]) {
                j++;
                nums[j] = nums[i];
            }
        }
        return j + 1;
    }
};