https://www.codingninjas.com/codestudio/problems/floor-from-bst_920457?source=youtube&campaign=Striver_Tree_Videos&utm_source=youtube&utm_medium=affiliate&utm_campaign=Striver_Tree_Videos&leftPanelTab=0



int floorInBST(TreeNode<int> * root, int X)
{
    // Write your code here.
    
    int f = -1;
    while(root){
        
        if(root->val <= X){
            f = root->val;
            root = root->right;
        }
        else
            root = root->left;
        
    }
    
    return f;
    
}
