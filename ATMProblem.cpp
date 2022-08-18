#include<bits/stdc++.h>
using namespace std;
int main(){
	int wa;
	double ib,fee=0.5;
	cin>>wa>>ib;
	if(wa>2000 || ib>2000) return 0;
	if(wa%5!=0 || wa>=ib){
		cout<<fixed<<setprecision(2)<<ib; 
		return 0;
	}

	ib -= (wa+fee);
	cout<<fixed<<setprecision(2)<<ib;
	return 0;
}