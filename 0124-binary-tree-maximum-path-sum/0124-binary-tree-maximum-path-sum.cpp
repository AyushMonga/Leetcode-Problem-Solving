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
    int dfs(TreeNode* root,int &res){
        if(root==nullptr){
            return 0; 
        }
        int leftsum=max(0,dfs(root->left,res));
        int rightsum=max(0,dfs(root->right,res));
        res=max(res,leftsum+rightsum+root->val);

        return max(leftsum,rightsum)+root ->val;
    }
    int maxPathSum(TreeNode* root) {
        int res=root->val;
        dfs(root,res);
        return res;
    }
};