https://practice.geeksforgeeks.org/problems/top-view-of-binary-tree/1



class Solution
{
    public:
    //Function to return a list of nodes visible from the top view 
    //from left to right in Binary Tree.
    vector<int> topView(Node *root)
    {
        //Your code here
        vector<int> ans;
        
        
        if(root==NULL)
        return ans;
        
        map<int,int> topView;
        queue<pair<Node*,int>> q;
        
        q.push({root,0});
        
        
        while(!q.empty()){
            
            pair<Node*,int> p = q.front();
            q.pop();
            
            Node* frontNode = p.first;
            int hd = p.second;
            
            if(topView.find(hd)==topView.end()){
                topView[hd]=frontNode->data;
            }
            
            if(frontNode->left)
            q.push({frontNode->left,hd-1});
            
            
            if(frontNode->right)
            q.push({frontNode->right,hd+1});
        }
        
        
        for(auto i : topView){
            ans.push_back(i.second);
        }
        
        
        return ans;
    }

};
