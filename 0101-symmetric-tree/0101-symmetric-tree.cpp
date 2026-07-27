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
    bool isMirror(TreeNode* left,TreeNode* right){
        if(left==nullptr && right==nullptr) return true;
        else if((left!=nullptr && right==nullptr)||(left==nullptr && right!=nullptr)){
            return false;

        }
        else if(left->val!=right->val){
            return false;
        }
        bool lh=isMirror(left->left,right->right);
        bool rh=isMirror(left->right,right->left);
        return lh && rh;
    }
    bool isSymmetric(TreeNode* root) {
        if(root==nullptr) return true;
        return  isMirror(root->left,root->right);
    }
};