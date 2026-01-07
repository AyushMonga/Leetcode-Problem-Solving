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
    const int mod=1e9+7;
    long long totalcal(TreeNode* root){
        if(!root)return 0;
        long long ans=root->val+totalcal(root->left)+totalcal(root->right);
        return ans;
    }
    long long dfs(TreeNode* root, long long total,long long& ans){
        if(!root)return 0 ;
        long long sum=root->val+dfs(root->left,total,ans)+dfs(root->right,total,ans);
        if(((total-sum)*sum)>ans){
            ans=(total-sum)*sum;
        }
        return sum;
    }
    int maxProduct(TreeNode* root) {
        long long total=totalcal(root);
        long long ans=INT_MIN;
        dfs(root,total,ans);
        return ans%mod;
    }
};