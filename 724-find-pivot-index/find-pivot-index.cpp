class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int total=0;
        int leftsum=0;
        for(int i =0;i<nums.size();i++){
            total+=nums[i];
        }
        for(int i =0;i<nums.size();i++){
            if (leftsum==total-leftsum-nums[i])
            return i;
            

            
            leftsum+=nums[i];

}  

          return -1;
    }
};