//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

int findElement(int arr[], int n);

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, i;
        cin >> n;
        int a[n];
        for (i = 0; i < n; i++) cin >> a[i];
        cout << findElement(a, n) << endl;
    }
    return 0;
}

// } Driver Code Ends


int findElement(int arr[], int n) {
    
      for(int i=1;i<n-1;i++){
          
        int left=0,right=n-1;
    
        int flag=1;
        
        while(left<i || right>i){
            
            if(arr[left]>arr[i] && left<i){
                
                flag=0;
                break;
                
            }
            if(arr[right]<arr[i] && right>i){
                
                flag=0;
                break;
            }
            
            left++;
            right--;
            
        }
        if(flag==1)
        
            return arr[i];
    }
    return -1;
}