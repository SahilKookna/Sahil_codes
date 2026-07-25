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
   int height(TreeNode* p, TreeNode* q, int &sum){
        if((p==nullptr)&& (q==nullptr)) return 0;
        else if((p!=nullptr)&&(q==nullptr) || (q!=nullptr)&&(p==nullptr)){
            sum=1;
            return 0;
        }
        else if((p->val)!=(q->val)){
            sum=1;
            return 0;
        }
        int lh=height(p->left,q->left,sum);
        int rh=height(p->right,q->right,sum);
        return 0;

    }
    bool isSameTree(TreeNode* p, TreeNode* q) {
        int sum=0;
        height(p,q,sum);
        if(sum==1) return false;
        return true;
    }
};