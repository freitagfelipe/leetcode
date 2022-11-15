class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int i_num1, i_num2;
        unordered_map<int, int> m;
        
        for (int i {}; i < nums.size(); ++i) {
            if (m.find(target - nums[i]) != m.end()) {
                i_num1 = m[target - nums[i]];
                i_num2 = i;
                
                break;
            }
            
            m[nums[i]] = i;
        }
        
        return {i_num1, i_num2};
    }
};
