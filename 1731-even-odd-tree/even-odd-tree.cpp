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
    bool isEvenOddTree(TreeNode* root) {
        
        if(!root) return true;
        if(root -> val % 2 == 0) return false;
        bool even = false;
        queue<TreeNode *> q;
        q.push(root);
        while(q.size())
        {
            int size = q.size();
            vector<int>vec;
            // level order triversal
            int pre = INT_MIN ; 
            for(int i = 0 ; i < size ; i++)
            {
                TreeNode * curr_node = q.front();
                q.pop();
                if(curr_node -> left)
                {
                    int current_value = curr_node -> left -> val;

                    
                    if( !even and current_value % 2 == 1) return false;
                    else if( even and current_value % 2 ==  0) return false;


                    if( pre == INT_MIN ) pre = current_value;
                    else
                    {
                        if( !even and (current_value >= pre || current_value % 2 == 1)  ) return false;
                        else if( even and (current_value <= pre || current_value % 2 == 0)  ) return false;
                        pre = current_value;
                    }
                    q.push(curr_node -> left);
                }
                if(curr_node -> right)
                {
                    int current_value = curr_node -> right -> val;

                    if( !even and current_value % 2 == 1) return false;
                    else if( even and current_value % 2 ==  0) return false;

                    if( pre == INT_MIN ) pre = curr_node -> right -> val;
                    else
                    {
                        if( !even and current_value >= pre ) return false;
                        else if( even and current_value <= pre ) return false;
                        pre = current_value;
                    }
                    q.push(curr_node -> right);
                }
            }
            even = !even;
        }

        return true;

    }
};