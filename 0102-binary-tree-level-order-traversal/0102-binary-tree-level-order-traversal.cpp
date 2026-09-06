/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    vector<vector<int>> levelOrder(TreeNode* root) {
        vector<vector<int>>ans;
        if (root==NULL) return ans;
        queue<pair<TreeNode*,int>>q;
        q.push({root,1});
        while(!q.empty()){
            vector<int>temp;
            int s=q.size();
            TreeNode* t=q.front().first;
            int l=q.front().second;
            for (int i=0;i<s;i++){
                TreeNode* t=q.front().first;
                int l=q.front().second;
                if (t->left) q.push({t->left,l+1});
                if (t->right) q.push({t->right,l+1});
                q.pop();
                temp.push_back(t->val);
            }
            ans.push_back(temp);
            temp.clear();
        }
        return ans;
    }
};