//{ Driver Code Starts

#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
/*You are required to complete this method */

class Solution{
  public:
    vector<int> matrixDiagonally(vector<vector<int>>&mat)
    {
         //Your code here
           int n=mat.size();
         map<int, vector<int>> mp;
         for(int i=0; i<n; i++) {
             for(int j=0; j<n; j++) {
                 mp[i+j].push_back(mat[i][j]);
             }
         }
         vector<int> ans;
         for(auto it= mp.begin(); it!=mp.end(); it++) {
             vector<int> temp = it->second;
             if(it->first%2==0) reverse(temp.begin(), temp.end());
             for(auto it: temp) ans.push_back(it);
         }
         return ans;
    }
};


//{ Driver Code Starts.
int main()
{
    int T;
    cin>>T;
  
    while(T--)
    {
        int n;
        int k=0;
        //cin>>k;
        cin>>n;
        vector<vector<int>>mat(n, vector<int>(n));
        for(int i = 0; i < n; i++){
            for(int j = 0; j < n; j++){
                cin >> mat[i][j];
            }
        }
        Solution obj;
        vector<int>ans = obj.matrixDiagonally(mat);
        for(auto i: ans)cout << i << " ";
        cout << "\n";
        
       
    }
}
// } Driver Code Ends