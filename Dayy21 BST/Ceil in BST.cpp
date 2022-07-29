https://www.codingninjas.com/codestudio/problems/ceil-from-bst_920464?source=youtube&campaign=Striver_Tree_Videos&utm_source=youtube&utm_medium=affiliate&utm_campaign=Striver_Tree_Videos&leftPanelTab=0



int findCeil(BinaryTreeNode<int> *root, int x){
    // Write your code here.
    
    if(root==NULL)
        return -1;
    
    int ans = -1;
    
    while(root){
        
        if(root->data >= x){
            ans = root->data;
            root = root->left;
            
        }
        else{
            
            root = root->right;
        }
    }
    
    return ans;
    
}
