class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        sort(nums.begin(), nums.end());
int expected = 1;
for (int x : nums) {
    if (x == expected) expected++;
}
return expected;

    }
};