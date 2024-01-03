//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++

class Solution {
  public:
    int smallestSubstring(string s) {
        // Code here
        s += '3';
        int n = s.length();
        int num0 = 0;
        int num1 = 0;
        int num2 = 0;
        
        int i = 0;
        int j = 0;
        
        int maxi = INT_MAX;
        
        while(j < n + 1)
        {
            if(num0 > 0 && num1 > 0 && num2 > 0)
            {
                int curr = (j - 1 - i + 1);
                if(curr >= 3) maxi = min(maxi, curr);
                if(s[i] == '0')
                {
                    num0--;
                }
                else if(s[i] == '1')
                {
                    num1--;
                }
                else if(s[i] == '2')
                {
                    num2--;
                }
                i++;
                //maxi--;
            }
            
            
            else
            {
                if(s[j] == '0')
                {
                    num0++;
                }
                else if(s[j] == '1')
                {
                    num1++;
                }
                else if(s[j] == '2')
                {
                    num2++;
                }
                j++;
         
            }
        }
        return (maxi == INT_MAX)? -1 : maxi;
         
    }
};


//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        string S;
        cin >> S;
        Solution ob;
        cout << ob.smallestSubstring(S);
        cout << endl;
    }
}
// } Driver Code Ends