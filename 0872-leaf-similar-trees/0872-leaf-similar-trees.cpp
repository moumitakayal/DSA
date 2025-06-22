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
    vector<int> res1;
    vector<int> res2;
    bool leafSimilar(TreeNode* root1, TreeNode* root2) {
        inOrder(root1, res1);
        inOrder(root2, res2);
        if(res1 == res2)
            return true;
        else
            return false;
    }
    void inOrder(TreeNode* root, vector<int>& res)
    {
        if(root == NULL)
            return;
        if(root->left == NULL && root->right == NULL)
        {
            res.push_back(root->val);
        }
        inOrder(root->left, res);
        inOrder(root->right, res);
    }
};