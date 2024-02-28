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
    int ans = -1;
    int mx = -1;
    void ht(TreeNode* root , int lh){
        if(root==NULL){return ;}
         if(lh>mx){
             ans = root->val;
            mx =lh;
        }
        ht(root->left , lh+1);
        ht(root->right , lh+1);
    }
    int findBottomLeftValue(TreeNode* root) {
      ht(root,0);
      return ans;
    }
};