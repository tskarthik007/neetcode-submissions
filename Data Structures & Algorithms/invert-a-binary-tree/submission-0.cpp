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
    void inverting(TreeNode* root){
        if(root==nullptr) return ;

        TreeNode* temp = root->right;
        root->right = root->left;
        root->left = temp;

        inverting(root->left);
        inverting(root->right);

        return;

    }
    TreeNode* invertTree(TreeNode* root) {
        inverting(root);
        return root;
    }
};
