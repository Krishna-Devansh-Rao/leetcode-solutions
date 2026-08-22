// ═══════════════════════════════════════════════════════
//  Problem  : 1295. Find Numbers with Even Number of Digits
//  URL      : https://leetcode.com/problems/find-numbers-with-even-number-of-digits/submissions/2116402352/
//  Difficulty : Easy
//  Language : C++
//  Runtime  : 0 ms
//  Memory   : 13.4 MB
//  Solved   : August 22, 2026
// ═══════════════════════════════════════════════════════

class Solution {
public:
    int findNumbers(vector<int>& nums) {
        int count = 0;

for(int i = 0; i < nums.size(); i++)
{
    int num = nums[i];
    int digits = 0;
    while(num){
        digits++;
        num /= 10;
    }
    if(digits % 2 == 0){
        count++;
    }
}
return count;
    }
};