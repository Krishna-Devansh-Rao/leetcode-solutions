// Last updated: 28/06/2026, 22:12:17
1class Solution {
2public:
3    int reverse(int x) {
4        int new_num = 0;
5
6        while(x != 0){
7            int last_num = x % 10;
8
9            // overflow check
10            if(new_num > INT_MAX/10 || new_num < INT_MIN/10){
11                return 0;
12            }
13
14            new_num = new_num * 10 + last_num;
15            x = x / 10;
16        }
17
18        return new_num;
19    }
20};