class Solution {
public:
    int maxArea(vector<int>& height) {
        int maxwater=0;
        int leftpointer=0;
        int rightpointer=height.size()-1;
        while(leftpointer<rightpointer){
            int width=rightpointer-leftpointer;
            int h = min(height[leftpointer],height[rightpointer]);
            int currarea=width*h;
            maxwater=max(maxwater,currarea);
            if(height[rightpointer]>height[leftpointer]){
                leftpointer++;
            }
            else
            rightpointer--;
        }
        return maxwater;


        
    }
};