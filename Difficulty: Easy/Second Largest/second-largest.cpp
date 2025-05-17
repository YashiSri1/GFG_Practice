//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;


// } Driver Code Ends

class Solution {
  public:
    int getSecondLargest(vector<int> &arr) {
        // code here
         int n=arr.size();
        int large=arr[0];
        int s_large=-1;
        for(int i=1;i<n;i++)
        {
            if(arr[i]>large){
                large=arr[i];
                
            }
        
        }
        for(int j=0;j<n;j++)
        {
            if(arr[j]>s_large && arr[j]!=large)
            s_large=arr[j];
        }
        return s_large;
    }
};


//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    cin.ignore();
    while (t--) {
        vector<int> arr;
        string input;
        getline(cin, input);
        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr.push_back(number);
        }
        Solution ob;
        int ans = ob.getSecondLargest(arr);
        cout << ans << endl;
        cout << "~" << endl;
    }
    return 0;
}

// } Driver Code Ends