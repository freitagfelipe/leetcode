class Solution {
public:
    bool canJump(vector<int>& nums) {
        vector<bool> dp(nums.size());

        dp[0] = true;

        for (int i {}; i < nums.size(); ++i) {
            if (dp[i]) {
                for (int j {i}, k {nums[i]}; j < nums.size() && k >= 0; ++j, --k) {
                    dp[j] = true;
                }
            }
        }

        return dp.back();
    }
};
