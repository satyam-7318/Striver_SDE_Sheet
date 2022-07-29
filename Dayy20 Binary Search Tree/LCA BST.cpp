https://leetcode.com/problems/lowest-common-ancestor-of-a-binary-search-tree/



class Solution {
public:
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        
        if(root==NULL)
            return NULL;
        
        if((p->val < root->val && q->val > root->val) || (p->val > root->val && q->val < root->val) || p->val == root->val || q->val == root->val)
            return root;
        
        if(p->val < root->val && q->val < root->val)
            return lowestCommonAncestor(root->left,p,q);
        
            return lowestCommonAncestor(root->right,p,q);
        
        
    }
};
