https://practice.geeksforgeeks.org/problems/left-view-of-binary-tree/1



vector<int> leftView(Node *root)
{
   // Your code here
    vector<int> ans;
      
      
      if(root==NULL)
      return ans;
      
      
      queue<pair<Node*,int>> q;
      
      map<int,int> m;
      
      q.push({root,0});
      
      
      while(!q.empty()){
          
         
              
              pair<Node* ,int> temp = q.front();
              q.pop();
              
              Node* frontNode = temp.first;
              int lvl = temp.second;
              
              if(m.find(lvl)==m.end())
              m[lvl]=frontNode->data;
              
              if(frontNode->left)
              q.push({frontNode->left,lvl+1});
              
              
              if(frontNode->right)
              q.push({frontNode->right,lvl+1});
          
      }
      
      
      for(auto i : m)
      ans.push_back(i.second);
      
      
      return ans;
}
