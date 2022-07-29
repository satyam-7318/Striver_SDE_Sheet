https://leetcode.com/problems/construct-binary-search-tree-from-preorder-traversal/



class Solution {
public:
    
    TreeNode* f(vector<int>& pre , int& i , int maxi){
        
        if(i>=pre.size() || pre[i] > maxi)
            return NULL;
        
        
        TreeNode* root = new TreeNode(pre[i++]);
        
        root->left = f(pre , i , root->val);
        
        root->right = f(pre , i , maxi);
        
        
        return root;
        
        
        
    }
    
    TreeNode* bstFromPreorder(vector<int>& preorder) {
        
        int maxi = INT_MAX;
        
        int i = 0;
        
        TreeNode* root = f(preorder , i , maxi);
        
        return  root;
        
    }
};
