//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function template for C++
class Solution{
public:	
	bool sameFreq(string s)
	{
	    // code here 
	     unordered_map<char,int>m;
	    for(auto i:s){
	        m[i]++;
	        
	    }
	   
	   int st=0;
	   int mini=INT_MAX;
	    for(auto i:m){
	        st+=i.second;
	        mini=min(mini,i.second);
	    }
	    mini*=(m.size());
	    if((st-mini)<=1)return true;
	    return false;
	}
};

//{ Driver Code Starts.
int main(){
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        Solution ob;
        cout<<ob.sameFreq(s)<<endl;
    }
}



// } Driver Code Ends