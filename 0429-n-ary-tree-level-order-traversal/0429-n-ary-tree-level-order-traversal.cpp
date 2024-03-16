/*
// Definition for a Node.
class Node {
public:
    int val;
    vector<Node*> children;

    Node() {}

    Node(int _val) {
        val = _val;
    }

    Node(int _val, vector<Node*> _children) {
        val = _val;
        children = _children;
    }
};
*/

class Solution {
public:
    vector<vector<int>> levelOrder(Node* root) {
        if(!root) return {};
        vector<vector<int>> ans;
        queue<Node*> q;
        q.push(root);
        // ans.push_back({root->val});
        while(!q.empty())
        {
            int n = q.size();
            vector<int> v;
            while(n--)
            {
                Node* t = q.front();
                for(int i = 0; i<t->children.size(); i++)
                {
                    q.push(t->children[i]);
                }
                q.pop();
                v.push_back(t->val);
            }
            ans.push_back(v);
        }
        return ans;
    }
};