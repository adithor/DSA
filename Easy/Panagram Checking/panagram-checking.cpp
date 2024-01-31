//{ Driver Code Starts
//Initial template for C++

#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function template for C++

class Solution
{
  public:
    //Function to check if a string is Pangram or not.
       bool checkPangram (string &str) {
        
       vector <int> v(26,0); 
       for(int i=0;i<str.length();i++)
       {
           if(str[i] >= 'a' and str[i]<='z')
                v[str[i]-'a']++;
          if(str[i] >= 'A' and str[i]<='Z')
                v[str[i]-'A']++;      
       }
       for(int i=0;i<v.size();i++)
        {
            if(v[i]==0)
                return false;
        }
        return true;
       
    }

};

//{ Driver Code Starts.

// Driver Program to test above functions
int main()
{
    int t;
    cin>>t;
    cin.ignore(INT_MAX, '\n');
    while(t--){
        string s;
        getline(cin, s);
        Solution obj;
        if (obj.checkPangram(s) == true)
            cout<<1<<endl;
        else
            cout<<0<<endl;
    }
    return(0);
}

// } Driver Code Ends