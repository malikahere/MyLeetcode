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
   void leaf(TreeNode* root , vector<int>& arr){
       if(root==nullptr){return;}
       if(root->left==NULL and root->right==NULL){
           arr.push_back(root->val);
       }
       leaf(root->left, arr);
       leaf(root->right, arr);
   }
    bool leafSimilar(TreeNode* root1, TreeNode* root2) {
        vector<int> v1 , v2 ;
        leaf(root1 , v1);
        leaf(root2 , v2);
        return v1==v2 ;
    }
};