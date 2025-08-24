class Solution {
public:
    bool isPalindrome(int x) {
        int dup = x ;
        int ld = 0;
        long long rev = 0;
        while(x>0){
            ld = x % 10;
            rev = rev * 10 + ld;
            x = x/10;
        }
        return dup == rev;
    }
    
};