//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++

class Solution {
  public:
    long long findNth(long long n) {
        long count=0,p=1;
        while(n>0)
        { 
            long r=n%9;
            count+=p*r;
            n=n/9;
            p=p*10;
        }
        return count;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        long long n, ans;
        cin >> n;
        Solution obj;
        ans = obj.findNth(n);
        cout << ans << endl;

        cout << "~"
             << "\n";
    }
}

// } Driver Code Ends