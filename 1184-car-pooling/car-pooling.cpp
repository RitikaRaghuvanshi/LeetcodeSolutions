class Solution {
public:
    bool carPooling(vector<vector<int>>& trips, int capacity) {
        vector<int>changes(1001,0);
        for(int i =0;i<trips.size();i++){
            changes[trips[i][1]]+=trips[i][0];
            changes[trips[i][2]]-=trips[i][0];
        }
        int passenger=0;
        for(int i =0;i<1001;i++){
            passenger+=changes[i];
            if(passenger>capacity)
                return false;

        
        }
        return true;
        
    }
};