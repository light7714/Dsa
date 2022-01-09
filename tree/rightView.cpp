//https://leetcode.com/problems/binary-tree-right-side-view/

//if done using (reverse)level order traversal, space comp is O(N)
//but if done using (reverse) preorder traversal (root->right->left), space comp is O(H)

class Solution {
public:
    void recursion(TreeNode* root, int level, vector<int>& ans) {
        if (root == NULL)
            return;
        if(ans.size() == level)
            ans.push_back(root->val);
        recursion(root->right, level + 1, ans);
        recursion(root->left, level + 1, ans);
    }
    vector<int> rightSideView(TreeNode* root) {
        vector<int> ans;
        recursion(root, 0, ans);
        return ans;
    }
};