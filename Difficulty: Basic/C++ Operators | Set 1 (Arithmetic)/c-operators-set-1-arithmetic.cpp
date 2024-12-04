//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
    vector<int> cppOperators(int A, int B) {
        // code here
        int a=A+B;
        int b=A*B;
        int c;
        int d;
        if(A>B){
          c=A-B;
         d=A/B;   
        }
        else {
         c=B-A;
         d=B/A;
        }
        
       return {a,b,c,d};
        
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int A, B;
        cin >> A >> B;
        Solution ob;
        vector<int> ans = ob.cppOperators(A, B);
        for (int u : ans) cout << u << "\n";
    
cout << "~" << "\n";
}
}
// } Driver Code Ends