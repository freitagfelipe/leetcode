class Solution {
public:
    void merge(vector<int> &v, int start, int end) {
        vector<int> result;
        
        int mid {(start + end) / 2};
        int p1 {start}, p2 {mid + 1};
        
        while (p1 <= mid && p2 <= end) {
            if (v[p1] <= v[p2]) {
                result.push_back(v[p1++]);
            } else {
                result.push_back(v[p2++]);
            }
        }
        
        while (p1 <= mid) {
            result.push_back(v[p1++]);
        }
        
        while (p2 <= end) {
            result.push_back(v[p2++]);
        }
        
        copy(result.begin(), result.end(), v.begin() + start);
    }
    
    void merge_sort(vector<int> &v, int start, int end) {
        if (end > start) {
            int mid {(start + end) / 2};
            
            merge_sort(v, start, mid);
            merge_sort(v, mid + 1, end);
            
            merge(v, start, end);
        }
    }
    
    vector<int> sortArray(vector<int>& nums) {
        merge_sort(nums, 0, nums.size() - 1);
        
        return nums;
    }
};
