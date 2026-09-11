class Solution {
public:
    int firstUniqChar(string s) {
        unordered_map<char,int>mp;
        stack<int>st;
        for(int i =0;i<s.size();i++){
            mp[s[i]]++;
        }
        for(int i =s.size()-1;i>=0;i--){
            if(mp[s[i]]==1){
                st.push(i);
            }
        }
        if(st.empty())
        return -1;
        return st.top();
        
    }
};