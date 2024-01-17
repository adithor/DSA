//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution {
  public:
    void  solve(vector<int>arr,unordered_map<int,int>&mp,set<int>se,int i,vector<vector<int>>&ans,vector<int>v){
    if(i>=arr.size()){
        //cout<<"hello";
        ans.push_back(v);
        return;
    }
     for (int element : se) {
       // cout<<"hi";
       if(mp[element]>0){
           mp[element]--;
           v.push_back(element);
        solve(arr,mp,se,i+1,ans,v);
         mp[element]++;
         v.pop_back();
       }
       

  }
}
    vector<vector<int>> uniquePerms(vector<int> &arr ,int n) {
        // code here
               sort(arr.begin(),arr.end());
        unordered_map<int,int>mp;
        set<int>se;
        for(auto val:arr){
            se.insert(val);
            mp[val]+=1;
        }
       vector<vector<int>>ans;
       vector<int>v;
    
        solve(arr,mp,se,0,ans,v);
        return ans;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        
        cin>>n;
        vector<int> arr(n);
        
        for(int i=0 ; i<n ; i++)
            cin>>arr[i];

        Solution ob;
        vector<vector<int>> res = ob.uniquePerms(arr,n);
        for(int i=0; i<res.size(); i++)
        {
            for(int j=0; j<n; j++)
            {
                cout<<res[i][j]<<" ";
            }
            cout<<"\n";
        }
    }
    return 0;
}
// } Driver Code Ends