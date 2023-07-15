class Solution {
public:
    int color[110];

    bool is_bipartite(int v, int c, vector<vector<int>> &g) {
        color[v] = c;
        bool ans {true};

        for (int neigh : g[v]) {
            if (color[neigh] == -1) {
                ans &= is_bipartite(neigh, 1 - c, g);
            } else if (color[neigh] != 1 - c) {
                return false;
            }

            if (!ans) {
                return false;
            }
        }

        return true;
    }

    bool isBipartite(vector<vector<int>>& graph) {
        fill(begin(color), end(color), -1);
        bool ans {true};

        for (int i {}; i < graph.size(); ++i) {
            if (color[i] == -1) {
                ans &= is_bipartite(i, 1, graph);
            }
        }

        return ans;
    }
};
