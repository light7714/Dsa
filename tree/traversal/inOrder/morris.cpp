//https://takeuforward.org/data-structure/morris-inorder-traversal-of-a-binary-tree/

class Solution {
public:
    vector<int> inorderTraversal(TreeNode* root) {
        vector<int> ans;
        TreeNode* cur = root;
        while(cur) {
            if(cur->left == NULL) {
                ans.push_back(cur->val);
                cur = cur->right;
            }
            //go to rightmost of left subtree
            //if while going, the element points back to cur (means thread(link) exists from rightmost ele of left subtree to cur), then it means we have travelled here before, so we need ot move right
            //else we need to keep moving left
            else {
                TreeNode* temp = cur->left;
                while(temp->right && temp->right != cur) {
                    temp = temp->right;
                }
                
                if(temp->right == NULL) {
                    temp->right = cur;
                    cur = cur->left;
                }
                //case when temp->right == cur
                else {
                    temp->right = NULL;
                    ans.push_back(cur->val);
                    cur = cur->right;
                }
            }
        }
        return ans;
    }
};