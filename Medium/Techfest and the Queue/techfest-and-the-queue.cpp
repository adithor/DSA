//{ Driver Code Starts

#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution {
public:
	int sumOfPowers(int a, int b){
	    // Code here
	      int ans=0;
        for(int i=a;i<=b;i++){
            int j=2;
          
            int no=i;
            int p=sqrt(i);
            while(j<=p and no!=1){
                if(no%j==0){
                   
                   
                    ans+=1;
                    no=no/j;
                }else{
                    j++;
                }
            }
            
            if (no!=1)ans+=1;
        }
        return ans;
	}
};

//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int a, b;
		cin >>  a >> b;
		Solution obj;
		int ans = obj.sumOfPowers(a, b);
		cout << ans <<"\n";
	}
	return 0;
}
// } Driver Code Ends