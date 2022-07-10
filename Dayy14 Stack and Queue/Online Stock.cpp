https://leetcode.com/problems/online-stock-span/



class StockSpanner {
public:
    
    stack<pair<int,int>> st;
    StockSpanner() {
        
    }
    
    int next(int price) {
       // span=1 isliye bcs vo element khud bhin count hoga isliye sab ka span 1 to hoga hi
        int span =1;
        // st-> first hai price & st-> second hai span 
        while(!st.empty() and st.top().first<=price){
            span+=st.top().second;
            st.pop();
        }
        // current element ka price and span ko stack ke pair me dal do
        st.push({price,span});
        return span;
    }
};
