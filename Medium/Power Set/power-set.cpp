//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution{
public:
  void sub(char* input, char* output, string s, vector<string>& res, int i, int j) 
  {
        if (input[i] == '\0') 
        {
            output[j] = '\0';
            if (output[0] != '\0')
                res.push_back(output);
            return;
        }
 
        sub(input, output, s, res, i + 1, j);
 
        output[j] = input[i];
        sub(input, output, s, res, i + 1, j + 1);
    }
 
    vector<string> AllPossibleStrings(string s) 
    {
        vector<string> res;
        char input[s.size() + 1];
        char output[s.size() + 1];
        for (int i = 0; i < s.size(); i++) 
        {
            input[i] = s[i];
        }
        input[s.size()] = '\0';
 
        sub(input, output, s, res, 0, 0);
        sort(res.begin(),res.end());
        return res;
    }
};


//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		string s;
		cin >> s;
		Solution ob;
		vector<string> res = ob.AllPossibleStrings(s);
		for(auto i : res)
			cout << i <<" ";
		cout << "\n";

	}
	return 0;
}
// } Driver Code Ends