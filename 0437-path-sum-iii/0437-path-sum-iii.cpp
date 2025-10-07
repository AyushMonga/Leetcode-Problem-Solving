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
    int helper(TreeNode* root,long long targetSum){
        if(!root)return 0;
        int count=0;
        if(root->val==targetSum)count++;
        count+=helper(root->left,targetSum-root->val);
        count+=helper(root->right,targetSum-root->val);
        return count;
    }
    int pathSum(TreeNode* root, int targetSum) {
        if(!root)return 0;
        int count=helper(root,targetSum);
        count+= pathSum(root->left,targetSum);
        count+=pathSum(root->right,targetSum);
        return count;
    }
};