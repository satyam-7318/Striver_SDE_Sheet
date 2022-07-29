https://leetcode.com/problems/validate-binary-search-tree/



class Solution {
public:
     bool helper(TreeNode* root, long min, long max){
        if(!root) return true;
        if(root->val > min && root->val < max){
            return helper(root->left,min,root->val) && helper(root->right,root->val,max);
        }
        return false;
    }
    bool isValidBST(TreeNode* root) {
        return helper(root,LONG_MIN,LONG_MAX);
    }
};
