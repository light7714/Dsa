//https://takeuforward.org/data-structure/post-order-traversal-of-binary-tree/

class Solution {
public:
    vector<int> postorderTraversal(TreeNode* root) {
        vector<int> ans;
        stack<TreeNode*> s;
        
        while(!s.empty() || root) {
            if(root) {
                s.push(root);
                root = root->left;
            }
            else {
                TreeNode* temp = s.top()->right;
                if(temp) {
                    root = temp;
                }
                else {
                    temp = s.top();
                    s.pop();
                    ans.push_back(temp->val);
                    while(!s.empty() && temp == s.top()->right) {
                        temp = s.top();
                        s.pop();
                        ans.push_back(temp->val);
                    }
                }
            }
        }
        return ans;
    }
};