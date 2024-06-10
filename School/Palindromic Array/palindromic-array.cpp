//{ Driver Code Starts
#include<iostream>
#include<string.h>
using namespace std;


// } Driver Code Ends
/*Complete the function below*/

class Solution {
public:
      int checkPalindrome(int a){
        int rev=0;
        int digit;
        int num=a;
        while(a!=0){
            digit=a%10;
            rev=(rev*10)+digit;
            a=a/10;
        }
        if(num==rev){
            return 1;
        }
        else{
            return 0;
        }
    }
    int PalinArray(int a[], int n)
    {
        int i=0;
        while(i<n){
            if(checkPalindrome(a[i])){
                i++;
            }
            else{
                return 0;
            }
        }
        return 1;
    }
};

//{ Driver Code Starts.

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		int a[n];
		for(int i = 0; i < n; i++)
			cin>>a[i];
		Solution obj;
		cout<<obj.PalinArray(a,n)<<endl;
	}
}
// } Driver Code Ends