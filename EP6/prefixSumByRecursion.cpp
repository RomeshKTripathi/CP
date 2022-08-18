#include<iostream>
using namespace std;
void prefix_sum(int arr[],int n){
	for(int i=1;i<n;i++) arr[i]=arr[i]+arr[i-1];
}
int main(){
	int n;
	cin>>n;

	int arr[n],Arr[n];
	for(int i=0;i<n;i++){
		cin>>arr[i];
		Arr[i]=Arr[i];
	}
	prefix_sum(arr,n);
	for(int i=0;i<n;i++)
		cout<<arr[i]<<" ";
		cout<<endl;
	// for(int i=n-1;i>0;i--)cout<<(arr[i]-arr[i-1])<<' ';
	// 	cout<<arr[0];
	return 0;
}