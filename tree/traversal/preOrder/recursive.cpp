class Solution {
public:
     void traverse(TreeNode* root, vector<int>& ans) {
        ans.push_back(root->val);
        // for(int i=0; i<ans.size(); i++)
        //     cout<<ans[i]<<" ";
        //  cout<<"\n";
        if(root->left != NULL)
            traverse(root->left, ans);
        if(root->right != NULL)
            traverse(root->right, ans);
     }
    vector<int> preorderTraversal(TreeNode* root) {
        vector<int> ans;
        if(root == NULL)
            return ans;
        
        traverse(root, ans);
        return ans;
    }
};