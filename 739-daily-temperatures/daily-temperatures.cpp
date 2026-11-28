class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
    
        vector<int>ans(temperatures.size(),0);
        stack<int>s;
        for(int i =0;i<temperatures.size();i++){
            while(!s.empty() && temperatures[i]>temperatures[s.top()]){
                int j =s.top();
                s.pop();
                ans[j]=i-j;
            }
             s.push(i);
        }
        return ans;
        
    }
};