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
    vector<vector<int>> verticalTraversal(TreeNode* root) {
         vector<vector<int>>ans;
         if(root==nullptr) return ans;
         map<int,map<int,multiset<int>>>mp;
         queue<pair<TreeNode*, pair<int,int>>> q;
         
         q.push({root, {0, 0}});
         while(!q.empty()){
           int n=q.size();

            for(int i=0;i<n;i++){
                 auto curr = q.front();
                    q.pop();
                    TreeNode* node = curr.first;
                    int row = curr.second.first;
                    int col = curr.second.second;
                    if(node->left!=nullptr){
                        q.push({node->left, {row+1, col-1}});
                    }
                    if(node->right!=nullptr){
                        q.push({node->right, {row+1, col+1}});
                    }
                    mp[col][row].insert(node->val);

            }
            
         }
         for (auto column : mp) {

            vector<int> temp;

            for (auto row : column.second) {

                for (int val : row.second) {

                    temp.push_back(val);

                }

            }

            ans.push_back(temp);

        }

        return ans;


    }
};