// Last updated: 28/06/2026, 22:11:34
1class Solution {
2public:
3    vector<int> twoSum(vector<int>& nums, int target) {
4        int n = nums.size();
5
6        for(int i = 0; i < n; i++){
7            for(int j = i + 1; j < n; j++){
8                if(nums[i] + nums[j] == target){
9                    return {i, j};
10                }
11            }
12        }
13
14        return {}; // agar pair na mile
15    }
16};