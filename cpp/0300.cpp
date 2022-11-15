class Solution {
public:
    int lengthOfLIS(vector<int>& nums) {
        vector<int> pilha;

        for (int i {0}; i < nums.size(); ++i) {
            vector<int>::iterator it {lower_bound(pilha.begin(), pilha.end(), nums[i])};

            if (it == pilha.end()) {
                pilha.push_back(nums[i]);
            } else {
                *it = nums[i];
            }
        }

        return pilha.size();
    }
};
