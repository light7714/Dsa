class Solution {
  public:
    vector <int> bottomView(Node *root) {
        // Your Code Here
        // Node* cur = root;
        vector<int> ans;
        if(root == NULL)
            return ans;
        // queue of pair of Node and hd
        queue<pair<Node*, int>> q;
        map<int, int> m;
        
        pair<Node*, int> rootNode(root, 0);
        q.push(rootNode);
        
        while(!q.empty()) {
            pair<Node*, int> cur = q.front();
            if(cur.first->left) {
                pair<Node*, int> node(cur.first->left, cur.second - 1);
                q.push(node);
            }
            if(cur.first->right) {
                pair<Node*, int> node(cur.first->right, cur.second + 1);
                q.push(node);
            }
            q.pop();
            
            m[cur.second] = cur.first->data;
        }
        
        map<int, int>::iterator itr;
        for(itr = m.begin(); itr != m.end(); itr++) {
            ans.push_back(itr->second);
        }
        return ans;
    }
};