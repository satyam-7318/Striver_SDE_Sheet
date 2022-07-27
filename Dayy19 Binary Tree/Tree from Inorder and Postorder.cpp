https://leetcode.com/problems/construct-binary-tree-from-inorder-and-postorder-traversal/



class Solution {
public:
    
    TreeNode* f(vector<int>& post, map<int,int> &m , int s , int e , int& i){
        
        
        if(s>e)
            return NULL;
        
        int val = post[i--];
        TreeNode* root = new TreeNode(val);
        int index = m[val];
        
        root->right = f(post,m,index+1,e,i);
        root->left = f(post,m,s,index-1,i);
        
        
        return root;
        
        
    }
    
    
    TreeNode* buildTree(vector<int>& inorder, vector<int>& postorder) {
        
        map<int,int> in;
        
        int n = inorder.size();
        
        for(int i=0;i<n;i++)
            in[inorder[i]] = i;
        
        int postIndex = n-1;
 
        TreeNode* root = f(postorder , in , 0 , n-1 , postIndex);
        
        return root;
        
        
    }
};
