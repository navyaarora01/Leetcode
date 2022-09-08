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
    //Inorder: left - root - right
    vector<int> inorderTraversal(TreeNode* root) {
        if(root==NULL)
            return {};
        
        //res[] to store inorder traversal
        vector<int> res;
        inorder(res, root);
        
        //since res contains inorder traversal of the tree
        return res;
    }
    
    void inorder(vector<int> &res, TreeNode* root){
        if(root==NULL)
            return;
        
        //Inorder: left - root - right
        inorder(res, root->left);
        res.push_back(root->val);
        inorder(res, root->right);
    }
};
