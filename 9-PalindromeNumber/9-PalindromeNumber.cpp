// Last updated: 28/06/2026, 22:03:48
class Solution {
public:
    bool isPalindrome(int x) {

        // negative ya last digit 0 (except 0)
        if(x < 0 || (x % 10 == 0 && x != 0)) return false;

        int rev = 0;

        while(x > rev){
            int last = x % 10;
            rev = rev * 10 + last;
            x = x / 10;
        }

        // even digits → x == rev
        // odd digits → x == rev/10
        return (x == rev || x == rev/10);
    }
};