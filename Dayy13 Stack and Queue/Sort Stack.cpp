https://www.codingninjas.com/codestudio/problems/sort-a-stack_985275?topList=striver-sde-sheet-problems&utm_source=striver&utm_medium=website&leftPanelTab=0




void pushval(stack<int> &s , int x){
    
    if(s.size()==0 || s.top()<x){
        s.push(x);
        return;
    }
    
    int k= s.top();
    s.pop();
    pushval(s,x);
    s.push(k);
    
}

void sortStack(stack<int> &s)
{
	// Write your code here
    
    if(s.size()==1)
        return;
    
    int x = s.top();
    s.pop();
    
    sortStack(s);
    
    pushval(s,x);
    

    
}
