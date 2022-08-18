#include<bits/stdc++.h>
using namespace std;
void prefix_sum(int arr[],int n){
	for(int i=1;i<n;i++) arr[i]=arr[i]+arr[i-1];
}
int main(){
	int t;
	cin>>t;
	while(t--){
		int n,previousSum=0;
		cin>>n;
		int arr[n],Arr[n];
		for(int i=0;i<n;i++){
			cin>>arr[i];
			Arr[i]=arr[i];
		}
		prefix_sum(arr,n);
		int i;
		for( i=1;i<n-1;i++){
			int l=0,r=i,max=0,size=0,index=0,occurence=0;
			for(int j=0;j<n-i;j++){
				if(arr[j+r]>=arr[j+l]){
					if(arr[j+r]>arr[j+l]){
						max=arr[j+r];
						occurence=1;
						index=j+r;
					}
					if(arr[j+r]=arr[j+l]){
						occurence+=1;
						if(max*occurence>previousSum){
							previousSum=max*occurence;
						}
					}
				}
			}
		}
		cout<<previousSum<<endl;
	}
	return 0;
}