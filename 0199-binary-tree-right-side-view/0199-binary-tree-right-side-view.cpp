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
    vector<vector<int>>helper(TreeNode* root){
        vector<vector<int>>ans;
        if(root==nullptr){
            return ans;
        }
        queue<TreeNode*>q;
        q.push(root);
        while(!q.empty()){
            vector<int>level;
            int size=q.size();
            for(int i=0;i<size;i++){
                TreeNode* node=q.front();
                q.pop();
                level.push_back(node->val);
                if(node->left!=nullptr)q.push(node->left);
                if(node->right!=nullptr)q.push(node->right);
            }
            ans.push_back(level);
        }
        return ans;
    }
    vector<int> rightSideView(TreeNode* root) {
        vector<vector<int>> ans;
        vector<int>sol;
        ans=helper(root);
        for(auto it:ans){
            int n=it.size();
            sol.push_back(it[n-1]);
        }
        return sol;
    }
};