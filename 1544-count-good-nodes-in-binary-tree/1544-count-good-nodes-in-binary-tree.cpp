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
    int helper(TreeNode* root, int prev){
        if(!root)return 0;
        if(root->val>=prev){
            return 1+helper(root->right,root->val)+helper(root->left,root->val);
        }
        return helper(root->right,prev)+helper(root->left,prev);
    }
    int goodNodes(TreeNode* root) {
        return helper(root,INT_MIN);
    }
};