class Solution {
public:
    int maxSubarraySumCircular(vector<int>& nums) {
        int all {nums[0]};
        int ans {nums[0]}, sum {nums[0]};
        int inverse_ans {nums[0] * -1}, inverse_sum {nums[0] * -1};
        int max_v {nums[0]};

        for (int i {1}; i < (int) nums.size(); ++i) {
            inverse_sum = max(nums[i] * -1, inverse_sum + nums[i] * -1);
            inverse_ans = max(inverse_ans, inverse_sum);

            sum = max(nums[i], sum + nums[i]);
            ans = max(ans, sum);

            max_v = max(max_v, nums[i]);

            all += nums[i];
        }

        if (max(ans, all + inverse_ans) == 0) {
            return max_v;
        }

        return max(ans, all + inverse_ans);
    }
};