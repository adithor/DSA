//{ Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function template for C++

// A : given string to search
// B : vector of available strings

class Solution
{
public:

    bool solve(string A, vector<string> &B){
        int n = A.size();
        if(n==0)
            return true;
            
        string str = "";
        for(int i=0;i<n;i++){
            str.push_back(A[i]);
            if(find(B.begin(),B.end(),str) != B.end()){
                string temp = A.substr(i+1,n-i-1);
                if(solve(temp,B))
                    return true;
            }
        }
        
        return false;
        
    }
    
    int wordBreak(string A, vector<string> &B) {
        //code here
        return solve(A,B);
    }
};

//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<string> dict;
        for(int i=0;i<n;i++){
            string S;
            cin>>S;
            dict.push_back(S);
        }
        string line;
        cin>>line;
        Solution ob;
        cout<<ob.wordBreak(line, dict)<<"\n";
    }
}

// } Driver Code Ends