class Solution {
public:
    bool isCovered(vector<vector<int>>& ranges, int left, int right) {
        for(int i =left;i<=right;i++){
            bool covered=false;
            for(int j =0;j<ranges.size();j++){
                if(ranges[j][0]<=i && i<= ranges[j][1]){
                covered=true;
                break;
            }
            }
        
        if(covered==false){
            return false;
        }
        }
        return true;
        
    }
};