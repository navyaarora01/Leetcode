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
    
    bool dfs(TreeNode* root , int sum , int val){
        if(root == NULL){
            return false;
        }
        
        if(root->left == NULL && root->right == NULL){
            return sum == val + root->val;
        }
        
        return dfs(root->left , sum , root->val + val) || dfs(root->right , sum , root->val + val);
        
    }
    
    bool hasPathSum(TreeNode* root, int targetSum) {
        return dfs(root , targetSum , 0);
    }
};