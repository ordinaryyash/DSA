class Solution {
public:
    int romanToInt(string s) {
        unordered_map<char, int> values = {
            {'I', 1},
            {'V', 5},
            {'X', 10},
            {'L', 50},
            {'C', 100},
            {'D', 500},
            {'M', 1000}
        };

        int sum = 0;
        int n = s.size();

        for (int i = 0; i < n; i++) {
            // If current value is smaller than next value, subtract
            if (i + 1 < n && values[s[i]] < values[s[i + 1]]) {
                sum -= values[s[i]];
            } else {
                sum += values[s[i]];
            }
        }

        return sum;
    }
};
