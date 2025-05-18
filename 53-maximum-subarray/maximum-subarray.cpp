class Solution { public:
int maxSubArray(vector<int>& nums) { int n = nums.size();
if (n == 0) return 0;
int current_max = nums[0]; int global_max = nums[0]; for (int i = 1; i < n; ++i) {
current_max = max(nums[i], current_max + nums[i]); global_max = max(global_max, current_max);
}
return global_max;
}
};
