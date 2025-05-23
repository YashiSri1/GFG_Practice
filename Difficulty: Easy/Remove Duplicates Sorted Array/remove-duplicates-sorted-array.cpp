class Solution {
  public:
    int removeDuplicates(vector<int> &arr) {
        // code here
        int j=0;
        int n=arr.size();
        for(int i=1;i<n;i++)
        {
            if(arr[i]!=arr[j])
            {
                j++;
                arr[j]=arr[i];
            }
        }
        return j+1;
    }
};