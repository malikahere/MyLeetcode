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
int maxdis = 0;
    int traverse(TreeNode* root, int start){
        
        int depth = 0;
        if(root == NULL) return depth;

        int leftDepth = traverse(root->left, start);
        int rightDepth = traverse(root->right, start);

        if(root->val == start){
            maxdis = max(leftDepth, rightDepth); 
            depth = -1; 
        }else if(leftDepth >= 0 && rightDepth >= 0){
            
            depth = max(leftDepth, rightDepth) + 1; 
        }else{
            
            maxdis = max(maxdis,  abs(leftDepth) + abs(rightDepth));
            depth = min(leftDepth, rightDepth) - 1;
        }

        return depth;
    }
    int amountOfTime(TreeNode* root, int start) {
         traverse(root, start);
        return maxdis;
        
    }
};