//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
    public:
        int f(int k)
        {
            return k/2+k/3+k/4;
        }
        int solve(int n, int total)
        {
            if(n<1)
                return n;
            if(n < f(n))
            {
                return solve(n/2, f(n/2)) + solve(n/3, f(n/3)) + solve(n/4, f(n/4));
            }
            return n;
        }
        int maxSum(int n)
        {
            //code here.
            return solve(n, 0);
        }
};

//{ Driver Code Starts.
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        Solution ob;
        cout<<ob.maxSum(n)<<"\n";
    }
    return 0;
}
// } Driver Code Ends