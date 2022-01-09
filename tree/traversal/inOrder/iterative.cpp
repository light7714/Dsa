class Solution {
public:
    vector<int> inorderTraversal(TreeNode* root) {
        vector<int> ans;
        stack<TreeNode*> s;
    
        while(!s.empty() || root) {
            if(root) {
                if(root->left) {
                    s.push(root);
                    root = root->left;
                }
                else {
                    ans.push_back(root->val);
                    root = root->right;
                }
            }
            else {
                TreeNode* parent = s.top();
                s.pop();
                ans.push_back(parent->val);
                root = parent->right;
            }
        }
        return ans;
    }
};