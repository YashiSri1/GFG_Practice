class Solution {
  public:
    int getSecondLargest(vector<int> &arr) {
        // code here
        int n=arr.size();
        int max=arr[0];
        for(int i=0;i<n;i++){
            if(arr[i]>max){
                max=arr[i];
            }
        }
        int secmax=-1;
        for(int i=0;i<n;i++){
            if(arr[i]>secmax && arr[i]!=max){
                secmax=arr[i];
            }
        }
        return secmax;
    }
};