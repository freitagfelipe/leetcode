class Solution {
public:
    vector<int> inorderTraversal(TreeNode* root) {
        vector<int> ans;
        stack<TreeNode*> s;
        
        if (root == nullptr) {
            return {};
        }
        
        TreeNode *node {root};
        
        while (node || !s.empty()) {
            while (node) {
                s.push(node);
                
                node = node->left;
            }
            
            node = s.top();
            
            s.pop();
            
            ans.push_back(node->val);
            
            node = node->right;
        }
        
        return ans;
    }
};
