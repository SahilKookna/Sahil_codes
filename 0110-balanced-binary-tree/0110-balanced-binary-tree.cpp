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
      int height(TreeNode* root,int &sum){
        if(root==nullptr) return 0;
            int lh=height(root->left,sum);
            int rh= height(root->right,sum);
            if(abs(lh-rh)>1){
                sum =1;
            }
             
            return 1+max(lh,rh);
            }
      
    bool isBalanced(TreeNode* root) {
        int sum=0;
       height(root,sum);
       if(sum==1) return false;
       else return true;
        
    }
};