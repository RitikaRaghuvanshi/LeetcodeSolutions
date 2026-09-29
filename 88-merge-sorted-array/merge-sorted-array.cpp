class Solution {
public:
    void merge(vector<int>& A ,int m, vector<int>& B, int n) {
      
       int i =m-1;
       int j =0;
       while(i>=0 && j<n){
        if(A[i]>B[j]){

        swap(A[i],B[j]);
        i--;
        j++;
        }
        else{
            break;
        }
       }
       sort(A.begin(),A.begin()+m);
       sort(B.begin(),B.end());
       for(int i = 0; i < n; i++) {
            A[m + i] = B[i];
       }

        
    }
};