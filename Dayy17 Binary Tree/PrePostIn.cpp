https://www.codingninjas.com/codestudio/problems/981269?topList=striver-sde-sheet-problems&utm_source=striver&utm_medium=website&leftPanelTab=0



#include<bits/stdc++.h>
vector<vector<int>> getTreeTraversal(BinaryTreeNode<int> *root){
    // Write your code here.
    
    vector<vector<int>> ans;
    
    if(root==NULL)
        return ans;
    
    vector<int> pre,in,post;
    
    stack<pair<BinaryTreeNode<int>*, int>>  st;
    
    st.push({root,1});
    
    
    while(!st.empty()){
        
        auto it = st.top();
        
        BinaryTreeNode<int> * node = it.first;
        int d = it.second;
        
        st.pop();
        
        if(d==1){
            pre.push_back(node->data);
            
             it.second++;
            
            st.push(it);
            
            if(node->left)
                st.push({node->left,1});
            
           
            
        }
        else if(d==2){
            
             in.push_back(node->data);
            
            it.second++;
            
            st.push(it);
            
            if(node->right)
                st.push({node->right,1});
            
            
            
        }
        else{
            
            post.push_back(node->data);
            
        }
    
    }
    
    ans.push_back(in);
    ans.push_back(pre);
    ans.push_back(post);
    
    return ans;
    
}
