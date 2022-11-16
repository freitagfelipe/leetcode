class Solution {
public:
    int guessNumber(int n) {
        long long start {1}, end {n}, ans;
        
        while (start <= end) {
            long long mid {(start + end) / 2};
            int guess_ans {guess(mid)};
            
            if (guess_ans == 0) {
                ans = mid;
                
                break;
            } else if (guess_ans == -1) {
                end = mid - 1;
            } else {
                start = mid + 1;
            }
        }
        
        return ans;
    }
};
