class Solution {
public:
    vector<vector<int>> ans;
    
    void dfs(int i, int end, vector<int> current_answer, vector<vector<int>> &g) {
        if (i == end) {
            current_answer.push_back(i);
            
            ans.push_back(current_answer);
        }
        
        current_answer.push_back(i);
        
        for (int n : g[i]) {
            dfs(n, end, current_answer, g);
        }
    }
    
    vector<vector<int>> allPathsSourceTarget(vector<vector<int>>& graph) {
        dfs(0, graph.size() - 1, {}, graph);
        
        return ans;
    }
};
