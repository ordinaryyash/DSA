class Solution {
public:
    int divide(int dividend, int divisor) {
        long long val;
        if (dividend == INT_MIN && divisor == -1) {
            return INT_MAX;
        }
        if(divisor != 0){
        val = dividend / divisor;
        }

        return int(val);
    }
};