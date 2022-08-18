#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int n,l,r;
		cin>>n>>l>>r;
		int pairCount=0;
		int arr[n];
		for(int i=0;i<n;i++)cin>>arr[i];

		for(int i=0;i<n-1;i++){
			for(int j=i+1;j<n;j++){
				if((arr[i]+arr[j])>=l && (arr[i]+arr[j])<=r){
					pairCount+=1;
				}
			}
		}
		cout<<pairCount<<endl;
	}
	return 0;
}