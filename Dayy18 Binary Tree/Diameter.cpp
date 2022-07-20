https://leetcode.com/problems/diameter-of-binary-tree/



class Solution {
public:
    
    pair<int,int> diameter(TreeNode* root){
        
        if(!root){
            pair<int,int> p;
            p.first=0;
            p.second=0;
            return p;
        }
        
        pair<int,int> left = diameter(root->left);
        pair<int,int> right = diameter(root->right);
        
        int op1 = left.first;
        int op2 = right.first;
        int op3 = 1+left.second+right.second;
        
        
        pair<int,int> ans;
        
        ans.first = max(op1,max(op2,op3));
        ans.second = 1+max(left.second,right.second);
        
        return ans;
        
        
    }
    
    int diameterOfBinaryTree(TreeNode* root) {
        
        return diameter(root).first-1;
        
    }
};






// Alternative 


int ans=0;
   
int diameter(TreeNode* root){
  if(root==NULL)
    return 0;
  int l=diameter(root->left);
  int r=diameter(root->right);
  ans=max(ans,l+r+1);
  return max(l,r)+1;
}
    
int diameterOfBinaryTree(TreeNode* root) {
        diameter(root);
         return ans-1;
}
