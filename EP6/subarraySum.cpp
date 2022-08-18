#include<bits/stdc++.h>
using namespace std;
int giveMeLessSum(vector<int> v,int n,int mySum){
	while(mySum>n){
		mySum-=v[0];
		v.pop_front();
	}
		return mySum;
}

int main(){
	int t;
	vector<int> v;
	cin>>t;
	while(t--){
		int n,s,mySum=0;
		cin>>n>>s;
		int arr[n];
		for(int i=0;i<n;i++){
			cin>>arr[i];
		}
		for(int i=0;i<n;i++){
			v.push_back(arr[i]);
			mySum+=arr[i];
			if(mySum==s){
				break;
			}
			else if(mySum>s){
				v.pop_front();
				mySum=giveMeLessSum(v,s,mySum);
			}
		}
		for(int i=v.begin();i<v.end();i++)cout<<v[i];

	}
	return 0;
}