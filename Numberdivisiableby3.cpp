// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
// User function Template for C++

class Solution {
  public:
    int isPossible(int N, int arr[]) {
        // code here
        int sum=0;
        for(int i=0;i<N;i++){
            sum+=arr[i];
        }
        if(sum%3==0){
            return 1;
        }
        return 0;
    }
};

// { Driver Code Starts.

int main() {
    int arr[] = {};
    Solution ob;
    cout<<ob.isPossible(2,arr);

    return 0;
}  // } Driver Code Ends