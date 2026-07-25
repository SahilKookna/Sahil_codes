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
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        vector<vector<int>>ans;
        if(root==nullptr) return ans;
        queue<TreeNode*> q;
        q.push(root);
        int a=0;
        while(!q.empty()){
            int size=q.size();
            vector<int>level(size,0);
            int s=size;
            for(int i=0;i<size;i++){
                
                 TreeNode* node=q.front();
                 q.pop();
                 if(node->left!=nullptr){
                    q.push(node->left);
                 }
                 if(node->right!=nullptr){
                    q.push(node->right);
                 }
                 if(a==0){
                    level[i]=node->val;
                    
                 }
                 else{
                    level[s-1]=node->val;
                    s--;
                 }
                 
            }
            if(a==0) {
                a=1;
            }
            else {
                a=0;
            }
            ans.push_back(level);
           

        }
        return ans;
    }
};