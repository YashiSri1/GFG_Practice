//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++
class Solution {
  public:
    int sumOfDivisors(int n) {
        // Write Your Code here
        int div = 1;
        
        int sum = 0;
        int total = 0;
        
        for(int i = 1; i <= n ; i++){
            sum = 0;
            for(int j = 1; j <= i ; j++){
                if(i % j == 0){
                    div = j;
                    sum += div;
                } 
            }
            total += sum;
        }
        
        return total;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        cin >> N;
        Solution ob;
        int ans = ob.sumOfDivisors(N);
        cout << ans << endl;

        cout << "~"
             << "\n";
    }
    return 0;
}
// } Driver Code Ends