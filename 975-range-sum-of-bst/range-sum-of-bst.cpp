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
    int rangeSumBST(TreeNode* root, int low, int high) {
        if(root == nullptr){return 0;}
        int sol =0 ;
        int pt = root->val;
        if(pt >= low && pt <= high){
            sol+= pt + rangeSumBST(root->left,low,high) + rangeSumBST(root->right,low,high) ;
        }
        else if(pt < low){
            sol +=  rangeSumBST(root->right,low,high);}
        else {
            sol +=  rangeSumBST(root->left,low,high);
        }

        return sol;



    }
};