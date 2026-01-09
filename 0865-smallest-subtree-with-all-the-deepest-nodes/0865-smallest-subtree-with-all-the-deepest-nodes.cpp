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
    unordered_map<TreeNode*,TreeNode*>parent;
    unordered_map<TreeNode*,int>depth;
    int maxdepth=0;
    void dfs(TreeNode* node,TreeNode* par,int d){
        if(!node)return;
        parent[node]=par;
        depth[node]=d;
        maxdepth=max(maxdepth,d);
        dfs(node->left,node,d+1);
        dfs(node->right,node,d+1);
    }
    TreeNode* subtreeWithAllDeepest(TreeNode* root) {
        dfs(root,nullptr,0);
        vector<TreeNode*>deepest;
        for(auto it:depth){
            if(it.second==maxdepth){
                deepest.push_back(it.first);
            }
        }
        unordered_set<TreeNode*>check;
        for(auto it:deepest){
            check.insert(it);
        }
        while(check.size()>1){
            unordered_set<TreeNode*>nxt;
            for(auto it:check){
                nxt.insert(parent[it]);
            }
            check=nxt;
        }
        TreeNode* ans;
        for(auto it:check){
            ans=it;
        }
        return ans;
    }
};