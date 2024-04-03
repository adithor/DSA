//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution
{
    public:
    //Function to find sum of all possible substrings of the given string.
    long long sumSubstrings(string s){
        
        const long long int mod = 1e9+7;

        int n =s.size();

        long long int ans=0;

        long long int prev=s[0]-'0';

        long long int next;

        ans+=prev;

        for(int i=1; i<n; i++){

            next=(i+1)*(s[i]-'0')+10*prev;

            next%=mod;

            ans+=next;

            ans%=mod;

            prev=next;

        }

        return ans;
    }
};

//{ Driver Code Starts.
int main()
{
    //taking total testcases
    int t;
    cin>>t;
    while(t--)
    {
        //taking string
        string s;
        cin>>s;
        Solution ob;
        //calling sumSubstrings() function
        cout << ob.sumSubstrings(s) << endl;
        
    }
    return 0;
}

// } Driver Code Ends