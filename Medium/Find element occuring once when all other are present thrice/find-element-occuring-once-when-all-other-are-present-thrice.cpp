//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution {
  public:
    int singleElement(int arr[] ,int N) {
        // code here
    unordered_map<int, int> countMap;

    // Count the occurrences of each element in the array
    for (int i = 0; i < N; i++) {
        countMap[arr[i]]++;
    }

    // Find the element with count not equal to 3
    for (auto it = countMap.begin(); it != countMap.end(); it++) {
        if (it->second != 3) {
            return it->first;
        }
    }

    return -1; // Return -1 if not found (this should not happen in the given problem)
        
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        
        cin>>N;
        int arr[N];
        
        for(int i=0 ; i<N ; i++)
            cin>>arr[i];

        Solution ob;
        cout<<ob.singleElement(arr,N);
        cout<<"\n";
    }
    return 0;
}
// } Driver Code Ends