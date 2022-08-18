#include<bits/stdc++.h>
using namespace std;
int main(){
	int N,value;
	unsigned long long int product=1;
	cin>>N;
	while(N--){
		cin>>value;
		product=(product*value)%(1000000000+7);
	};
	cout<<product;
	
	return 0;
}