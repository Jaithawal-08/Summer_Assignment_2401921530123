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
     TreeNode* helper(vector<int>& preorder, int inStart, int inEnd,
                     int &preIndex, unordered_map<int,int>& mp) {
        
        if (inStart > inEnd) return NULL;
        
        // root from preorder
        int rootVal = preorder[preIndex++];
        TreeNode* root = new TreeNode(rootVal);
        
        // find root in inorder
        int inIndex = mp[rootVal];
        
        root->left = helper(preorder, inStart, inIndex - 1, preIndex, mp);
        
        root->right = helper(preorder, inIndex + 1, inEnd, preIndex, mp);
        
        return root;
    }
    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
        unordered_map<int,int>mp;
        for(int x=0;x<inorder.size();x++){
            mp[inorder[x]]=x;
        }
        int preIndex = 0;
        return helper(preorder, 0, inorder.size() - 1, preIndex, mp);
    }
};
