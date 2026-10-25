class Solution {
public:
   vector<vector<int>> result;

    void solve(vector<int>& nums, int index, vector<int>& path) {
 
        if(index ==nums.size()){
            result.push_back(path);
            return;
        }
        path.push_back(nums[index]);
        solve(nums,index+1,path);
        path.pop_back();
        solve(nums,index+1,path);
        
    }
    vector<vector<int>>subsets(vector<int>nums){
        vector<int>path;
        solve(nums,0,path);
        return result;
    }
};