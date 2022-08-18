#include<bits/stdc++.h>
using namespace std;
int main(){
	long long int n;
	cin>>n;
	long int ron = sqrt(n);
	if(pow(ron,2)==n)cout<<ron-1;
	else cout<<ron;
	return 0;
}