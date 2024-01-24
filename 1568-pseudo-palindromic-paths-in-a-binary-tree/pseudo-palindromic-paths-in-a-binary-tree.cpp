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
    int count =0;
    unordered_map<int,int>mp ;
    void dfs(TreeNode* root , int odd){
      if(root==NULL) return;
      mp[root->val]++;
      if( mp[root->val]%2!=0){
          odd++;
      }
      else{
          odd--;
      }
      
      if(root->left==NULL and root->right==NULL and (odd==1 or odd==0)){
          count++;
       }

       
       dfs(root->left, odd);
       dfs(root->right, odd);
        mp[root->val]--;


    }
    int pseudoPalindromicPaths (TreeNode* root) {
        dfs(root , 0);
        return count;
    }
};