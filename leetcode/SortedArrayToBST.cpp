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
    
    TreeNode * loop(vector<int> & v){
        if(v.size()==0){
            return nullptr;
        }
        if(v.size()==1){
            return new TreeNode(v[0]);
        }
        int middle = v.size()/2;
        TreeNode * root = new TreeNode(v[middle]);
        vector<int> left(v.begin(), v.begin()+middle);
        vector<int> right(v.begin()+middle+1, v.end());
        root->left = loop(left);
        root->right = loop(right);
        return root;
    }
    TreeNode* sortedArrayToBST(vector<int>& nums) {
        return loop(nums);
    }
};