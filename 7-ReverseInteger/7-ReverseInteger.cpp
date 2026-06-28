// Last updated: 28/06/2026, 22:03:51
class Solution {
public:
    int reverse(int x) {
        int new_num = 0;

        while(x != 0){
            int last_num = x % 10;

            // overflow check
            if(new_num > INT_MAX/10 || new_num < INT_MIN/10){
                return 0;
            }

            new_num = new_num * 10 + last_num;
            x = x / 10;
        }

        return new_num;
    }
};