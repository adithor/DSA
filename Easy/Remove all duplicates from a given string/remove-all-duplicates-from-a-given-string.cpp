//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;


// } Driver Code Ends
//User function template for C++

class Solution{
public:
    bool check(string st,char s){
        for(int i=0;i<st.length();i++){
            if(s==st[i])return false;
        }
        return true;
    }
string removeDuplicates(string str) {
   string ans="";
   ans.push_back(str[0]);
   for(int i=1;i<str.length();i++){
       if(check(ans,str[i])){
           ans.push_back(str[i]);
       }
   }
   return ans;
}
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        string str;
        cin >> str;
        Solution ob;
        auto ans = ob.removeDuplicates(str);

        cout << ans << "\n";
    }
    return 0;
}
// } Driver Code Ends