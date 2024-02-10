//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
    int n;
    int dp[101][101][101];
    int solve(int i, int j, int k, vector<vector<int>> &arr){
        if(i >= n || j >= n){
            return 0;
        }
        if(i == n - 1 && i == j){
            return k == arr[i][j];
        }
        if(k < 0){
            return 0;
        }
        
        if(dp[i][j][k] != -1) {
            return dp[i][j][k];
        }
        
        int down = solve(i + 1, j, k - arr[i][j], arr);
        int right = solve(i ,j + 1, k - arr[i][j], arr);
        
        return dp[i][j][k] = down + right ;
    }
public:
    long long numberOfPath(int N, int k, vector<vector<int>> &arr) {
        n = N;
        
        memset(dp, -1, sizeof dp);
        
        return solve(0, 0, k, arr);
    }
};


//{ Driver Code Starts.

int main()
{
    Solution obj;
    int i,j,k,l,m,n,t;
    cin>>t;
    while(t--)
    {
        cin>>k>>n;
        vector<vector<int>> v(n, vector<int>(n, 0));
        for(i=0;i<n;i++)
            for(j=0;j<n;j++)
                cin>>v[i][j];
        cout << obj.numberOfPath(n, k, v) << endl;
    }
}
// } Driver Code Ends