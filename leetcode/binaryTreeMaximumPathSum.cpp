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
    
    int maxValue;
    
    int loop(TreeNode * root){
        if(root==nullptr){
            return 0;
        }
        else{
            //if the left node doesn't contribute, discard
            int left = max(loop(root->left),0);
            //if the right node doens't contribute, discard
            int right = max(loop(root->right),0);
            
            //Calculate the maximum reached so far
            maxValue = max(root->val+left+right,maxValue);
            //Once we go up level, we can only choose left or right, since we cannot cross a node twice.
            return max(left, right) + root->val;
        }
    }
    int maxPathSum(TreeNode* root) {
        maxValue = INT32_MIN;
        loop(root);
        return maxValue;
    }
};