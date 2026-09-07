// ═══════════════════════════════════════════════════════
//  Problem  : 1512. Number of Good Pairs
//  URL      : https://leetcode.com/problems/number-of-good-pairs/submissions/2134331948/
//  Difficulty : Easy
//  Language : Java
//  Runtime  : 1 ms
//  Memory   : 42.9 MB
//  Solved   : September 8, 2026
// ═══════════════════════════════════════════════════════

class Solution {
    public int numIdenticalPairs(int[] nums) {
        int count = 0;
        int n = nums.length;

        for (int i = 0; i < n; i++) {
            for (int j = i + 1; j < n; j++) {
                if (nums[i] == nums[j]) {
                    count++;
                }
            }
        }

        return count;
    }
}