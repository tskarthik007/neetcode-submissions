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
private:
    int diameter =0;
    
    int calDiameter(TreeNode* root){
        if(root==nullptr)
            return 0;

        int left = calDiameter(root->left);
        int right = calDiameter(root->right);
        
        diameter = max((left+right),diameter);

        return max(left,right)+1;
    }

public:
    int diameterOfBinaryTree(TreeNode* root) {
        calDiameter(root);
        return diameter;
    }
};
