class Solution {
public:
    int longestCommonSubsequence(string a, string b) {
        vector<vector<int>> tab(a.size() + 1, vector<int>(b.size() + 1, 0));
        
        for (int i {}; i < a.size(); ++i) {
            for (int j {}; j < b.size(); ++j) {
                if (a[i] != b[j]) {
                    tab[i + 1][j + 1] = max(tab[i + 1][j], tab[i][j + 1]);
                } else {
                    tab[i + 1][j + 1] = tab[i][j] + 1;
                }
            }
        }
        
        return tab[a.size()][b.size()];
    }
};
