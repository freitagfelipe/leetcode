class Solution {
public:
    string removeDigit(string number, char digit) {
        int r;
        
        for (int i {}; i < number.size(); ++i) {
            if (number[i] == digit) {
                r = i;
                
                if (i != number.size() - 1 && number[i] < number[i + 1]) {
                    break;
                }
            }
        }
        
        number.erase(r, 1);
        
        return number;
    }
};
