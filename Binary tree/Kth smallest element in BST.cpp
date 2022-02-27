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
    int kthSmallest(TreeNode* root, int k) {
        int ans=-1;
        if(!root) return 0;
        int res=inorder(root,k,ans);
        return res;
    }
    int inorder(TreeNode* node,int &k, int &ans){
        if(!node) return 0;
        inorder(node->left,k,ans);
        if(--k == 0){
            ans = node->val;
        }
        inorder(node->right,k,ans);
        return ans;
        
    }
};
