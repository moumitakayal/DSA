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
    vector<int> res;
    int ans = 0;
    int sumOfLeftLeaves(TreeNode* root) {

        preOrder(root);
        return ans;
    }
    void preOrder(TreeNode* root)
    {
        if(root == NULL)
            return;
        if(root->left != NULL && root->left->left == NULL && root->left->right == NULL)
        {
            ans = ans + root->left->val;
        }
        res.push_back(root->val);
        preOrder(root->left);
        preOrder(root->right);
    }
};