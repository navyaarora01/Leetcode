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
    TreeNode* addOneRow(TreeNode* root, int val, int depth) {
        if(depth == 1)
        {
            TreeNode *nn1 = new TreeNode(val);
            nn1->left = root;
            return nn1;
        }
        queue<TreeNode*> q;
        q.push(root);
        int d = 1;
        while(d < depth - 1)
        {
            int n = q.size();
            for(int i = 0; i < n; i++)
            {
                TreeNode* f = q.front();
                q.pop();
                if(f->left) q.push(f->left);
                if(f->right) q.push(f->right);
            }
            d++;
        }
        while(!q.empty())
        {
            TreeNode *f = q.front();
            q.pop();
            TreeNode *nn1 = new TreeNode(val);
            TreeNode *nn2 = new TreeNode(val);
            nn1->left = f->left;
            nn2->right = f->right;
            f->left = nn1;
            f->right = nn2;
        }
        return root;
    }
};