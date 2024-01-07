//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
  
      bool check(int arr[] ,int N, int K, int sum){
        int csum = 0, subA = 1;
        
        for(int i = 0; i < N; i++){
            if(subA > K)    return false;
            
            csum += arr[i];
            
            if(csum > sum){
                csum = arr[i];
                ++subA;
            }
        }
        
        return subA <= K;
    }
    int splitArray(int arr[] ,int N, int K) {
        // code here
        
         int l = 1, h = 0, ans = INT_MAX;
        
        for(int i = 0; i < N; i++)  
            h += arr[i], l = max(l, arr[i]);
            
        while(l <= h){
            int sum = l + (h - l) / 2;
            
            if(check(arr, N, K, sum)){
                ans = min(ans, sum);
                h = sum - 1;
            }
            
            else    l = sum + 1;
        }
        
        return ans;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int N, K;
        
        cin>>N>>K;
        int arr[N];
        
        for(int i=0 ; i<N ; i++)
            cin>>arr[i];

        Solution ob;
        cout<<ob.splitArray(arr,N,K);
        cout<<"\n";
    }
    return 0;
}
// } Driver Code Ends