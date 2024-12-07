//{ Driver Code Starts
//Initial Template for C++


#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++

class Solution
{
	public:
		string is_palindrome(int n)
		{
		    // Code here.
		    int ld;
		    int rev=0;
		    int x=n;
		    while(n>0)
		   {
		       ld=n%10;
		       rev=rev*10+ld;
		       n=n/10;
		   }
		   if(rev==x)
		   return "Yes";
		   else
		   return "No";
		}
};

//{ Driver Code Starts.
int main(){
    int T;
    cin >> T;
    while(T--)
    {
    	int n;
    	cin >> n;
    	Solution ob;
    	string ans = ob.is_palindrome(n);
    	cout << ans <<"\n";
    
cout << "~" << "\n";
}
	return 0;
}

// } Driver Code Ends