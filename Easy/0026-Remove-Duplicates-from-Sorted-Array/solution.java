// ═══════════════════════════════════════════════════════
//  Problem  : 0026. Remove Duplicates from Sorted Array
//  URL      : https://leetcode.com/problems/remove-duplicates-from-sorted-array/submissions/2137820078/
//  Difficulty : Easy
//  Language : Java
//  Runtime  : 1 ms
//  Memory   : 46.8 MB
//  Solved   : September 10, 2026
// ═══════════════════════════════════════════════════════

class Solution {
    public int removeDuplicates(int[] nums) {
                int i = 0;
        for (int j = 1; j < nums.length; j++) {
            if (nums[j] != nums[i]) {
                i++;
                nums[i] = nums[j];
            }
        }
        return i + 1;
    }
}