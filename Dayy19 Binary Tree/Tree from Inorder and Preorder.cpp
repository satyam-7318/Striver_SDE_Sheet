https://leetcode.com/problems/construct-binary-tree-from-preorder-and-inorder-traversal/



class Solution {
public:
    
    TreeNode* f(vector<int>& pre, map<int,int> &m , int s , int e , int& i){
        
        
        if(s>e)
            return NULL;
        
        int val = pre[i++];
        TreeNode* root = new TreeNode(val);
        int index = m[val];
        
        root->left = f(pre,m,s,index-1,i);
        root->right = f(pre,m,index+1,e,i);
        
        return root;
        
        
    }
    
    
    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
        
        map<int,int> in;
        
        int n = inorder.size();
        
        for(int i=0;i<n;i++)
            in[inorder[i]] = i;
        
        int preIndex = 0;
 
        TreeNode* root = f(preorder , in , 0 , n-1 , preIndex);
        
        return root;
        
        
    }
};
