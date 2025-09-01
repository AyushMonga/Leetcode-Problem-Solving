/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    void markParents(TreeNode* root,unordered_map<TreeNode*,TreeNode*>&mp){
        queue<TreeNode*>q;
        q.push(root);
        while(!q.empty()){
            TreeNode* current=q.front();
            q.pop();
            if(current->left){
                mp[current->left]=current;
                q.push(current->left);
            }
            if(current->right){
                mp[current->right]=current;
                q.push(current->right);
            }
        }
    }
    vector<int> distanceK(TreeNode* root, TreeNode* target, int k) {
         unordered_map<TreeNode*,TreeNode*>mp;
         markParents(root,mp);
         unordered_map<TreeNode*,int>visited;
         queue<TreeNode*>q;
         visited[target]=1;
         q.push(target);
         int dis=0;
         while(!q.empty()){
            int size=q.size();
            if(dis++==k)break;
            for(int i=0;i<size;i++){
                TreeNode* current=q.front();
                q.pop();
                if(current->left && !visited[current->left]){
                    q.push(current->left);
                    visited[current->left]=1;
                }
                if(current->right && !visited[current->right]){
                    q.push(current->right);
                    visited[current->right]=1;
                }
                if(mp[current]&& !visited[mp[current]]){
                    q.push(mp[current]);
                    visited[mp[current]]=1;
                }
            }
         }
         vector<int>result;
         while(!q.empty()){
            TreeNode* curr=q.front();
            result.push_back(curr->val);
            q.pop();
         }
         return result;
    }
};