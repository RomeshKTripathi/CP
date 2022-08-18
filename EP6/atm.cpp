#include<bits/stdc++.h>
using namespace std;

int main(){
	int wa;
	double ib;
	 double fee = 0.5;
	cin>>wa>>ib;
	if(wa%5!=0) return 0;
	double amount = ib-(wa + fee);
	cout<<setprecision(2)<<fixed<<amount;


	return 0;
}