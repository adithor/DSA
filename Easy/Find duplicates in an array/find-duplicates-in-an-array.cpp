//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
  public:
    vector<int> duplicates(long long arr[], int n) {
        // code here
            set<int> a;
        
     sort(arr,arr+n);
     int i=0;
     while(i+1<n){
         if(arr[i]==arr[i+1]){
            a.insert(arr[i]);
            i++;
         }
         i++;
     }
    if(a.size()>0){
        return vector<int>(a.begin(), a.end());;
    }
    else{
        return {-1};
    }
    }
};


//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t-- > 0) {
        int n;
        cin >> n;
        long long a[n];
        for (int i = 0; i < n; i++) cin >> a[i];
        Solution obj;
        vector<int> ans = obj.duplicates(a, n);
        for (int i : ans) cout << i << ' ';
        cout << endl;
    }
    return 0;
}

// } Driver Code Ends