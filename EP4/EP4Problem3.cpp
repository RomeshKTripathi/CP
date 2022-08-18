#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int n,mod,sum=0;
		cin>>n;

		do{
			mod=n%10;
			sum+=mod;
			n/=10;
		}while(n!=0);
		cout<<sum<<endl;
	};
}