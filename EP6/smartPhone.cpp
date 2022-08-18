#include<bits/stdc++.h>
using namespace std;
int main(){
	long long int n;
	cin>>n;
	long long int arr[n];
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	sort(arr,arr+n);
	long long int z = n;
	int profit=0;
	for(int i=0;i<n;i++){
		if(profit<(arr[i]*z)){
			profit = arr[i]*z;
		}
		z-=1;
	}
	cout<<profit<<"😄🔥🔥🔥😄";
	return 0;
}




//lele comment🔥🔥🔥