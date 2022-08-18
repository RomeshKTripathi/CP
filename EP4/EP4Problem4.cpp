#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int n,mod,rev=0;
		cin>>n;
		do{
			mod=n%10;
			rev=rev*10+mod;
			n/=10;
		}while(n!=0);
		cout<<rev<<endl;
	};
}