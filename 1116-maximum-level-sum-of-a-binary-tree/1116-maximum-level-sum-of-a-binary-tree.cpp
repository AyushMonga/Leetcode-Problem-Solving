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
    int maxLevelSum(TreeNode* root) {
        vector<vector<TreeNode*>>order;
        queue<TreeNode*>q;
        q.push(root);
        while(!q.empty()){
            int s=q.size();
            vector<TreeNode*>level;
            for(int i=0;i<s;i++){
            TreeNode* node=q.front();;
            q.pop();
            if(node->left)q.push(node->left);
            if(node->right)q.push(node->right);
            level.push_back(node);
            }
            order.push_back(level);
        }
        int sum=INT_MIN;
        int ans;
        for(int i=0;i<order.size();i++){
            int tot=0;
            for(int j=0;j<order[i].size();j++){
                tot+=order[i][j]->val;
            }
            if(tot>sum){
                sum=tot;
                ans=i+1;
            }
        }
        return ans;
    }
};