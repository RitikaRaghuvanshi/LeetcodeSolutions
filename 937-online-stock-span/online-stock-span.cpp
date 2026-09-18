class StockSpanner {
public:
vector<int>prices;
 stack<int>s;
    StockSpanner() {  
    }
    
    int next(int price) {
        int i = prices.size();
    
            while(s.size()>0 && prices[s.top()] <=price){
                s.pop();
            }
            int ans;
            if(s.size()==0){
                ans=i+1;
            }
            else{
                ans=i-s.top();
            }

            prices.push_back(price);
            s.push(i);

        
         return ans;
        
        
    }
};
/**
 * Your StockSpanner object will be instantiated and called as such:
 * StockSpanner* obj = new StockSpanner();
 * int param_1 = obj->next(price);
 */