class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int best {};
        int answer {INT_MIN};
        
        for (int num : nums) {
            best = max(num, num + best);
            answer = max(answer, best);
        }
        
        return answer;
    }
};
