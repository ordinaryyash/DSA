class Solution {
public:
    int firstMissingPositive(vector<int>& a) {
        sort(a.begin(), a.end());
        int expected = 1;
        for (int i = 0; i < a.size(); i++) {
            if (a[i] == expected) expected++;
        }
        return expected;
    }
};
