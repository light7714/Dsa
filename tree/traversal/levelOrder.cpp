class Solution
{
    public:
    //Function to return the level order traversal of a tree.
    vector<int> levelOrder(Node* node)
    {
      //Your code here
        vector<int> ans;
        queue<Node*> q;
        q.push(node);
        
        while(!q.empty()) {
            Node* ele = q.front();
            ans.push_back(ele->data);
            
            if(ele->left != NULL)
                q.push(ele->left);
            if(ele->right!= NULL)
                q.push(ele->right);
                
            q.pop();
        }
        
        return ans;
        
    }
};