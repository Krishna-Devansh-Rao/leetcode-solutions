// Last updated: 28/06/2026, 22:03:50
class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        for(int i = 1 ; i < nums.size() ; i++){
            nums[i] = nums[i] + nums[i-1];
        }
    return nums;
    }
};