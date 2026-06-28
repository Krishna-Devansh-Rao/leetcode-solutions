// Last updated: 28/06/2026, 22:13:03
1class Solution {
2public:
3    int findNumbers(vector<int>& nums) {
4        int count = 0;
5
6for(int i = 0; i < nums.size(); i++)
7{
8    int num = nums[i];
9    int digits = 0;
10
11    while(num)
12    {
13        digits++;
14        num /= 10;
15    }
16
17    if(digits % 2 == 0)
18    {
19        count++;
20    }
21}
22
23return count;
24    }
25};