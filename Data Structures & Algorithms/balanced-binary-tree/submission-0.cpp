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
    bool balance = true;
public:
    int calBalance(TreeNode* root){
        if(root==nullptr)
            return 0;
        
        if(!balance)
            return 0;

        int left = calBalance(root->left);
        int right = calBalance(root->right);

        if(abs(left-right)>1)
            balance = false;

        return max(left,right)+1;
    }
    bool isBalanced(TreeNode* root) {
        calBalance(root);
        return balance;
    }
};
