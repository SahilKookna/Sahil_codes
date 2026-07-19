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
 vector<int>ans;
   vector<int>preOrder(TreeNode* root){
        if(root==nullptr){
            return ans;
        }
        ans.push_back(root->val);
        preOrder(root->left);
        preOrder(root->right);
        return ans;
    }
    vector<int> preorderTraversal(TreeNode* root) {
        vector<int>res;
        res=preOrder(root);
        return ans;
    }
};