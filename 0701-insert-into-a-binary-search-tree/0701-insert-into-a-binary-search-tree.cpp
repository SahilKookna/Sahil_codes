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
    TreeNode* insertIntoBST(TreeNode* root, int val) {
        TreeNode* node=root;
        TreeNode* node1=nullptr;
        if(node==nullptr) {
            node=new TreeNode(val);
            return node;
        }
        while(node!=nullptr){
            if(node->val<val){
                node1=node;
                node=node->right;
            }
            else{
                 node1=node;
                 node=node->left;
            }
        }
        if(node1->val>val){
            node1->left=new TreeNode(val);
        }
        else{
            node1->right=new TreeNode(val);
        }
        return root;
    }
};