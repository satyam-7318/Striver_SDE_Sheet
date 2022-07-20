https://www.codingninjas.com/codestudio/problems/boundary-traversal_790725?topList=striver-sde-sheet-problems&utm_source=striver&utm_medium=website&leftPanelTab=0



bool isLeaf(TreeNode<int>* root){
    
    return !root->left && !root->right;

}

void addLeft(TreeNode<int>* root , vector<int>& ans){
    
    if(!root || isLeaf(root))
        return;
    
    ans.push_back(root->data);
    
    if(root->left)
        addLeft(root->left , ans);
    else
        addLeft(root->right , ans);
    
    
}

void addLeaves(TreeNode<int>* root , vector<int>& ans){
    
    if(!root)
        return;
    
    if(isLeaf(root)){
        ans.push_back(root->data);
        return;
    }
    
    addLeaves(root->left,ans);
    addLeaves(root->right,ans);
    
    
}

void addRight(TreeNode<int>* root , vector<int>& ans){
    
    if(!root || isLeaf(root))
        return;
   
    if(root->right)
         addRight(root->right , ans);
    else
         addRight(root->left , ans);
    
     ans.push_back(root->data);
}


vector<int> traverseBoundary(TreeNode<int>* root){
    // Write your code here.
    
    vector<int> ans;
    
    
    if(!root)
        return ans;
    
    ans.push_back(root->data);
    addLeft(root->left , ans);
    addLeaves(root->left , ans);
    addLeaves(root->right , ans);
    addRight(root->right , ans);
    
    return ans;
}
