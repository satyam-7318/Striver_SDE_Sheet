https://leetcode.com/problems/symmetric-tree/



class Solution {
public:
    
    bool f(TreeNode* p , TreeNode* q){
        
        if(p==NULL && q==NULL)
            return true;
        
        if(p==NULL && q!=NULL || p!=NULL && q==NULL)
            return false;
        
        if(p->val != q->val)
            return false;
        
        
        return f(p->left , q->right) && f(p->right , q->left);
        
        
    }
    
    
    bool isSymmetric(TreeNode* root) {
        
        return  f(root->left , root->right);
        
    }
};
