// ═══════════════════════════════════════════════════════
//  Problem  : 1470. Shuffle the Array
//  URL      : https://leetcode.com/problems/shuffle-the-array/
//  Difficulty : Easy
//  Language : Java
//  Runtime  : 0 ms
//  Memory   : 42.7 MB
//  Solved   : September 8, 2026
// ═══════════════════════════════════════════════════════

class Solution {
    public int[] shuffle(int[] nums, int n) {
      int[] ans = new int[2 * n];
        for(int i = 0 ; i < n ; i++ ){
            ans[2 * i] = nums[i];
            ans[2 * i + 1] = nums[i + n];

        }
        return ans;
        
    }
}