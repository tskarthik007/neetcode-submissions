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
    int sameTree = true;

    bool calSameTree(TreeNode* p, TreeNode* q){
        if(p==nullptr && q==nullptr)
            return true;

        if(p==nullptr || q==nullptr)
            return false;

        if((p->val != q->val))
            return false;

        bool left = calSameTree(p->left,q->left);
        bool right = calSameTree(p->right,q->right);

        return left && right;
    }

public:
    bool isSameTree(TreeNode* p, TreeNode* q) {
        return calSameTree(p,q);
    }
};
