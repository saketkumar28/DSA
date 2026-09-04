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
    void inor(TreeNode* r,vector<int>&a){
        if (r==NULL) return ;
        inor(r->left,a);
        a.push_back(r->val);
        inor(r->right,a);
    }
    vector<int> inorderTraversal(TreeNode* root) {
        vector<int>ans;
        inor(root,ans);
        return ans;
    }
};