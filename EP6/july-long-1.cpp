#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	int d,x,y,z;

	while(t--){
		cin>>d>>x>>y>>z;
		int firstCase,secondCase;
		firstCase = ((d*y)+(7-d)*z);
		secondCase = (7*x);
		if(firstCase>secondCase)cout<<firstCase<<endl;
		else cout<<secondCase<<endl;
	}
	return 0;
}