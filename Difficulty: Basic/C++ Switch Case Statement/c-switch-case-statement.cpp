//{ Driver Code Starts
#include<bits/stdc++.h> 
using namespace std; 

// } Driver Code Ends
class Solution{   
public:
    string isInRange(int N){
        // code here 
        if(N==1){
            return "one";
            
        }
         else if(N==2){
             return "two";
            
        }
         else if(N==3){
             return "three";
            
        }
        else  if(N==4){
             return "four";
            
        }
        else  if(N==5){
             return "five";
            
        }
        else  if(N==6){
             return "six";
            
        }
        else  if(N==7){
             return "seven";
            
        }
        else  if(N==8){
             return "eight";
            
        }
        else  if(N==9){
             return "nine";
            
        }
        else  if(N==10){
             return "ten";
            
        }
        else{
            return "not in range";
        }
    }
};

//{ Driver Code Starts.
int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        int N;
        cin >> N;
        Solution ob;
        cout << ob.isInRange(N) << endl;
    
cout << "~" << "\n";
}
    return 0; 
} 
// } Driver Code Ends