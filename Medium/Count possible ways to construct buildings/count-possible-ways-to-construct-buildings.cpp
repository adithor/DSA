//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
	public:
	int mod=1e9+7;
	long long help(int ind, vector<int> &dp){
	    if(ind<=0)return 0;
	    if(dp[ind]!=-1)return dp[ind];
	    
	    long long  notpick=help(ind-1,dp);
	    long long pick=1+help(ind-2,dp);
	    
	    return  dp[ind]=(pick%mod+notpick%mod)%mod;
	}
	int TotalWays(int n)
	{
	    // Code here
	    
	    vector<int> dp(n+1,-1);
	   long long ans=help(n,dp);
	   ans++;
	   return (ans*ans)%mod;
	    
	}
};

//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int N;
		cin >> N;
		Solution ob;
		int ans = ob.TotalWays(N);
		cout << ans <<"\n";
	}
	return 0;
}
// } Driver Code Ends