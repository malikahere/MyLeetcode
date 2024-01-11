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
int ans=0;
    void dfs(TreeNode* root, int minval, int maxval){
    if(root==nullptr){return ;}
    
        minval = min(root->val, minval);
        maxval = max(root->val, maxval);
        ans = max({ans, abs(root->val - minval), abs(root->val- maxval)});
        dfs(root->left, minval, maxval);
        dfs(root->right, minval, maxval);
     
    
    }

    int maxAncestorDiff(TreeNode* root) {
        dfs(root, root->val, root->val);
        return ans;
    }
};