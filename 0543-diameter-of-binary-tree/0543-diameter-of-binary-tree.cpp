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
    int depth(TreeNode* root){
        if(root==nullptr)return 0;
        int left=1+depth(root->left);
        int right=1+depth(root->right);
        return max(left,right);
    }
    int diameterOfBinaryTree(TreeNode* root) {
        if(root==nullptr)return 0;
        int left=depth(root->left);
        int right=depth(root->right);
        return max(left+right,max(diameterOfBinaryTree(root->left),diameterOfBinaryTree(root->right)));
    }
};