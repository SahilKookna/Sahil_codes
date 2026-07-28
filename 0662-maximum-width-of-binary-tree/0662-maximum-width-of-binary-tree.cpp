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
    int widthOfBinaryTree(TreeNode* root) {
        long long first=0;
        long long last=0;
        long long width=0;
        if(root==nullptr){
            return width;
        }
       queue<pair<TreeNode*, long long>> q;
        q.push({root,0});
        while(!q.empty()){

            int n=q.size();
            long long start = q.front().second;
            for(int j=0;j<n;j++){
                auto it=q.front();
                q.pop();
                TreeNode* node=it.first;
                long long i=it.second-start;
                if(j==0){
                    first=i;
                }
                if(j==n-1){
                    last=i;
                }
                
                if(node->left!=nullptr){
                    q.push({node->left,2*i+1});
                }
                if(node->right!=nullptr){
                    q.push({node->right,2*i+2});
                }
               

            }
            width=max(width,(last-first+1));
        }
        return width;


    }
};