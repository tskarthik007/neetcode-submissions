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
    int subtree = false;
    bool check(TreeNode* root, TreeNode* subRoot){
        if (root==nullptr && subRoot==nullptr)
            return true;
        if (root==nullptr || subRoot == nullptr)
            return false;
        if (root->val != subRoot->val)
            return false;

        bool left = check(root->left,subRoot->left);
        bool right = check(root->right,subRoot->right);

        return left && right;
    }
    void  calSubtree(TreeNode* root,TreeNode* subRoot){
        if(root== nullptr) 
            return;

        if(subtree)
            return;

        bool checkResult = check(root,subRoot);

        if(checkResult)
            subtree = true;
        
        calSubtree(root->left,subRoot);
        calSubtree(root->right,subRoot);

        return; 

    }
    bool isSubtree(TreeNode* root, TreeNode* subRoot) {
        calSubtree(root,subRoot);
        return subtree;
    }
};
