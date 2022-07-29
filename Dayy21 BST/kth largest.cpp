https://practice.geeksforgeeks.org/problems/kth-largest-element-in-bst/1



class Solution
{
    
public:
    
    int t(Node* root){
        
        if(root==NULL)
        return 0;
        
        
        return 1 + t(root->left) + t(root->right);
        
        
        
    }
    
    void f(Node* root, int& i , int k , int& ans){
        
        
        if(root==NULL)
            return;
        
        
        
        f(root->left , i , k , ans);
        
        i++;
        
        if(i==k){
            ans = root->data;
        }
        
        if(ans==-1)
            f(root->right , i , k , ans);
        
        
    }
    
    int kthLargest(Node* root, int k) {
        
        int ans = -1;
        int i = 0;
        
        int total = t(root);
        
        f(root , i , total-k+1 , ans);
        return ans;
        
        
    }
};
