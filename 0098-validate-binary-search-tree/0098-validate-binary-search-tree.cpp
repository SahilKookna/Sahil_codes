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
    bool helper(TreeNode* root,long long low,long long high){
        if(root==nullptr) return true;
        //bool curr;
        if(low>=root->val || root->val>=high){
            return false;
            //curr=true;
            
        }
       
        bool lh=helper(root->left,low,root->val);
        bool rh=helper(root->right,root->val,high);
        return  lh && rh;
    }
    bool isValidBST(TreeNode* root) {
        long long low=LLONG_MIN;
        long long high=LLONG_MAX;
      return helper(root,low,high);
         
    }
};